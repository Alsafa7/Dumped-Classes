@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction
{
	id _animationController;
	BOOL _relaunchSuspended;
	BOOL _keepWorkspaceSuspended;
	BOOL _waitForReceiverChange;
	id _disableActiveOrientationChangeAssertion;
	id _starkScreenController;
}

+ initWithWorkspace:alertManager:application:
+ setStarkScreenController:
+ starkScreenController
+ animationController:willBeginAnimation:
+ animationControllerDidFinishAnimation:
+ _transactionComplete
+ selfApplicationDidBecomeReceiver:fromApplication:
+ selfApplicationWillBecomeReceiver:fromApplication:
+ selfApplicationDidStartLaunching:withInfo:
+ selfApplicationDidFinishLaunching:withInfo:
+ selfApplicationActivated:
+ selfApplicationLaunchDidFail:
+ selfApplicationExited:
+ shouldToggleSpringBoardStatusBarOnCleanup
+ _endAnimation
+ _animationForApp:
+ _setupAnimationForApp:
+ _handleAppRelaunch:
+ _commit
+ dealloc
+ debugDescription
- initWithWorkspace:alertManager:application:
- setStarkScreenController:
- starkScreenController
- animationController:willBeginAnimation:
- animationControllerDidFinishAnimation:
- _transactionComplete
- selfApplicationDidBecomeReceiver:fromApplication:
- selfApplicationWillBecomeReceiver:fromApplication:
- selfApplicationDidStartLaunching:withInfo:
- selfApplicationDidFinishLaunching:withInfo:
- selfApplicationActivated:
- selfApplicationLaunchDidFail:
- selfApplicationExited:
- shouldToggleSpringBoardStatusBarOnCleanup
- _endAnimation
- _animationForApp:
- _setupAnimationForApp:
- _handleAppRelaunch:
- _commit
- dealloc
- debugDescription
@end
