@interface EKPredicateSearch : NSObject
{
	Class _entityClass;
	id _predicate;
	id _store;
	BOOL _finished;
	id _callback;
	unsigned int _previous;
}

+ startWithCompletion:
+ initWithEntityClass:predicate:store:callback:
+ _receivedData:count:
+ terminate
+ dealloc
+ run
- startWithCompletion:
- initWithEntityClass:predicate:store:callback:
- _receivedData:count:
- terminate
- dealloc
- run
@end
