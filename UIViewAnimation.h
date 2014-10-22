@interface UIViewAnimation : NSObject
{
	id _view;
	id _indexPath;
	struct _endRect;
	double _endAlpha;
	double _startFraction;
	double _endFraction;
	int _curve;
	BOOL _animateFromCurrentPosition;
	BOOL _shouldDeleteAfterAnimation;
	BOOL _editing;
	BOOL _shouldAnimateShadow;
	BOOL _shouldResetGroupOpacityAfterAnimation;
	BOOL _shouldAllowGroupOpacityAfterAnimation;
	BOOL _shouldClipToBoundsAfterAnimation;
}

+ dealloc
+ description
+ view
+ curve
+ indexPath
+ startFraction
+ endFraction
+ animateFromCurrentPosition
+ endAlpha
+ setShouldAllowGroupOpacityAfterAnimation:
+ setShouldResetGroupOpacityAfterAnimation:
+ setShouldClipToBoundsAfterAnimation:
+ shouldAnimateShadow
+ endRect
+ editing
+ shouldResetGroupOpacityAfterAnimation
+ shouldAllowGroupOpacityAfterAnimation
+ shouldClipToBoundsAfterAnimation
+ initWithView:indexPath:endRect:endAlpha:startFraction:endFraction:curve:animateFromCurrentPosition:shouldDeleteAfterAnimation:editing:
+ setShouldAnimateShadow:
+ shouldDeleteAfterAnimation
- dealloc
- description
- view
- curve
- indexPath
- startFraction
- endFraction
- animateFromCurrentPosition
- endAlpha
- setShouldAllowGroupOpacityAfterAnimation:
- setShouldResetGroupOpacityAfterAnimation:
- setShouldClipToBoundsAfterAnimation:
- shouldAnimateShadow
- endRect
- editing
- shouldResetGroupOpacityAfterAnimation
- shouldAllowGroupOpacityAfterAnimation
- shouldClipToBoundsAfterAnimation
- initWithView:indexPath:endRect:endAlpha:startFraction:endFraction:curve:animateFromCurrentPosition:shouldDeleteAfterAnimation:editing:
- setShouldAnimateShadow:
- shouldDeleteAfterAnimation
@end