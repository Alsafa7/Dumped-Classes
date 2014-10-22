@interface UITextMagnifierRanged : UITextMagnifier
{
	double _touchOffsetFromMagnificationPoint;
	double _magnifierOffsetFromTouch;
	BOOL _isHorizontal;
	BOOL _isAnimating;
	long long _delayedAnimationType;
}

+ dealloc
+ stopMagnifying:
+ beginMagnifyingTarget:text:magnificationPoint:offset:animated:
+ setMagnificationPoint:
+ setIsHorizontal:
+ terminalPointPlacedCarefully
+ horizontalMovement
+ setAutoscrollDirections:
+ initWithFrame
+ zoomUpAnimationDidStop:finished:
+ zoomDownAnimationDidStop:finished:
+ remove
+ zoomUpAnimation
+ zoomDownAnimation
+ isHorizontal
+ offsetFromMagnificationPoint
+ snappedPoint:
+ updateFrame
+ clipPoint:inRect:
+ horizontalMovementAtTime:
+ wasPlacedCarefullyAtTime:
- dealloc
- stopMagnifying:
- beginMagnifyingTarget:text:magnificationPoint:offset:animated:
- setMagnificationPoint:
- setIsHorizontal:
- terminalPointPlacedCarefully
- horizontalMovement
- setAutoscrollDirections:
- initWithFrame
- zoomUpAnimationDidStop:finished:
- zoomDownAnimationDidStop:finished:
- remove
- zoomUpAnimation
- zoomDownAnimation
- isHorizontal
- offsetFromMagnificationPoint
- snappedPoint:
- updateFrame
- clipPoint:inRect:
- horizontalMovementAtTime:
- wasPlacedCarefullyAtTime:
@end
