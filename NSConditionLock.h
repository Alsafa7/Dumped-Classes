@interface NSConditionLock : NSObject
{
	pointer _priv;
}

+ tryLock
+ lockBeforeDate:
+ dealloc
+ init
+ description
+ setName:
+ name
+ lock
+ unlock
+ condition
+ initWithCondition:
+ lockWhenCondition:
+ tryLockWhenCondition:
+ unlockWithCondition:
+ lockWhenCondition:beforeDate:
+ finalize
- tryLock
- lockBeforeDate:
- dealloc
- init
- description
- setName:
- name
- lock
- unlock
- condition
- initWithCondition:
- lockWhenCondition:
- tryLockWhenCondition:
- unlockWithCondition:
- lockWhenCondition:beforeDate:
- finalize
@end
