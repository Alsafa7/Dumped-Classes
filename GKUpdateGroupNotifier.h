@interface GKUpdateGroupNotifier : NSObject
{
	id _group;
	id _lock;
	id _updateQueue;
	id _error;
}

+ setError:
+ updateQueue
+ setUpdateQueue:
+ addUpdate:error:
+ updateError:
+ addUpdatesFromGroup:
+ release
+ retain
+ dealloc
+ init
+ lock
+ setGroup:
+ group
+ setLock:
+ error
- setError:
- updateQueue
- setUpdateQueue:
- addUpdate:error:
- updateError:
- addUpdatesFromGroup:
- release
- retain
- dealloc
- init
- lock
- setGroup:
- group
- setLock:
- error
@end
