@interface SBAlertToAppWorkspaceTransaction : SBToAppWorkspaceTransaction
{
	id _alert;
	id _siriUnlockAssertion;
	id _animation;
	BOOL _preventAlertDeactivationForAnimation;
	BOOL _preventAlertDeactivationForAnimationLegacy;
	BOOL _animatedAppActivation;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingFromAssistant;
	BOOL _fadeAssistant;
}

+ initWithWorkspace:alertManager:alert:toApplication:activationHandler:
+ animationController:willBeginAnimation:
+ animationControllerDidFinishAnimation:
+ _transactionComplete
+ selfApplicationDidBecomeReceiver:fromApplication:
+ selfApplicationWillBecomeReceiver:fromApplication:
+ selfApplicationDidFinishLaunching:withInfo:
+ selfApplicationActivated:
+ selfApplicationLaunchDidFail:
+ selfApplicationExited:
+ selfAlertWillDeactivate:
+ selfAlertDidDeactivate:
+ shouldDismissSwitcher
+ _endAnimation
+ shouldPerformToAppStateCleanupOnCompletion
+ _alertAnimationComplete:
+ _deactivateAlertIfNecessary
+ _handleFailure
+ _commit
+ alert
+ dealloc
+ debugDescription
- initWithWorkspace:alertManager:alert:toApplication:activationHandler:
- animationController:willBeginAnimation:
- animationControllerDidFinishAnimation:
- _transactionComplete
- selfApplicationDidBecomeReceiver:fromApplication:
- selfApplicationWillBecomeReceiver:fromApplication:
- selfApplicationDidFinishLaunching:withInfo:
- selfApplicationActivated:
- selfApplicationLaunchDidFail:
- selfApplicationExited:
- selfAlertWillDeactivate:
- selfAlertDidDeactivate:
- shouldDismissSwitcher
- _endAnimation
- shouldPerformToAppStateCleanupOnCompletion
- _alertAnimationComplete:
- _deactivateAlertIfNecessary
- _handleFailure
- _commit
- alert
- dealloc
- debugDescription
@end
