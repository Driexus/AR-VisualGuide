"Image Targets represent images that Vuforia Engine can detect and track. The Engine detects and tracks the image by comparing extracted natural features from the camera image against a known target resource database." ~Vuforia Docs

Documentation for image targets [here](https://library.vuforia.com/objects/image-targets) and for instant image targets (created during runtime) [here](https://library.vuforia.com/objects/create-and-load-targets-unity).

In the context of the application, many different targets are used in precalculated locations in the physical space, in order for the application to achieve the localization of the camera.

The detection of an image target, as well as the calculation of the distance and pose related to the camera are all handled by the vuforia engine.

#VuforiaEngine 