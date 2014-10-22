@interface SKUIBrickSwooshPageSection : SKUIStorePageSection
{
	id _artworkLoader;
	id _missingItemLoader;
	id _swooshViewController;
}

+ dealloc
+ initWithPageComponent:
+ cellSizeForIndexPath:
+ addImpressionsForIndexPath:toSession:
+ numberOfCells
+ collectionViewDidEndDisplayingCellForItemAtIndexPath:
+ willAppearInContext:
+ prefetchResourcesWithReason:
+ _missingItemLoader
+ missingItemLoader:didLoadItems:
+ _addImpressionForIndex:toSession:
+ _swooshViewController
+ _loadMissingItemsFromIndex:withReason:
+ swoosh:imageForCellAtIndex:
+ swoosh:didSelectCellAtIndex:
+ swoosh:willDisplayCellAtIndex:
+ .cxx_destruct
+ cellForIndexPath:
+ _artworkLoader
- dealloc
- initWithPageComponent:
- cellSizeForIndexPath:
- addImpressionsForIndexPath:toSession:
- numberOfCells
- collectionViewDidEndDisplayingCellForItemAtIndexPath:
- willAppearInContext:
- prefetchResourcesWithReason:
- _missingItemLoader
- missingItemLoader:didLoadItems:
- _addImpressionForIndex:toSession:
- _swooshViewController
- _loadMissingItemsFromIndex:withReason:
- swoosh:imageForCellAtIndex:
- swoosh:didSelectCellAtIndex:
- swoosh:willDisplayCellAtIndex:
- .cxx_destruct
- cellForIndexPath:
- _artworkLoader
@end
