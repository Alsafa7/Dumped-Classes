@interface SBWorkspaceEventQueue : NSObject
{
	id _eventQueueLocks;
	id _eventQueue;
	id _executingEvent;
}

+ cancelEventsWithName:
+ executeOrAppendEvent:
+ hasEventWithName:
+ executeOrPrependEvent:
+ hasEventWithPrefix:
+ executeOrPrependEvents:
+ executingEvent
+ _processNextEvent
+ _executeOrPendEvents:position:
+ setExecutingEvent:
+ _addEventQueueLock:
+ _removeEventQueueLock:
+ dealloc
+ init
+ description
+ isLocked
- cancelEventsWithName:
- executeOrAppendEvent:
- hasEventWithName:
- executeOrPrependEvent:
- hasEventWithPrefix:
- executeOrPrependEvents:
- executingEvent
- _processNextEvent
- _executeOrPendEvents:position:
- setExecutingEvent:
- _addEventQueueLock:
- _removeEventQueueLock:
- dealloc
- init
- description
- isLocked
@end
