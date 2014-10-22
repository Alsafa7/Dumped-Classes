@interface ICleanerInterface : NSObject
{
	id _enabledPlugins;
	id _alert;
	id _iCleanerBundleIdentifier;
	id _iCleanerDisplayName;
	id _localizationManager;
}

+ dismissAlert
+ isPluginWithIdentifierEnabled:
+ isShowingAlert
+ showCleanupTimeoutAlertWithPluginIdentifier:
+ runCleanupWithPluginIdentifier:
+ localizationManager
+ dictionaryFromOutput:
+ respring
+ iCleanerBundleIdentifier
+ iCleanerDisplayName
+ setAlert:
+ alert
+ dealloc
+ initialize
- dismissAlert
- isPluginWithIdentifierEnabled:
- isShowingAlert
- showCleanupTimeoutAlertWithPluginIdentifier:
- runCleanupWithPluginIdentifier:
- localizationManager
- dictionaryFromOutput:
- respring
- iCleanerBundleIdentifier
- iCleanerDisplayName
- setAlert:
- alert
- dealloc
- initialize
@end
