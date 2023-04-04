#include <edumip_tot_plugin/tot.hpp>

using namespace ignition;
using namespace gazebo;
using namespace systems;
using namespace std;
TotPlugin::TotPlugin(){
  cout << "TOT plugin constructor" << endl;
}

TotPlugin::~TotPlugin(){}

void TotPlugin::Configure(  const Entity& entity,
                            const shared_ptr<const sdf::Element>& sdf,
                            EntityComponentManager& ecm,
                            EventManager& eve){

  cout << "configure" << endl;
  edumip_entity = entity;
  model = Model(edumip_entity);

  if( sdf->HasElement("sensor1") && sdf->HasElement("sensor2") ){
    sensor1_name = sdf->Get<string>("sensor1");
    sensor2_name = sdf->Get<string>("sensor2");
    cout << "Sensor elements found :" << sensor1_name << ", " << sensor2_name << endl;
    node.Subscribe("/world/tot/dynamic_pose/info", &TotPlugin::callback, this);
    posePub1 = node.Advertise<msgs::Pose>("tot/robot_pose1");
    posePub2 = node.Advertise<msgs::Pose>("tot/robot_pose2");
  }
  else{
    cout << "Could not find sensor." << endl;
  }

}

void TotPlugin::callback( const msgs::Pose_V& msg ){
    s1x = msg.pose(0).position().x();
    s1y = msg.pose(0).position().y();
    s2x = msg.pose(1).position().x();
    s2y = msg.pose(1).position().y();
}

void TotPlugin::PreUpdate( const UpdateInfo&,
                            EntityComponentManager&){
}

void TotPlugin::Update( const UpdateInfo&,
                         EntityComponentManager& ){}

void TotPlugin::PostUpdate( const UpdateInfo& _info,
                            const EntityComponentManager& _ecm){

    const auto poseComp = _ecm.Component<components::Pose>(edumip_entity);
    const auto pose = poseComp->Data();

    double edumip_x = pose.Pos()[0] ;
    double edumip_y = pose.Pos()[1];

    double r1 = sqrt((s1x-edumip_x)*(s1x-edumip_x)+(s1y-edumip_y)*(s1y-edumip_y));
    double r2 = sqrt((s2x-edumip_x)*(s2x-edumip_x)+(s2y-edumip_y)*(s2y-edumip_y));

    vector<pair<double, double>> results = intersectTwoCircles(s1x, s1y, r1, s2x, s2y, r2);

    msgs::Pose poseMsg1;
    poseMsg1.mutable_position()->set_x(results[0].first);
    poseMsg1.mutable_position()->set_y(results[0].second);
    poseMsg1.mutable_position()->set_z(0);
    math::Quaterniond orientation(0,0,0,1);
    msgs::Set(poseMsg1.mutable_orientation(), orientation);
    poseMsg1.mutable_header()->mutable_stamp()->CopyFrom(convert<msgs::Time>(_info.simTime));
    auto frame1 = poseMsg1.mutable_header()->add_data();
    frame1->set_key("frame_id");
    frame1->add_value("base_link");

    posePub1.Publish(poseMsg1);

    msgs::Pose poseMsg2;
    poseMsg2.mutable_position()->set_x(results[1].first);
    poseMsg2.mutable_position()->set_y(results[1].second);
    poseMsg2.mutable_position()->set_z(0);
    msgs::Set(poseMsg2.mutable_orientation(), orientation);
    poseMsg2.mutable_header()->mutable_stamp()->CopyFrom(convert<msgs::Time>(_info.simTime));

    auto frame2 = poseMsg2.mutable_header()->add_data();
    frame2->set_key("frame_id");
    frame2->add_value("base_link");

    posePub2.Publish(poseMsg2);

}


std::vector<std::pair<double, double>> TotPlugin::intersectTwoCircles(double x1, double y1, double r1, double x2, double y2, double r2) {
    std::vector<std::pair<double, double>> results;
    double centerdx = x1 - x2;
    double centerdy = y1 - y2;
    double R = sqrt(centerdx * centerdx + centerdy * centerdy);
    if (!(abs(r1 - r2) <= R && R <= r1 + r2)) {
        return results;
    }

    double R2 = R*R;
    double R4 = R2*R2;
    double a = (r1*r1 - r2*r2) / (2 * R2);
    double r2r2 = (r1*r1 - r2*r2);
    double c = sqrt(2 * (r1*r1 + r2*r2) / R2 - (r2r2 * r2r2) / R4 - 1);

    double fx = (x1+x2) / 2 + a * (x2 - x1);
    double gx = c * (y2 - y1) / 2;
    double ix1 = fx + gx;
    double ix2 = fx - gx;

    double fy = (y1+y2) / 2 + a * (y2 - y1);
    double gy = c * (x1 - x2) / 2;
    double iy1 = fy + gy;
    double iy2 = fy - gy;

    results.push_back(std::make_pair(ix1, iy1));
    results.push_back(std::make_pair(ix2, iy2));
    return results;
}


IGNITION_ADD_PLUGIN( TotPlugin,
                     System,
                     TotPlugin::ISystemConfigure,
                     TotPlugin::ISystemPreUpdate,
                     TotPlugin::ISystemUpdate,
                     TotPlugin::ISystemPostUpdate )

IGNITION_ADD_PLUGIN_ALIAS(TotPlugin, "ignition::gazebo::systems::TotPlugin")


