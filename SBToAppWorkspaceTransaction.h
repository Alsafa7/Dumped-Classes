@interface SBToAppWorkspaceTransaction : SBWorkspaceTransaction
{
	id _toApp;
	BOOL _activateSuspended;
	double _watchdogExtension;
	BOOL _fromAssistant;
	BOOL _fromSwitcher;
	id _activationHandlerBlock;
}

+ _watchdogInterval
+ _shouldBeWatchdogged:
+ _transactionComplete
+ _interruptWithReason:
+ initWithWorkspace:alertManager:toApplication:activationHandler:
+ shouldToggleSpringBoardStatusBarOnCleanup
+ shouldDismissSwitcher
+ performToAppStateCleanup
+ shouldPerformToAppStateCleanupOnCompletion
+ shouldAnimateOrientationChangeOnCompletion
+ toApplication
+ _captureApplicationData
+ _fireAndClearActivationContinuationForActivationFailureIfNecessary
+ toggleStatusBarForCleanup
+ shouldHideSpringBoardStatusBarOnCleanup
+ _commit
+ dealloc
+ debugDescription
+ activate:
- _watchdogInterval
- _shouldBeWatchdogged:
- _transactionComplete
- _interruptWithReason:
- initWithWorkspace:alertManager:toApplication:activationHandler:
- shouldToggleSpringBoardStatusBarOnCleanup
- shouldDismissSwitcher
- performToAppStateCleanup
- shouldPerformToAppStateCleanupOnCompletion
- shouldAnimateOrientationChangeOnCompletion
- toApplication
- _captureApplicationData
- _fireAndClearActivationContinuationForActivationFailureIfNecessary
- toggleStatusBarForCleanup
- shouldHideSpringBoardStatusBarOnCleanup
- _commit
- dealloc
- debugDescription
- activate:
@end
