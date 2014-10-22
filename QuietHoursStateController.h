@interface QuietHoursStateController : NSObject
{
	BOOL _valid;
	BOOL _enabled;
	usigned long long _mode;
	id _overrides;
	usigned long long _privilegeTypes;
	int _recordID;
	id _fromComponents;
	id _toComponents;
	id _bbGateway;
	usigned long long _overrideType;
	BOOL _isEffectiveWhileUnlocked;
	long long _overrideStatus;
}

+ setValid:
+ dealloc
+ init
+ setEnabled:
+ setMode:
+ mode
+ enabled
+ valid
+ overrideType
+ setOverrideType:
+ setRecordID:
+ recordID
+ setOverrides:
+ fromComponents
+ toComponents
+ bbGateway
+ overrides
+ setOverrideStatus:
+ setFromComponents:
+ setToComponents:
+ privilegeTypes
+ overrideStatus
+ setPrivilegeTypes:
+ resetToFallbackRange
+ synchronizeEnabledState
+ repeatedCalls
+ manualModeEnabled
+ setRepeatedCalls:
+ allowedGroupType
+ userSelectedGroupID
+ setAllowedGroup:recordID:groupName:
+ synchronizeOverrides:mode:gateway:
+ isEffectiveWhileUnlocked
+ setIsEffectiveWhileUnlocked:
- setValid:
- dealloc
- init
- setEnabled:
- setMode:
- mode
- enabled
- valid
- overrideType
- setOverrideType:
- setRecordID:
- recordID
- setOverrides:
- fromComponents
- toComponents
- bbGateway
- overrides
- setOverrideStatus:
- setFromComponents:
- setToComponents:
- privilegeTypes
- overrideStatus
- setPrivilegeTypes:
- resetToFallbackRange
- synchronizeEnabledState
- repeatedCalls
- manualModeEnabled
- setRepeatedCalls:
- allowedGroupType
- userSelectedGroupID
- setAllowedGroup:recordID:groupName:
- synchronizeOverrides:mode:gateway:
- isEffectiveWhileUnlocked
- setIsEffectiveWhileUnlocked:
@end
