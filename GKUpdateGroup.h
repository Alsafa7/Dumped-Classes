@interface GKUpdateGroup : NSObject
{
	id _dispatchGroup;
	id _lock;
	id _error;
	id _targetQueue;
	id _notifiers;
	id _name;
}

+ setError:
+ initWithName:targetQueue:
+ notifiers
+ setNotifiers:
+ setDispatchGroup:
+ dispatchGroup
+ applyUpdates
+ join:
+ performOnQueue:block:
+ dealloc
+ setName:
+ name
+ lock
+ perform:
+ setLock:
+ targetQueue
+ setTargetQueue:
+ wait
+ error
- setError:
- initWithName:targetQueue:
- notifiers
- setNotifiers:
- setDispatchGroup:
- dispatchGroup
- applyUpdates
- join:
- performOnQueue:block:
- dealloc
- setName:
- name
- lock
- perform:
- setLock:
- targetQueue
- setTargetQueue:
- wait
- error
@end
