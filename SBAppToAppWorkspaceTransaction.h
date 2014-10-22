@interface SBAppToAppWorkspaceTransaction : SBToAppWorkspaceTransaction
{
	id _fromApp;
	id _animationController;
	id _suspendingAppAssertion;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
	BOOL _deactivatingAppFromAppToAppGesture;
	BOOL _appQuitFromSwitcher;
}

+ initWithWorkspace:alertManager:exitedApp:
+ initWithWorkspace:alertManager:from:to:activationHandler:
+ fromApp
+ _setupMilestonesFrom:to:
+ animationController:willBeginAnimation:
+ animationControllerDidFinishAnimation:
+ _transactionComplete
+ selfApplicationDidBecomeReceiver:fromApplication:
+ _canBeInterrupted
+ _interruptWithReason:
+ selfApplicationWillBecomeReceiver:fromApplication:
+ selfApplicationDidFinishLaunching:withInfo:
+ selfApplicationActivated:
+ selfApplicationLaunchDidFail:
+ selfApplicationExited:
+ selfAlertDidDeactivate:
+ shouldToggleSpringBoardStatusBarOnCleanup
+ shouldDismissSwitcher
+ _setupAnimationFrom:to:
+ _setupAnimation
+ _kickOffActivation
+ _handleAppDidNotChange
+ _endAnimation
+ shouldPerformToAppStateCleanupOnCompletion
+ shouldAnimateOrientationChangeOnCompletion
+ setFromApp:
+ _commit
+ dealloc
+ debugDescription
- initWithWorkspace:alertManager:exitedApp:
- initWithWorkspace:alertManager:from:to:activationHandler:
- fromApp
- _setupMilestonesFrom:to:
- animationController:willBeginAnimation:
- animationControllerDidFinishAnimation:
- _transactionComplete
- selfApplicationDidBecomeReceiver:fromApplication:
- _canBeInterrupted
- _interruptWithReason:
- selfApplicationWillBecomeReceiver:fromApplication:
- selfApplicationDidFinishLaunching:withInfo:
- selfApplicationActivated:
- selfApplicationLaunchDidFail:
- selfApplicationExited:
- selfAlertDidDeactivate:
- shouldToggleSpringBoardStatusBarOnCleanup
- shouldDismissSwitcher
- _setupAnimationFrom:to:
- _setupAnimation
- _kickOffActivation
- _handleAppDidNotChange
- _endAnimation
- shouldPerformToAppStateCleanupOnCompletion
- shouldAnimateOrientationChangeOnCompletion
- setFromApp:
- _commit
- dealloc
- debugDescription
@end
