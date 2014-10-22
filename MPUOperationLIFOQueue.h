@interface MPUOperationLIFOQueue : NSOperationQueue
{

}

+ addOperations:waitUntilFinished:
+ init
+ setMaxConcurrentOperationCount:
+ addOperationWithBlock:
+ addOperation:
+ _addLIFODependencyToOperations:
- addOperations:waitUntilFinished:
- init
- setMaxConcurrentOperationCount:
- addOperationWithBlock:
- addOperation:
- _addLIFODependencyToOperations:
@end
