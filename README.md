# AR-VisualGuide

AR-VisualGuide is a prototype application developed mainly in Unity for use in Android, which aims to provide visitors of the Archeological Museum of Thessaloniki with navigational assistance and information about the various exhibits. 

This application was the main objective of a thesis for the Electrical and Computer Engineering degree, which may be found [here](http://ikee.lib.auth.gr/record/349017/?ln=en). 


## Demo

The finished application APK ready to use is provided inside the project [here](https://github.com/Driexus/AR-VisualGuide/tree/main/APKs/FinalBuild/VisualGuide.apk).

A short demo may be found [here](https://youtube.com/shorts/i4_P2L0y6VQ?feature=share).


## Technologies

Tools and Packages:
- Unity
- Vuforia
- Firebase (and [Pyrebase](https://github.com/thisbejim/Pyrebase))
- Blender

Languages:
- C#
- Python

Blender, Pyrebase and Python were only used in the [sibling project](https://github.com/Driexus/AR-VisualGuideDesktop), which is responsible for the mapping of the physical space and the objects found within.

## How it works

The application may be split into 3 parts:
 - Mapping of the physical space
	 > This action takes place in Blender, where a person uses edges to represent physical borders (like walls) and then uploads the completed plan to Firebase using the modules developed in the sibling project.
 - Selection of the necessary Image Targets
	 > In order to locate the user several features of the Vuforia package are utilized, mainly, the image recognition capabilities. For this purpose a person needs to find and upload suitable images through the application to the Firebase server and then provide through Blender their relative location and orientation in accordance to the plan provided in the previous step.
- Final usage
	> If the previous two steps are completed successfully, any user may use the app by downloading the provided APK and selecting the space they want to explore. Currently, only the Archeological Museum of Thessaloniki is provided, nevertheless, any number of spaces are supported


## Why Firebase

In order for the application to be of relatively small size as well as not be in need of constant software updates every time the model of some space changes, it was deemed necessary to hold the space information in a database and download it each time the application is used (a caching approach is suggested in the future). 

Therefore, Firebase was used due to the provided ease of the implementation details and the personal experience of the developer. Probably though, a more traditional SQL database would be a better fit for this project.

## Documentation
Inside the project there is an obsidian vault which may be used with [Obsidian](https://obsidian.md/) to provide a lot of extra info about specific classes, their purpose and their usage.
