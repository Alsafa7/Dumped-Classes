@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage
{
	id backgroundImages;
	id miniBackgroundImages;
	id tintColor;
	id titlePositionOffset;
	id miniTitlePositionOffset;
	id backgroundVerticalAdjustmentsForBarMetrics;
	id backButtonAppearance;
}

+ dealloc
+ tintColor
+ setTintColor:
+ backgroundImageForState:style:isMini:
+ setBackgroundImage:forState:style:isMini:
+ backButtonBackgroundImageForState:isMini:
+ setBackButtonBackgroundImage:forState:isMini:
+ anyBackgroundImage
+ miniTitlePositionOffset
+ titlePositionOffset
+ backgroundVerticalAdjustmentForBarMetrics:
+ setBackgroundVerticalAdjustment:forBarMetrics:
+ setMiniTitlePositionOffset:
+ setTitlePositionOffset:
+ miniBackButtonTitlePositionOffset
+ backButtonTitlePositionOffset
+ anyBackButtonBackgroundImage
+ backButtonBackgroundVerticalAdjustmentForBarMetrics:
+ setBackButtonBackgroundVerticalAdjustment:forBarMetrics:
+ setMiniBackButtonTitlePositionOffset:
+ setBackButtonTitlePositionOffset:
- dealloc
- tintColor
- setTintColor:
- backgroundImageForState:style:isMini:
- setBackgroundImage:forState:style:isMini:
- backButtonBackgroundImageForState:isMini:
- setBackButtonBackgroundImage:forState:isMini:
- anyBackgroundImage
- miniTitlePositionOffset
- titlePositionOffset
- backgroundVerticalAdjustmentForBarMetrics:
- setBackgroundVerticalAdjustment:forBarMetrics:
- setMiniTitlePositionOffset:
- setTitlePositionOffset:
- miniBackButtonTitlePositionOffset
- backButtonTitlePositionOffset
- anyBackButtonBackgroundImage
- backButtonBackgroundVerticalAdjustmentForBarMetrics:
- setBackButtonBackgroundVerticalAdjustment:forBarMetrics:
- setMiniBackButtonTitlePositionOffset:
- setBackButtonTitlePositionOffset:
@end
