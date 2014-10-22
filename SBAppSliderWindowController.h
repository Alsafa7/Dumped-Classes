@interface SBAppSliderWindowController : NSObject
{
	id _window;
	id _rootViewController;
	long long _trueWindowOrientation;
	long long _overrideWindowOrientation;
	id _rotationPreventionReasons;
}

+ overrideWindowOrientation:
+ clearOverrideWindowOrientation
+ setAllowRotation:forReason:
+ _rotateIfNecessaryTo:withDuration:forOverride:
+ _setOverrideWindowOrientation:
+ _setTrueWindowOrientation:
+ _shouldAllowRotation:
+ _hasOrientationOverride
+ windowOrientationWithoutOverrides
+ _windowDidBecomeVisible:
+ activeInterfaceOrientationWillChangeToOrientation:
+ activeInterfaceOrientationDidChangeToOrientation:willAnimateWithDuration:fromOrientation:
+ dealloc
+ window
+ setRootViewController:
+ rootViewController
+ initWithRootViewController:
+ windowOrientation
- overrideWindowOrientation:
- clearOverrideWindowOrientation
- setAllowRotation:forReason:
- _rotateIfNecessaryTo:withDuration:forOverride:
- _setOverrideWindowOrientation:
- _setTrueWindowOrientation:
- _shouldAllowRotation:
- _hasOrientationOverride
- windowOrientationWithoutOverrides
- _windowDidBecomeVisible:
- activeInterfaceOrientationWillChangeToOrientation:
- activeInterfaceOrientationDidChangeToOrientation:willAnimateWithDuration:fromOrientation:
- dealloc
- window
- setRootViewController:
- rootViewController
- initWithRootViewController:
- windowOrientation
@end
