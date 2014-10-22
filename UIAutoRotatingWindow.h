@interface UIAutoRotatingWindow : UIWindow
{
	long long _interfaceOrientation;
	BOOL _unknownOrientation;
}

+ initWithFrame:
+ dealloc
+ hitTest:withEvent:
+ _didRemoveSubview:
+ updateForOrientation:
- initWithFrame:
- dealloc
- hitTest:withEvent:
- _didRemoveSubview:
- updateForOrientation:
@end
