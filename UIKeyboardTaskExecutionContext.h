@interface UIKeyboardTaskExecutionContext : NSObject
{
	id _parentExecutionContext;
	id _continuation;
	id _executionQueue;
}

+ dealloc
+ init
+ returnExecutionToParent
+ childWithContinuation:
+ transferExecutionToMainThreadWithTask:
+ executionQueue
+ initWithParentContext:continuation:
+ initWithExecutionQueue:
- dealloc
- init
- returnExecutionToParent
- childWithContinuation:
- transferExecutionToMainThreadWithTask:
- executionQueue
- initWithParentContext:continuation:
- initWithExecutionQueue:
@end
