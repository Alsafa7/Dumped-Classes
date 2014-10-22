@interface EKPredicateCount : NSObject
{
	id _predicate;
	id _store;
	BOOL _finished;
	id _callback;
	unsigned int _previous;
}

+ initWithPredicate:store:callback:
+ _receivedCount:
+ terminate
+ dealloc
+ run
- initWithPredicate:store:callback:
- _receivedCount:
- terminate
- dealloc
- run
@end
