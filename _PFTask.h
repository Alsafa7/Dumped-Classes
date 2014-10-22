@interface _PFTask : NSObject
{
	int _cd_rc;
	pointer _task;
	pointer arguments;
	struct lock;
	struct condition;
	int isFinishedFlag;
}

+ initWithFunction:withArgument:andPriority:
+ release
+ retain
+ dealloc
+ retainCount
+ _tryRetain
+ _isDeallocating
+ finalize
- initWithFunction:withArgument:andPriority:
- release
- retain
- dealloc
- retainCount
- _tryRetain
- _isDeallocating
- finalize
@end
