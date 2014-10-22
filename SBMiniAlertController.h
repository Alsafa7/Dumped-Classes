@interface SBMiniAlertController : NSObject
{
	id _displayShowingAnAlert;
	bit[1] _sbMiniAlertVisible;
	id _hiddenAlertWindow;
}

+ displayWillShowMiniAlert:
+ displayWillDismissMiniAlert:
+ miniAlertVisible
+ deactivateAlertItemsForDisplay:
+ displayDidDismissMiniAlert:
+ noteMiniAlertStateChanged
+ _setAlertVisibleNotifyState:
+ _hideMiniAlertsForApp:
+ _setDisplayShowingAnAlert:
+ showApplicationMiniAlertsIfNeeded
+ displayShowingAnAlert
+ hideApplicationMiniAlerts
+ dealloc
+ init
+ canShowAlerts
- displayWillShowMiniAlert:
- displayWillDismissMiniAlert:
- miniAlertVisible
- deactivateAlertItemsForDisplay:
- displayDidDismissMiniAlert:
- noteMiniAlertStateChanged
- _setAlertVisibleNotifyState:
- _hideMiniAlertsForApp:
- _setDisplayShowingAnAlert:
- showApplicationMiniAlertsIfNeeded
- displayShowingAnAlert
- hideApplicationMiniAlerts
- dealloc
- init
- canShowAlerts
@end
