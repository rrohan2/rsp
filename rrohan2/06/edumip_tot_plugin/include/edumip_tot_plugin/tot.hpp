#include <ignition/gazebo/System.hh>
#include <vector>
#include <math.h>

#include <ignition/plugin/Register.hh>

#include <ignition/transport/Node.hh>
#include <ignition/gazebo/Model.hh>
#include "ignition/gazebo/components/JointPosition.hh"
#include <ignition/msgs/pose.pb.h>
#include <ignition/gazebo/components/Pose.hh>

using namespace std;

namespace ignition{
  namespace gazebo {
    namespace systems{
			class TotPlugin:
			  public System,
			  public ISystemConfigure,
			  public ISystemPreUpdate,
			  public ISystemUpdate,
			  public ISystemPostUpdate {

			private:

			  transport::Node node;
			  transport::Node::Publisher posePub1;
			  transport::Node::Publisher posePub2;

			  Entity edumip_entity;
			  string sensor1_name, sensor2_name;

			  Model model{kNullEntity};

				float s1x, s1y, s2x, s2y;

			public:

			  TotPlugin();
			  ~TotPlugin();

			  void callback( const ignition::msgs::Pose_V& msg  );
			  
			  void Configure( const Entity& entity,
											  const std::shared_ptr<const sdf::Element>& sdf,
											  EntityComponentManager& ecm,
											  EventManager& eventmgr ) override;

			  void PreUpdate( const UpdateInfo& info,
					  						EntityComponentManager& ecm ) override;

			  void Update( const UpdateInfo& info,
				       			 EntityComponentManager& ecm ) override;
			  
			  void PostUpdate( const UpdateInfo& info,
					   						 const EntityComponentManager& ecm ) override;
			  
			  vector<pair<double, double>> intersectTwoCircles(double x1, double y1, double r1, double x2, double y2, double r2);

			};
		}
	}
}
