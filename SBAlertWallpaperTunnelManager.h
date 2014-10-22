@interface SBAlertWallpaperTunnelManager : NSObject
{
	id _alertManager;
	id _hiderToHideeMap;
	id _hiddenAlerts;
}

+ alertManager:willActivateAlert:overAlerts:
+ alertManager:didDeactivateAlert:top:
+ pushTunnelToWallpaperForAlert:
+ popTunnelToWallpaperForAlert:
+ _setAlertManager:
+ _hideAlerts:onBehalfOfAlert:
+ _stopHidingAlertsForAlert:
+ _adjustHiddenAlerts
+ dumpTunnelState
+ _showAlert:
+ _hideAlert:
+ dealloc
+ init
- alertManager:willActivateAlert:overAlerts:
- alertManager:didDeactivateAlert:top:
- pushTunnelToWallpaperForAlert:
- popTunnelToWallpaperForAlert:
- _setAlertManager:
- _hideAlerts:onBehalfOfAlert:
- _stopHidingAlertsForAlert:
- _adjustHiddenAlerts
- dumpTunnelState
- _showAlert:
- _hideAlert:
- dealloc
- init
@end
