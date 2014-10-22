@interface NSMachPort : NSPort
{
	id _delegate;
	usigned long long _flags;
	unsigned int _machPort;
	usigned long long _reserved;
}

+ machPort
+ _cfTypeID
+ scheduleInRunLoop:forMode:
+ removeFromRunLoop:forMode:
+ initWithMachPort:
+ sendBeforeDate:components:from:reserved:
+ sendBeforeDate:msgid:components:from:reserved:
+ initWithMachPort:options:
+ sendBeforeTime:streamData:components:from:msgid:
+ release
+ retain
+ dealloc
+ setDelegate:
+ init
+ isKindOfClass:
+ isEqual:
+ hash
+ isMemberOfClass:
+ retainCount
+ delegate
+ invalidate
+ isValid
+ _tryRetain
+ _isDeallocating
+ finalize
- machPort
- _cfTypeID
- scheduleInRunLoop:forMode:
- removeFromRunLoop:forMode:
- initWithMachPort:
- sendBeforeDate:components:from:reserved:
- sendBeforeDate:msgid:components:from:reserved:
- initWithMachPort:options:
- sendBeforeTime:streamData:components:from:msgid:
- release
- retain
- dealloc
- setDelegate:
- init
- isKindOfClass:
- isEqual:
- hash
- isMemberOfClass:
- retainCount
- delegate
- invalidate
- isValid
- _tryRetain
- _isDeallocating
- finalize
@end
