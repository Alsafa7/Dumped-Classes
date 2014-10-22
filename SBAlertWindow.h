@interface SBAlertWindow : SBWindow
{
	id _rootViewController;
	id _alertToDisplayMap;
}

+ initWithScreen:rootViewController:
+ stackedAlertsIncludingActiveAlert:
+ displayAlert:
+ deactivateAlert:
+ hasActiveAlertsOrDisplays
+ stackedDisplayCount
+ noteInterfaceOrientationChangingTo:animated:
+ initWithScreen:
+ initWithFrame:
+ dealloc
+ isOpaque
- initWithScreen:rootViewController:
- stackedAlertsIncludingActiveAlert:
- displayAlert:
- deactivateAlert:
- hasActiveAlertsOrDisplays
- stackedDisplayCount
- noteInterfaceOrientationChangingTo:animated:
- initWithScreen:
- initWithFrame:
- dealloc
- isOpaque
@end
