@interface SBLockScreenTestPluginSettings : _UISettings
{
	BOOL _enablePlugin;
	BOOL _enableLostModePlugin;
	BOOL _showDateView;
	BOOL _showDate;
	BOOL _disableOnUnlock;
	BOOL _showCamera;
	BOOL _showBackgroundView;
	usigned long long _overlayStyle;
	usigned long long _notificationBehavior;
}

+ setOverlayStyle:
+ setNotificationBehavior:
+ setEnablePlugin:
+ setEnableLostModePlugin:
+ setShowDateView:
+ setShowDate:
+ setDisableOnUnlock:
+ setShowBackgroundView:
+ setShowCamera:
+ enablePlugin
+ enableLostModePlugin
+ disableOnUnlock
+ showCamera
+ showBackgroundView
+ setDefaultValues
+ showDateView
+ notificationBehavior
+ showDate
+ overlayStyle
- setOverlayStyle:
- setNotificationBehavior:
- setEnablePlugin:
- setEnableLostModePlugin:
- setShowDateView:
- setShowDate:
- setDisableOnUnlock:
- setShowBackgroundView:
- setShowCamera:
- enablePlugin
- enableLostModePlugin
- disableOnUnlock
- showCamera
- showBackgroundView
- setDefaultValues
- showDateView
- notificationBehavior
- showDate
- overlayStyle
@end
