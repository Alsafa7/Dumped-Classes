@interface SUScriptOperationDelegate : NSObject
{
	id _operations;
	id _lock;
}

+ operation:failedWithError:
+ dealloc
+ cancelAllOperations
+ enqueueOperation:
+ operationFinished:
+ _removeOperation:
- operation:failedWithError:
- dealloc
- cancelAllOperations
- enqueueOperation:
- operationFinished:
- _removeOperation:
@end
