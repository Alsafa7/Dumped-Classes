@interface UIKeyboardRotationState : NSObject
{
	int _state;
	BOOL _requiresNewState;
	int _postRotationState;
	id _animationStyle;
	long long _targetOrientation;
}

+ dealloc
+ state
+ setState:
+ animationStyle
+ targetOrientation
+ requiresNewState
+ postRotationState
+ setPostRotationState:animationStyle:
+ setAnimationStyle:
+ setRequiresNewState:
+ setPostRotationState:
+ setTargetOrientation:
- dealloc
- state
- setState:
- animationStyle
- targetOrientation
- requiresNewState
- postRotationState
- setPostRotationState:animationStyle:
- setAnimationStyle:
- setRequiresNewState:
- setPostRotationState:
- setTargetOrientation:
@end
