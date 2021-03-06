@interface SBBulletinWindowController : NSObject
{
	id _bulletinWindow;
	long long _trueBulletinWindowOrientation;
	long long _overrideBulletinWindowOrientation;
	BOOL _rotatingKeyboard;
	BOOL _aboveAssistant;
	id _windowClients;
	id _keyClients;
	id _busyClients;
	id _busyReasons;
	id _rootVC;
}

+ setBusy:forReason:
+ overrideWindowOrientation:
+ clearOverrideWindowOrientation
+ addBusyClient:
+ removeBusyClient:
+ setWindowAboveAssistant:
+ allowsShowNotificationsGestureFromBanner
+ addWindowClient:
+ removeWindowClient:
+ allowsHideNotificationsGesture
+ allowsDismissBannerGesture
+ _resignAsKeyWindow
+ _allowsShowNotificationsGestureFromBanner:
+ _didBecomeKeyWindow:
+ _didResignKeyWindow:
+ _rotateIfNecessaryTo:withDuration:forOverride:
+ _becomeKeyWindow
+ _setOverrideWindowOrientation:
+ _setTrueWindowOrientation:
+ _shouldAllowRotation:
+ _hasOrientationOverride
+ _isBusyForReason:
+ _cleanUpAfterRotatingFromOrientation:
+ addWindowClient:withChildViewController:
+ removeWindowClient:withChildViewController:
+ windowOrientationWithoutOverrides
+ updateBulletinWindowOrientation
+ _prepareToRotateToOrientation:duration:
+ _doRotationToOrientation:duration:
+ _hasKeyWindowClients
+ isWindowAboveAssistant
+ activeInterfaceOrientationWillChangeToOrientation:
+ activeInterfaceOrientationDidChangeToOrientation:willAnimateWithDuration:fromOrientation:
+ allowsShowNotificationsGesture
+ dealloc
+ window
+ init
+ rootViewController
+ isBusy
+ windowOrientation
- setBusy:forReason:
- overrideWindowOrientation:
- clearOverrideWindowOrientation
- addBusyClient:
- removeBusyClient:
- setWindowAboveAssistant:
- allowsShowNotificationsGestureFromBanner
- addWindowClient:
- removeWindowClient:
- allowsHideNotificationsGesture
- allowsDismissBannerGesture
- _resignAsKeyWindow
- _allowsShowNotificationsGestureFromBanner:
- _didBecomeKeyWindow:
- _didResignKeyWindow:
- _rotateIfNecessaryTo:withDuration:forOverride:
- _becomeKeyWindow
- _setOverrideWindowOrientation:
- _setTrueWindowOrientation:
- _shouldAllowRotation:
- _hasOrientationOverride
- _isBusyForReason:
- _cleanUpAfterRotatingFromOrientation:
- addWindowClient:withChildViewController:
- removeWindowClient:withChildViewController:
- windowOrientationWithoutOverrides
- updateBulletinWindowOrientation
- _prepareToRotateToOrientation:duration:
- _doRotationToOrientation:duration:
- _hasKeyWindowClients
- isWindowAboveAssistant
- activeInterfaceOrientationWillChangeToOrientation:
- activeInterfaceOrientationDidChangeToOrientation:willAnimateWithDuration:fromOrientation:
- allowsShowNotificationsGesture
- dealloc
- window
- init
- rootViewController
- isBusy
- windowOrientation
@end
