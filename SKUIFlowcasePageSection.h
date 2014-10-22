@interface SKUIFlowcasePageSection : SKUIStorePageSection
{
	id _artworkLoader;
	id _flowCaseViewController;
	id _missingItemLoader;
	BOOL _pinned;
	long long _rotationInterfaceOrientation;
}

+ dealloc
+ willRotateToInterfaceOrientation:duration:
+ didRotateFromInterfaceOrientation:
+ initWithPageComponent:
+ cellSizeForIndexPath:
+ addImpressionsForIndexPath:toSession:
+ numberOfCells
+ popPinnedHeaderView
+ restorePinnedHeaderView:
+ willAppearInContext:
+ prefetchResourcesWithReason:
+ _missingItemLoader
+ missingItemLoader:didLoadItems:
+ _loadMissingItemsFromIndex:withReason:
+ _addVisibleImpressionsToSession:
+ _flowCaseViewController
+ flowcase:didSelectItem:atIndex:
+ flowcase:imageForItem:index:orientation:
+ flowcaseDidChangeVisibleViews:
+ .cxx_destruct
+ cellForIndexPath:
+ _artworkLoader
- dealloc
- willRotateToInterfaceOrientation:duration:
- didRotateFromInterfaceOrientation:
- initWithPageComponent:
- cellSizeForIndexPath:
- addImpressionsForIndexPath:toSession:
- numberOfCells
- popPinnedHeaderView
- restorePinnedHeaderView:
- willAppearInContext:
- prefetchResourcesWithReason:
- _missingItemLoader
- missingItemLoader:didLoadItems:
- _loadMissingItemsFromIndex:withReason:
- _addVisibleImpressionsToSession:
- _flowCaseViewController
- flowcase:didSelectItem:atIndex:
- flowcase:imageForItem:index:orientation:
- flowcaseDidChangeVisibleViews:
- .cxx_destruct
- cellForIndexPath:
- _artworkLoader
@end
