@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction
{
	id _activatingAlert;
	id _deactivatingAlert;
	BOOL _activation;
	id _animation;
	BOOL _animatingAlertDeactivation;
}

+ initActivationWithWorkspace:alertManager:from:to:
+ initDeactivationWithWorkspace:alertManager:from:to:
+ animationController:willBeginAnimation:
+ animationControllerDidFinishAnimation:
+ _transactionComplete
+ selfAlertWillActivate:overAlerts:
+ selfAlertDidActivate:overAlerts:
+ selfAlertWillDeactivate:
+ selfAlertDidDeactivate:
+ _endAnimation
+ _alertAnimationComplete:
+ _deactivateAlertIfNecessary
+ _handleFailure
+ _initWithWorkspace:alertManager:activatingAlert:deactivatingAlert:activation:
+ _commit
+ dealloc
+ debugDescription
- initActivationWithWorkspace:alertManager:from:to:
- initDeactivationWithWorkspace:alertManager:from:to:
- animationController:willBeginAnimation:
- animationControllerDidFinishAnimation:
- _transactionComplete
- selfAlertWillActivate:overAlerts:
- selfAlertDidActivate:overAlerts:
- selfAlertWillDeactivate:
- selfAlertDidDeactivate:
- _endAnimation
- _alertAnimationComplete:
- _deactivateAlertIfNecessary
- _handleFailure
- _initWithWorkspace:alertManager:activatingAlert:deactivatingAlert:activation:
- _commit
- dealloc
- debugDescription
@end
