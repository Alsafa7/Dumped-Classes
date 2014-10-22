@interface TKCapabilitiesManager : NSObject
{
	BOOL _isRingtoneStoreAvailable;
	BOOL _isToneStoreAvailable;
}

+ hasTelephonyCapability
+ hasVibratorCapability
+ dealloc
+ init
+ _checkRingtoneStoreAvailability
+ setIsRingtoneStoreAvailable:
+ setIsToneStoreAvailable:
+ hasUserGeneratedVibrationsCapability
+ isRingtoneStoreAvailable
+ isToneStoreAvailable
- hasTelephonyCapability
- hasVibratorCapability
- dealloc
- init
- _checkRingtoneStoreAvailability
- setIsRingtoneStoreAvailable:
- setIsToneStoreAvailable:
- hasUserGeneratedVibrationsCapability
- isRingtoneStoreAvailable
- isToneStoreAvailable
@end
