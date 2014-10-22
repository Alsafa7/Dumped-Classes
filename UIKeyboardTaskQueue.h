@interface UIKeyboardTaskQueue : NSObject
{
	BOOL _executingOnMainThread;
	id _lock;
	id _tasks;
	id _deferredTasks;
	id _executionContext;
	id _mainThreadContinuation;
}

+ scheduleTask:timeInterval:repeats:
+ dealloc
+ init
+ lock
+ unlock
+ performTask:
+ isMainThreadExecutingTask
+ waitUntilAllTasksAreFinished
+ addTask:
+ executionContext
+ setExecutionContext:
+ finishExecution
+ performTaskOnMainThread:waitUntilDone:
+ continueExecutionOnMainThread
+ tryLockWhenReadyForMainThread
+ performDeferredTaskIfIdle
+ lockWhenReadyForMainThread
+ promoteDeferredTaskIfIdle
+ addDeferredTask:
- scheduleTask:timeInterval:repeats:
- dealloc
- init
- lock
- unlock
- performTask:
- isMainThreadExecutingTask
- waitUntilAllTasksAreFinished
- addTask:
- executionContext
- setExecutionContext:
- finishExecution
- performTaskOnMainThread:waitUntilDone:
- continueExecutionOnMainThread
- tryLockWhenReadyForMainThread
- performDeferredTaskIfIdle
- lockWhenReadyForMainThread
- promoteDeferredTaskIfIdle
- addDeferredTask:
@end
