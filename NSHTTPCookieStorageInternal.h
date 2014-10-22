@interface NSHTTPCookieStorageInternal : NSObject
{
	pointer storage;
	pointer privateStorage;
	id dataLock;
	BOOL privateBrowsing;
}

+ _syncCookies
+ registerForPostingNotifications
+ initInternalWithCFStorage:
+ dealloc
- _syncCookies
- registerForPostingNotifications
- initInternalWithCFStorage:
- dealloc
@end
