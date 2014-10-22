@interface SUNetworkObserver : NSObject
{
	id _partnerDetectOperation;
	BOOL _partnersEnabled;
	id _partnerIdentifier;
	id _startupTimer;
}

+ dealloc
+ init
+ partnerIdentifier
+ _partnerHeaderChanged:
+ _networkTypeChanged:
+ _networkUsageStateChanged:
+ _cancelStartupTimer
+ _startupTimer:
+ _handleNetworkTypeChange:
+ _handleUsingNetworkChange:
+ _mainThreadSetPartnerIdentifier:
+ _mainThreadHandleNetworkTypeChange:
+ _mainThreadScheduleNetworkActivityUpdate
+ _updateNetworkActivityIndicator
+ setPartnerIdentifier:
+ checkPartnerAvailability
+ setPartnersEnabled:
+ startNetworkAvailabilityTimer
- dealloc
- init
- partnerIdentifier
- _partnerHeaderChanged:
- _networkTypeChanged:
- _networkUsageStateChanged:
- _cancelStartupTimer
- _startupTimer:
- _handleNetworkTypeChange:
- _handleUsingNetworkChange:
- _mainThreadSetPartnerIdentifier:
- _mainThreadHandleNetworkTypeChange:
- _mainThreadScheduleNetworkActivityUpdate
- _updateNetworkActivityIndicator
- setPartnerIdentifier:
- checkPartnerAvailability
- setPartnersEnabled:
- startNetworkAvailabilityTimer
@end
