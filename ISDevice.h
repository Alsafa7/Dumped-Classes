@interface ISDevice : NSObject
{
	usigned long long _daemonLaunchCount;
	id _dispatchQueue;
	id _guid;
	double _lastFreeSpaceRequest;
}

+ dealloc
+ init
+ systemName
+ releasePowerAssertion:
+ deviceName
+ guid
+ serialNumber
+ _deviceClass
+ hardwareName
+ takePowerAssertion:
+ requestFreeSpace:atPath:withOptions:completionBlock:
+ resetLocationAndPrivacy
+ supportedOfferDeviceForDevices:
+ checkCapabilities:withMismatches:
+ copyProtocolConditionalContext
- dealloc
- init
- systemName
- releasePowerAssertion:
- deviceName
- guid
- serialNumber
- _deviceClass
- hardwareName
- takePowerAssertion:
- requestFreeSpace:atPath:withOptions:completionBlock:
- resetLocationAndPrivacy
- supportedOfferDeviceForDevices:
- checkCapabilities:withMismatches:
- copyProtocolConditionalContext
@end
