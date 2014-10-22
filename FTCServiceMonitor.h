@interface FTCServiceMonitor : NSObject
{
	long long _availability;
	long long _type;
	int _token;
}

+ initWithServiceType:
+ dealloc
+ serviceType
+ serviceAvailability
+ updateAvailability
+ _updateAvailability
+ _postAvailability:
+ handleActiveAccountsChanged:
- initWithServiceType:
- dealloc
- serviceType
- serviceAvailability
- updateAvailability
- _updateAvailability
- _postAvailability:
- handleActiveAccountsChanged:
@end
