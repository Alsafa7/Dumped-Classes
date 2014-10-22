@interface SSSoftwareUpdate : NSObject
{
	id _dictionary;
	id _installDate;
	long long _updateState;
}

+ storeItemIdentifier
+ dealloc
+ bundleIdentifier
+ updateState
+ installDate
+ setInstallDate:
+ parentalControlsRank
+ initWithUpdateDictionary:
+ setUpdateState:
+ updateDictionary
- storeItemIdentifier
- dealloc
- bundleIdentifier
- updateState
- installDate
- setInstallDate:
- parentalControlsRank
- initWithUpdateDictionary:
- setUpdateState:
- updateDictionary
@end
