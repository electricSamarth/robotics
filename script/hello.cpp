#include <gazebo/gazebo.hh>

namespace gazebo
{
  class launch : public WorldPlugin
  {
    public: launch() : WorldPlugin()
            {
              printf("Welcome to Samarth's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(launch)
}
