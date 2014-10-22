@interface SMSPluginManager : NSObject
{
	BOOL _displayExtraAlerts;
	id _lastBulletin;
}

+ bindBulletin:forRegistry:
+ handleEvent:withBulletin:forRegistry:
+ setDisplayExtraAlerts:
+ applicationLaunched:
+ displayExtraAlerts
+ postAlertForMessageWithDictionary:
+ dealloc
+ init
+ volumeChanged:
- bindBulletin:forRegistry:
- handleEvent:withBulletin:forRegistry:
- setDisplayExtraAlerts:
- applicationLaunched:
- displayExtraAlerts
- postAlertForMessageWithDictionary:
- dealloc
- init
- volumeChanged:
@end
