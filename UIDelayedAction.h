@interface UIDelayedAction : NSObject
{
	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	id m_timer;
	BOOL m_canceled;
	id m_runLoopMode;
}

+ dealloc
+ setTarget:
+ userInfo
+ target
+ touchWithDelay:
+ initWithTarget:action:userInfo:delay:mode:
+ timerFired:
+ unschedule
+ cancel
+ initWithTarget:action:userInfo:delay:
+ touch
+ scheduled
+ delay
- dealloc
- setTarget:
- userInfo
- target
- touchWithDelay:
- initWithTarget:action:userInfo:delay:mode:
- timerFired:
- unschedule
- cancel
- initWithTarget:action:userInfo:delay:
- touch
- scheduled
- delay
@end
