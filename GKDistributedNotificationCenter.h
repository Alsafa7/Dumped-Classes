@interface GKDistributedNotificationCenter : NSObject
{
	id _internal;
}

+ addObserver:selector:name:
+ setNotificationCenter:
+ postNotificationName:userInfo:toBundleIdentifier:
+ dealloc
+ init
+ removeObserver:
+ notificationCenter
+ postNotificationName:
+ postNotificationName:userInfo:
- addObserver:selector:name:
- setNotificationCenter:
- postNotificationName:userInfo:toBundleIdentifier:
- dealloc
- init
- removeObserver:
- notificationCenter
- postNotificationName:
- postNotificationName:userInfo:
@end
