@interface SBLockStateAggregator : NSObject
{
	usigned long long _lockState;
}

+ lockState
+ hasAnyLockState
+ _updateLockState
+ _descriptionForLockState:
+ dealloc
+ init
+ description
- lockState
- hasAnyLockState
- _updateLockState
- _descriptionForLockState:
- dealloc
- init
- description
@end
