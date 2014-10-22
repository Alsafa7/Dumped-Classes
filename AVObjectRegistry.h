@interface AVObjectRegistry : NSObject
{
	id _registeredObjects;
	id _lock;
}

+ dealloc
+ init
+ registerObject:
+ safeRetainObject:
+ safeInvokeWithDescription:
+ safeInvokeWithDescriptionDelayed:
+ safePerformOnMainThreadTarget:selector:object:
+ safePostDelayedNotificationFromMainThreadTarget:name:userInfo:
+ safePerformOnThread:target:selector:object:
+ registerObjectForSafeRetain:
+ unregisterObject:
+ safePerformTarget:selector:object:delay:
+ safePerformOnMainThreadTarget:selector:object:delay:
+ safePostNotificationFromMainThreadTarget:name:userInfo:
+ safePostNotificationFromThread:target:name:userInfo:
+ safePostDelayedNotificationFromThread:target:name:userInfo:
- dealloc
- init
- registerObject:
- safeRetainObject:
- safeInvokeWithDescription:
- safeInvokeWithDescriptionDelayed:
- safePerformOnMainThreadTarget:selector:object:
- safePostDelayedNotificationFromMainThreadTarget:name:userInfo:
- safePerformOnThread:target:selector:object:
- registerObjectForSafeRetain:
- unregisterObject:
- safePerformTarget:selector:object:delay:
- safePerformOnMainThreadTarget:selector:object:delay:
- safePostNotificationFromMainThreadTarget:name:userInfo:
- safePostNotificationFromThread:target:name:userInfo:
- safePostDelayedNotificationFromThread:target:name:userInfo:
@end
