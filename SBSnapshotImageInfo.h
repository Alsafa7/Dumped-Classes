@interface SBSnapshotImageInfo : NSObject
{
	BOOL _defaultPNG;
	id _path;
	id _screen;
	double _scale;
	long long _launchingOrientation;
	long long _originalOrientation;
}

+ setLaunchingOrientation:
+ _stringForInterfaceOrientation:
+ launchingOrientation
+ dealloc
+ description
+ screen
+ scale
+ path
+ setScreen:
+ setScale:
+ setPath:
+ defaultPNG
+ setDefaultPNG:
+ setOriginalOrientation:
+ originalOrientation
- setLaunchingOrientation:
- _stringForInterfaceOrientation:
- launchingOrientation
- dealloc
- description
- screen
- scale
- path
- setScreen:
- setScale:
- setPath:
- defaultPNG
- setDefaultPNG:
- setOriginalOrientation:
- originalOrientation
@end
