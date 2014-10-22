@interface MusicStoreClientController : SUClientController
{
	BOOL _hasContinueSearchCapability;
	BOOL _isUsingNetwork;
}

+ downloadManagerNetworkUsageDidChange:
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ init
+ _isStoreRestricted
+ hasStoreSearchCapability
+ initWithClientIdentifier:
- downloadManagerNetworkUsageDidChange:
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- init
- _isStoreRestricted
- hasStoreSearchCapability
- initWithClientIdentifier:
@end
