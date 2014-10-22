@interface UIStatusBarForegroundView : UIView
{
	Array _itemIsEnabled;
	Array _layoutManagers;
	int _ignoreDataLevel;
	id _actionAnimationStack;
	id _pendedData;
	int _pendedActions;
	long long _idiom;
	id _foregroundStyle;
}

+ dealloc
+ pointInside:withEvent:
+ setFrame:
+ setBounds:
+ foregroundStyle
+ idiom
+ startIgnoringData
+ _cleanUpAfterDataChange
+ _reflowItemViewsWithDuration:preserveHistory:
+ ignoringData
+ _setStatusBarData:actions:animated:
+ stopIgnoringData:
+ _reflowItemViewsCrossfadingCenterWithDuration:
+ _computeVisibleItemsPreservingHistory:
+ _cleanUpAfterSimpleReflow
+ setStatusBarData:actions:animated:
+ edgePadding
+ _tryToPlaceItem:inItemArray:layoutManager:roomRemaining:allowSwap:swappedItem:
+ setPersistentAnimationsEnabled:
+ reflowItemViews:
+ initWithFrame:foregroundStyle:
+ reflowItemViewsCrossfadingCenter:duration:
+ reflowItemViewsForgettingEitherSideItemHistory
+ setIdiom:
- dealloc
- pointInside:withEvent:
- setFrame:
- setBounds:
- foregroundStyle
- idiom
- startIgnoringData
- _cleanUpAfterDataChange
- _reflowItemViewsWithDuration:preserveHistory:
- ignoringData
- _setStatusBarData:actions:animated:
- stopIgnoringData:
- _reflowItemViewsCrossfadingCenterWithDuration:
- _computeVisibleItemsPreservingHistory:
- _cleanUpAfterSimpleReflow
- setStatusBarData:actions:animated:
- edgePadding
- _tryToPlaceItem:inItemArray:layoutManager:roomRemaining:allowSwap:swappedItem:
- setPersistentAnimationsEnabled:
- reflowItemViews:
- initWithFrame:foregroundStyle:
- reflowItemViewsCrossfadingCenter:duration:
- reflowItemViewsForgettingEitherSideItemHistory
- setIdiom:
@end
