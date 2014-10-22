@interface UIViewAnimationBlockDelegate : NSObject
{
	BOOL _didBeginBlockAnimation;
	BOOL _allowUserInteraction;
	BOOL _isZeroDuration;
	BOOL _allowsUserInteractionToCutOffEndOfAnimation;
	BOOL _animationDidStopSent;
	id _start;
	id _completion;
}

+ dealloc
+ _allowsUserInteraction
+ _allowsUserInteractionToCutOffEndOfAnimation
+ _willBeginBlockAnimation:context:
+ _didEndBlockAnimation:finished:context:
+ _sendDeferredCompletion:
- dealloc
- _allowsUserInteraction
- _allowsUserInteractionToCutOffEndOfAnimation
- _willBeginBlockAnimation:context:
- _didEndBlockAnimation:finished:context:
- _sendDeferredCompletion:
@end
