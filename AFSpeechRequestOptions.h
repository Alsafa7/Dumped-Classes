@interface AFSpeechRequestOptions : NSObject
{
	BOOL _isEyesFree;
	BOOL _useAutomaticEndpointing;
	BOOL _useFreshContext;
	BOOL _isInitialBringUp;
	long long _event;
	id _btDeviceAddress;
	id _serverCommandId;
	double _activationEventTime;
	double _expectedActivationEventTime;
}

+ initWithCoder:
+ encodeWithCoder:
+ initWithActivationEvent:
+ setUseAutomaticEndpointing:
+ serverCommandId
+ activationEvent
+ setActivationEvent:
+ btDeviceAddress
+ setBtDeviceAddress:
+ isEyesFree
+ setIsEyesFree:
+ setServerCommandId:
+ useAutomaticEndpointing
+ useFreshContext
+ setUseFreshContext:
+ activationEventTime
+ setActivationEventTime:
+ expectedActivationEventTime
+ setExpectedActivationEventTime:
+ isInitialBringUp
+ setIsInitialBringUp:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- initWithActivationEvent:
- setUseAutomaticEndpointing:
- serverCommandId
- activationEvent
- setActivationEvent:
- btDeviceAddress
- setBtDeviceAddress:
- isEyesFree
- setIsEyesFree:
- setServerCommandId:
- useAutomaticEndpointing
- useFreshContext
- setUseFreshContext:
- activationEventTime
- setActivationEventTime:
- expectedActivationEventTime
- setExpectedActivationEventTime:
- isInitialBringUp
- setIsInitialBringUp:
- .cxx_destruct
@end
