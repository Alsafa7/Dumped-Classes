@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
{
	pointer _prefs;
	pointer _wifiKey;
	pointer _wifiInterface;
	pointer _tetheringLink;
}

+ dealloc
+ init
+ wifiConfig
+ findKeysAirPortState:andTetheringState:
+ _wifiNameWithState:
+ _wifiPowerWithState:
+ _wifiTetheringWithState:
- dealloc
- init
- wifiConfig
- findKeysAirPortState:andTetheringState:
- _wifiNameWithState:
- _wifiPowerWithState:
- _wifiTetheringWithState:
@end
