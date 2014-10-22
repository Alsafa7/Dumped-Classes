@interface OS_dispatch_data : _NSDispatchData
{

}

+ initWithBytes:length:copy:freeWhenDone:bytesAreVM:
+ dealloc
+ init
+ debugDescription
+ _setContext:
+ _setTargetQueue:
+ finalize
+ _getContext
+ _setFinalizer:
+ _bytesAreVM
- initWithBytes:length:copy:freeWhenDone:bytesAreVM:
- dealloc
- init
- debugDescription
- _setContext:
- _setTargetQueue:
- finalize
- _getContext
- _setFinalizer:
- _bytesAreVM
@end
