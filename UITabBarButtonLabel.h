@interface UITabBarButtonLabel : UILabel
{
	double _boundsWidth;
	id _appearanceStorage;
	BOOL _isSelected;
	Class _appearanceGuideClass;
	id _unselectedTintColor;
}

+ dealloc
+ _shouldAnimatePropertyWithKey:
+ _appearanceGuideClass
+ tintColorDidChange
+ _UIAppearance_setTitleTextAttributes:forState:
+ _setTitleTextAttributes:forState:
+ _titleTextAttributesForState:
+ _setAppearanceGuideClass:
+ setSelected:
+ updateTextColorsForSelection
+ sizeToFitBounds:
+ _setUnselectedTintColor:
+ _UIAppearance_setTitlePositionAdjustment:
+ _setTitlePositionAdjustment:
+ _applyTabBarButtonAppearanceStorage:withTaggedSelectors:
+ _unselectedTintColor
- dealloc
- _shouldAnimatePropertyWithKey:
- _appearanceGuideClass
- tintColorDidChange
- _UIAppearance_setTitleTextAttributes:forState:
- _setTitleTextAttributes:forState:
- _titleTextAttributesForState:
- _setAppearanceGuideClass:
- setSelected:
- updateTextColorsForSelection
- sizeToFitBounds:
- _setUnselectedTintColor:
- _UIAppearance_setTitlePositionAdjustment:
- _setTitlePositionAdjustment:
- _applyTabBarButtonAppearanceStorage:withTaggedSelectors:
- _unselectedTintColor
@end
