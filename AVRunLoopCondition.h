@interface AVRunLoopCondition : NSCondition
{
	id _runLoopStateList;
}

+ waitInMode:
+ waitUntilDate:inMode:
+ _waitInMode:untilDate:
+ _signalRunLoopWithState:
+ dealloc
+ init
+ signal
+ waitUntilDate:
+ wait
+ broadcast
- waitInMode:
- waitUntilDate:inMode:
- _waitInMode:untilDate:
- _signalRunLoopWithState:
- dealloc
- init
- signal
- waitUntilDate:
- wait
- broadcast
@end
