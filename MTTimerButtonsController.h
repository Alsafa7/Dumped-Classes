@interface MTTimerButtonsController : NSObject
{
	int _state;
	id _target;
	id _leftButton;
	id _rightButton;
}

+ _leftButtonTapped:
+ _rightButtonTapped:
+ rightButton
+ dealloc
+ state
+ setState:
+ target
+ initWithTarget:
+ leftButton
- _leftButtonTapped:
- _rightButtonTapped:
- rightButton
- dealloc
- state
- setState:
- target
- initWithTarget:
- leftButton
@end
