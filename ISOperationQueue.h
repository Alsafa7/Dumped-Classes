@interface ISOperationQueue : NSObject
{
	id _queue;
}

+ addOperations:waitUntilFinished:
+ maxConcurrentOperationCount
+ dealloc
+ init
+ setName:
+ name
+ observeValueForKeyPath:ofObject:change:context:
+ setMaxConcurrentOperationCount:
+ cancelAllOperations
+ addOperation:
+ operations
+ operationCount
+ setSuspended:
+ adjustsMaxConcurrentOperationCount
+ setAdjustsMaxConcurrentOperationCount:
- addOperations:waitUntilFinished:
- maxConcurrentOperationCount
- dealloc
- init
- setName:
- name
- observeValueForKeyPath:ofObject:change:context:
- setMaxConcurrentOperationCount:
- cancelAllOperations
- addOperation:
- operations
- operationCount
- setSuspended:
- adjustsMaxConcurrentOperationCount
- setAdjustsMaxConcurrentOperationCount:
@end
