@interface SBScreenTimeTrackingController : NSObject
{
	usigned long long _thisCategoryStartTime;
	double _lastCategoryChangeTime;
	int _activeCategory;
	int _previousCategory;
	id _alertManager;
}

+ alertManager:didActivateAlert:overAlerts:
+ controlCenterWillPresent
+ controlCenterDidDismiss
+ controlCenterWillBeginTransition
+ controlCenterDidFinishTransition
+ _noteLocked
+ _noteLockScreenUndimmed
+ _noteAppBecameFrontmost:
+ _noteSiriVisibilityChanged
+ _noteAppSliderDidAppear
+ _noteSearchVisibilityDidChange:
+ _noteNotificationCenterWillDismiss
+ _noteNotificationCenterNotificationsWillAppear
+ _noteNotificationCenterTodayWillAppear
+ _noteLockScreenCameraDidAppear
+ _noteLockScreenCameraDidDisappear
+ _noteControlCenterControlDidActivate:
+ _noteControlCenterControlDidDeactivate:
+ _noteMediaControlsDidAppear
+ _noteMediaControlsDidDisappear
+ _noteBacklightDidTurnOn:
+ _noteSignificantTimeChanged:
+ _isLockScreenNavigationActive
+ _setActiveCategory:
+ _resetCategoryForContext:
+ _nameForCurrentContext
+ dealloc
+ initWithAlertManager:
+ _activeContext
- alertManager:didActivateAlert:overAlerts:
- controlCenterWillPresent
- controlCenterDidDismiss
- controlCenterWillBeginTransition
- controlCenterDidFinishTransition
- _noteLocked
- _noteLockScreenUndimmed
- _noteAppBecameFrontmost:
- _noteSiriVisibilityChanged
- _noteAppSliderDidAppear
- _noteSearchVisibilityDidChange:
- _noteNotificationCenterWillDismiss
- _noteNotificationCenterNotificationsWillAppear
- _noteNotificationCenterTodayWillAppear
- _noteLockScreenCameraDidAppear
- _noteLockScreenCameraDidDisappear
- _noteControlCenterControlDidActivate:
- _noteControlCenterControlDidDeactivate:
- _noteMediaControlsDidAppear
- _noteMediaControlsDidDisappear
- _noteBacklightDidTurnOn:
- _noteSignificantTimeChanged:
- _isLockScreenNavigationActive
- _setActiveCategory:
- _resetCategoryForContext:
- _nameForCurrentContext
- dealloc
- initWithAlertManager:
- _activeContext
@end
