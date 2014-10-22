@interface SBDefaultImageInfo : NSObject
{
	BOOL _hasSnapshot;
	long long _launchingInterfaceOrientation;
	double _launchingScale;
	long long _originalOrientation;
	long long _currentOrientation;
	id _image;
	struct _launchingScreenSize;
}

+ currentOrientation
+ hasSnapshot
+ setLaunchingInterfaceOrientation:
+ setLaunchingScale:
+ setLaunchingScreenSize:
+ setCurrentOrientation:
+ launchingInterfaceOrientation
+ launchingScale
+ launchingScreenSize
+ setHasSnapshot:
+ dealloc
+ setImage:
+ description
+ image
+ setOriginalOrientation:
+ originalOrientation
- currentOrientation
- hasSnapshot
- setLaunchingInterfaceOrientation:
- setLaunchingScale:
- setLaunchingScreenSize:
- setCurrentOrientation:
- launchingInterfaceOrientation
- launchingScale
- launchingScreenSize
- setHasSnapshot:
- dealloc
- setImage:
- description
- image
- setOriginalOrientation:
- originalOrientation
@end
