@interface IDSServiceMonitor : NSObject
{
	long long _availability;
	id _service;
	int _token;
}

+ service
+ dealloc
+ initWithService:
+ serviceAvailability
+ updateAvailability
+ _updateAvailability
+ _postAvailability:
+ handleActiveAccountsChanged:
- service
- dealloc
- initWithService:
- serviceAvailability
- updateAvailability
- _updateAvailability
- _postAvailability:
- handleActiveAccountsChanged:
@end
