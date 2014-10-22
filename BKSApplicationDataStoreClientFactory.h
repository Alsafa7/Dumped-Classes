@interface BKSApplicationDataStoreClientFactory : NSObject
{
	usigned long long _count;
	id _queue;
	id _sharedClient;
}

+ dealloc
+ init
+ checkin
+ checkout
- dealloc
- init
- checkin
- checkout
@end
