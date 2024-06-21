Extracting a protected function to BP usability


Custom Function to set collision preset
There are lot of functions which are not exposed as functions in the blueprints. One of those simple case is to batch the process of changing the Collision Preset of a Static Mesh using the asset action module.

Searching all way through forums to look out to perform this ended up in creating my own Blueprint Library to ease up the workflow.


I need to change the collision preset for almost 1000 of assets in my project, which i tried to automate. Bulk action toolset didn't filter out this parameter.

One answer in the forum from @Kehel18 was very clear that it has be done by exposing the function from cpp.


I hope this might help someone in with same process.

NOTE: Tested in 4.27.

For Unreal 5 the implementation might be similar to this, might require little modification. Add this additional dependency
#include “PhysicsEngine/BodySetup.h”
