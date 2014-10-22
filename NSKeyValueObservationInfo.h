@interface NSKeyValueObservationInfo : NSObject
{
	int _retainCountMinusOne;
	id _observances;
	usigned long long _cachedHash;
	BOOL _cachedIsShareable;
	id _observables;
}

+ _initWithObservances:count:
+ release
+ retain
+ dealloc
+ isEqual:
+ hash
+ retainCount
+ description
+ _tryRetain
+ _isDeallocating
- _initWithObservances:count:
- release
- retain
- dealloc
- isEqual:
- hash
- retainCount
- description
- _tryRetain
- _isDeallocating
@end
