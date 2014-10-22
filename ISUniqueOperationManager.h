@interface ISUniqueOperationManager : NSObject
{
	id _activeContext;
	id _contexts;
	id _lock;
	id _lockPool;
}

+ dealloc
+ init
+ checkInOperation:
+ checkOutOperation:
+ lockWithIdentifier:
+ _activeContext
+ _contextForOperation:
+ predecessorForKey:operation:
+ setPredecessorIfNeeded:forKey:
+ uniqueOperationFinished:forKey:
- dealloc
- init
- checkInOperation:
- checkOutOperation:
- lockWithIdentifier:
- _activeContext
- _contextForOperation:
- predecessorForKey:operation:
- setPredecessorIfNeeded:forKey:
- uniqueOperationFinished:forKey:
@end
