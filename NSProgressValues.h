@interface NSProgressValues : NSObject
{
	id _userInfo;
	long long _totalUnitCount;
	long long _completedUnitCount;
	long long _childCompletedUnitCount;
	double _fractionCompleted;
	double _selfFractionCompleted;
	double _childFractionCompleted;
	id _localizedDescription;
	id _localizedAdditionalDescription;
	BOOL _isCancellable;
	BOOL _isPausable;
	BOOL _isCancelled;
	BOOL _isPaused;
	id _kind;
	BOOL _isPrioritizable;
	BOOL _isFinished;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ copyWithZone:
+ isIndeterminate
+ setIndeterminate:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- description
- copyWithZone:
- isIndeterminate
- setIndeterminate:
@end
