@interface NSKeyValueObservance : NSWeakCallback
{
	int _retainCountMinusOne;
	id _observer;
	id _property;
	usigned long long _options;
	pointer _context;
	id _originalObservable;
	usigned long long _cachedUnrotatedHashComponent;
	BOOL _cachedIsShareable;
	id _observationInfos;
}

+ _initWithObserver:property:options:context:originalObservable:
+ release
+ retain
+ dealloc
+ isEqual:
+ hash
+ retainCount
+ description
+ _tryRetain
+ _isDeallocating
+ observeValueForKeyPath:ofObject:change:context:
- _initWithObserver:property:options:context:originalObservable:
- release
- retain
- dealloc
- isEqual:
- hash
- retainCount
- description
- _tryRetain
- _isDeallocating
- observeValueForKeyPath:ofObject:change:context:
@end
