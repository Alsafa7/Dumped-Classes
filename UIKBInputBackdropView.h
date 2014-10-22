@interface UIKBInputBackdropView : UIView
{
	id _inputBackdropFullView;
	id _inputBackdropLeftView;
	id _inputBackdropRightView;
	usigned long long _innerCorners;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
}

+ dealloc
+ textEffectsVisibilityLevel
+ inputBackdropLeftView
+ inputBackdropRightView
+ inputBackdropFullView
+ transitionToStyle:isSplit:
+ _setLeftOffset:gapWidth:progress:innerCorners:
+ layoutInputBackdropToFullWithRect:
+ layoutInputBackdropToSplitWithLeftViewRect:andRightViewRect:innerCorners:
+ _setLeftOffset:gapWidth:progress:
+ initWithFrame:primaryBackdrop:
+ _setProgress:boundedBy:
+ _beginSplitTransitionIfNeeded:gapWidth:
+ _endSplitTransitionIfNeeded:
+ setInputBackdropFullView:
+ setInputBackdropLeftView:
+ setInputBackdropRightView:
- dealloc
- textEffectsVisibilityLevel
- inputBackdropLeftView
- inputBackdropRightView
- inputBackdropFullView
- transitionToStyle:isSplit:
- _setLeftOffset:gapWidth:progress:innerCorners:
- layoutInputBackdropToFullWithRect:
- layoutInputBackdropToSplitWithLeftViewRect:andRightViewRect:innerCorners:
- _setLeftOffset:gapWidth:progress:
- initWithFrame:primaryBackdrop:
- _setProgress:boundedBy:
- _beginSplitTransitionIfNeeded:gapWidth:
- _endSplitTransitionIfNeeded:
- setInputBackdropFullView:
- setInputBackdropLeftView:
- setInputBackdropRightView:
@end
