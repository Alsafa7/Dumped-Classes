@interface GEONetworkDefaults : NSObject
{
	id _completionHandlers;
	BOOL _isRegistering;
	id _networkDefaults;
	id _networkDefaultsLock;
	id _cacheFilePath;
}

+ dealloc
+ init
+ valueForKey:
+ refreshNetworkDefaults
+ registerNetworkDefaults:
+ _registrationComplete
+ needsUpdate
- dealloc
- init
- valueForKey:
- refreshNetworkDefaults
- registerNetworkDefaults:
- _registrationComplete
- needsUpdate
@end
