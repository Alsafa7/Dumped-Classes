@interface SharingPluginManager : NSObject
{
	id _recordIDToAlertItem;
	BOOL _screenDimmed;
	BOOL _lookingForEvent;
}

+ bindBulletin:forRegistry:
+ handleEvent:withBulletin:forRegistry:
+ screenDidUndim:
+ screenDidDim:
+ notifyDaemonToStartDiscovery
+ nextUserEventOccured:
+ alertItemDidDismiss:
+ dealloc
+ init
+ reset
+ .cxx_destruct
- bindBulletin:forRegistry:
- handleEvent:withBulletin:forRegistry:
- screenDidUndim:
- screenDidDim:
- notifyDaemonToStartDiscovery
- nextUserEventOccured:
- alertItemDidDismiss:
- dealloc
- init
- reset
- .cxx_destruct
@end
