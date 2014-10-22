@interface PCDispatchTimer : NSObject
{
	pointer _timerSource;
	pointer _queue;
	usigned long long _fireTime;
	id _fireDate;
	id _target;
	SEL _selector;
	BOOL _isValid;
}

+ dealloc
+ invalidate
+ isValid
+ setFireDate:
+ start
+ fireDate
+ _cleanupTimer
+ initWithQueue:target:selector:fireTime:
+ _callTarget
- dealloc
- invalidate
- isValid
- setFireDate:
- start
- fireDate
- _cleanupTimer
- initWithQueue:target:selector:fireTime:
- _callTarget
@end
