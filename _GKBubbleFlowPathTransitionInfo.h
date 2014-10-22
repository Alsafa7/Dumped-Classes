@interface _GKBubbleFlowPathTransitionInfo : NSObject
{
	double _startTime;
	double _duration;
	id _bubbles;
	long long _focusBubbleType;
	id _effectiveView;
	Array _bubbleStartPositionsByType;
	BOOL _couldUseFallbackAnimator;
	id _auxiliaryInfo;
	Array _bubbleEndPositionsByType;
}

+ setBubbles:
+ setFocusBubbleType:
+ setEffectiveView:
+ effectiveView
+ focusBubbleType
+ couldUseFallbackAnimator
+ setCouldUseFallbackAnimator:
+ auxiliaryInfo
+ setAuxiliaryInfo:
+ dealloc
+ init
+ description
+ duration
+ setDuration:
+ setStartTime:
+ startTime
+ bubbles
- setBubbles:
- setFocusBubbleType:
- setEffectiveView:
- effectiveView
- focusBubbleType
- couldUseFallbackAnimator
- setCouldUseFallbackAnimator:
- auxiliaryInfo
- setAuxiliaryInfo:
- dealloc
- init
- description
- duration
- setDuration:
- setStartTime:
- startTime
- bubbles
@end
