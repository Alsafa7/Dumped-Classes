@interface IDSInternalQueueController : NSObject
{
	id _queue;
}

+ dealloc
+ init
+ performBlock:
+ queue
+ assertQueueIsCurrent
+ assertQueueIsNotCurrent
+ performBlock:waitUntilDone:
- dealloc
- init
- performBlock:
- queue
- assertQueueIsCurrent
- assertQueueIsNotCurrent
- performBlock:waitUntilDone:
@end
