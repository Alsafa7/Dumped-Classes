@interface UITextMagnifierCaret : UITextMagnifier
{
	struct _offset;
	float _yOffset;
}

+ dealloc
+ setOffset:
+ offset
+ stopMagnifying:
+ beginMagnifyingTarget:text:magnificationPoint:offset:animated:
+ setMagnificationPoint:
+ terminalPointPlacedCarefully
+ setAnimationPoint:
+ setAutoscrollDirections:
+ yOffset
+ initWithFrame
+ updateFrameAndOffset
+ zoomUpAnimationDidStop:finished:
+ zoomDownAnimationDidStop:finished:
+ remove
+ zoomUpAnimation
+ animationPoint
+ zoomDownAnimation
+ setYOffset:
- dealloc
- setOffset:
- offset
- stopMagnifying:
- beginMagnifyingTarget:text:magnificationPoint:offset:animated:
- setMagnificationPoint:
- terminalPointPlacedCarefully
- setAnimationPoint:
- setAutoscrollDirections:
- yOffset
- initWithFrame
- updateFrameAndOffset
- zoomUpAnimationDidStop:finished:
- zoomDownAnimationDidStop:finished:
- remove
- zoomUpAnimation
- animationPoint
- zoomDownAnimation
- setYOffset:
@end
