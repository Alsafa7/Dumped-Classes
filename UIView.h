@interface UIView : UIResponder
{
	id _layer;
	id _gestureInfo;
	id _gestureRecognizers;
	id _subviewCache;
	float _charge;
	long long _tag;
	id _viewDelegate;
	id _backgroundColorSystemColorName;
	usigned long long _countOfMotionEffectsInSubtree;
	struct _viewFlags;
	long long _retainCount;
	long long _tintAdjustmentDimmingCount;
	BOOL _shouldArchiveUIAppearanceTags;
	id _interactionTintColor;
	id _layoutEngine;
	id _boundsWidthVariable;
	id _boundsHeightVariable;
	id _minXVariable;
	id _minYVariable;
	id _internalConstraints;
	id _constraintsExceptingSubviewAutoresizingConstraints;
}

@end
