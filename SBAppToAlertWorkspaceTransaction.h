@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction
{
	id _topApplication;
	id _topApplicationActivationAssertion;
	BOOL _topApplicationSuppressesSpringBoardStatusBar;
	id _activatingAlert;
	id _animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	BOOL _suspendWorkspace;
}

+ initWithWorkspace:alertManager:alert:overTopApplication:
+ setAlertActivationBlock:
+ animationController:willBeginAnimation:
+ animationControllerDidFinishAnimation:
+ _transactionComplete
+ selfAlertWillActivate:overAlerts:
+ selfAlertDidActivate:overAlerts:
+ alertActivationBlock
+ _commit
+ dealloc
+ debugDescription
- initWithWorkspace:alertManager:alert:overTopApplication:
- setAlertActivationBlock:
- animationController:willBeginAnimation:
- animationControllerDidFinishAnimation:
- _transactionComplete
- selfAlertWillActivate:overAlerts:
- selfAlertDidActivate:overAlerts:
- alertActivationBlock
- _commit
- dealloc
- debugDescription
@end
