@interface NSDistributedNotificationCenter : NSNotificationCenter
{

}

+ addObserver:selector:name:object:suspensionBehavior:
+ addObserverForName:object:suspensionBehavior:queue:usingBlock:
+ postNotificationName:object:userInfo:options:
+ postNotificationName:object:userInfo:deliverImmediately:
+ suspended
+ init
+ addObserver:selector:name:object:
+ removeObserver:name:object:
+ postNotificationName:object:userInfo:
+ postNotificationName:object:
+ addObserverForName:object:queue:usingBlock:
+ postNotification:
+ setSuspended:
- addObserver:selector:name:object:suspensionBehavior:
- addObserverForName:object:suspensionBehavior:queue:usingBlock:
- postNotificationName:object:userInfo:options:
- postNotificationName:object:userInfo:deliverImmediately:
- suspended
- init
- addObserver:selector:name:object:
- removeObserver:name:object:
- postNotificationName:object:userInfo:
- postNotificationName:object:
- addObserverForName:object:queue:usingBlock:
- postNotification:
- setSuspended:
@end
