@interface JCKErrorManager : NSObject
{
	id _errorHandler;
	id _errorQueue;
	id _errorQueueLock;
	pointer _addQueue;
}

+ errorQueue
+ setErrorQueue:
+ addQueue
+ processQueue
+ setErrorQueueLock:
+ setAddQueue:
+ errorQueueLock
+ asyncProcessQueue
+ errorHandler
+ init
+ setErrorHandler:
+ .cxx_destruct
+ addError:
- errorQueue
- setErrorQueue:
- addQueue
- processQueue
- setErrorQueueLock:
- setAddQueue:
- errorQueueLock
- asyncProcessQueue
- errorHandler
- init
- setErrorHandler:
- .cxx_destruct
- addError:
@end
