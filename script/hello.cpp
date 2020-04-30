#include <gazebo/gazebo.hh>

namespace gazebo
{
  class launch : public WorldPlugin
  {
    public: launch() : WorldPlugin()
            {
              printf("hi there!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(launch)
}
