@interface NSOperationQueue : NSObject
{
	id _private;
	pointer _reserved;
}

+ executeAndWaitForBlock:
+ addOperations:waitUntilFinished:
+ __
+ __:
+ maxConcurrentOperationCount
+ overcommitsOperations
+ setOvercommitsOperations:
+ dealloc
+ init
+ description
+ isSuspended
+ setName:
+ name
+ setMaxConcurrentOperationCount:
+ cancelAllOperations
+ waitUntilAllOperationsAreFinished
+ addOperationWithBlock:
+ addOperation:
+ operations
+ operationCount
+ setSuspended:
- executeAndWaitForBlock:
- addOperations:waitUntilFinished:
- __
- __:
- maxConcurrentOperationCount
- overcommitsOperations
- setOvercommitsOperations:
- dealloc
- init
- description
- isSuspended
- setName:
- name
- setMaxConcurrentOperationCount:
- cancelAllOperations
- waitUntilAllOperationsAreFinished
- addOperationWithBlock:
- addOperation:
- operations
- operationCount
- setSuspended:
@end
