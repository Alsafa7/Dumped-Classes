@interface UIGestureDelayedTouch : NSObject
{
	id _touch;
	id _stateWhenDelayed;
	id _stateWhenDelivered;
	id _event;
	long long _delayCount;
	BOOL _cloneForSecondDelivery;
}

+ dealloc
+ init
+ description
+ copyWithZone:
+ touch
+ setTouch:
+ setEvent:
+ setStateWhenDelayed:
+ cloneForSecondDelivery
+ decrementDelayCount
+ incrementDelayCount
+ delayCount
+ saveCurrentTouchState
+ phaseForDelivery
+ timestampForDelivery
+ stateWhenDelayed
+ stateWhenDelivered
+ setStateWhenDelivered:
+ event
+ setCloneForSecondDelivery:
- dealloc
- init
- description
- copyWithZone:
- touch
- setTouch:
- setEvent:
- setStateWhenDelayed:
- cloneForSecondDelivery
- decrementDelayCount
- incrementDelayCount
- delayCount
- saveCurrentTouchState
- phaseForDelivery
- timestampForDelivery
- stateWhenDelayed
- stateWhenDelivered
- setStateWhenDelivered:
- event
- setCloneForSecondDelivery:
@end
