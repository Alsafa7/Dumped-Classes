@interface SKUILockupSwooshPageSection : SKUIStorePageSection
{
	id _artworkLoader;
	id _missingItemLoader;
	id _overlayController;
	long long _overlaySourceIndex;
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
+ productPageOverlay:flipSourceViewToDismissItem:
+ productPageOverlay:flipSourceViewToPresentItem:
+ productPageOverlayDidDismiss:
+ _missingItemLoader
+ _popSourceViewForOverlayController:
+ missingItemLoader:didLoadItems:
+ setImage:forRequest:
+ _swooshViewController
+ _loadMissingItemsFromIndex:withReason:
+ swoosh:imageForCellAtIndex:
+ swoosh:didSelectCellAtIndex:
+ swoosh:willDisplayCellAtIndex:
+ swooshDidSelectSeeAll:
+ _addImpressionForItemIndex:toSession:
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
- productPageOverlay:flipSourceViewToDismissItem:
- productPageOverlay:flipSourceViewToPresentItem:
- productPageOverlayDidDismiss:
- _missingItemLoader
- _popSourceViewForOverlayController:
- missingItemLoader:didLoadItems:
- setImage:forRequest:
- _swooshViewController
- _loadMissingItemsFromIndex:withReason:
- swoosh:imageForCellAtIndex:
- swoosh:didSelectCellAtIndex:
- swoosh:willDisplayCellAtIndex:
- swooshDidSelectSeeAll:
- _addImpressionForItemIndex:toSession:
- .cxx_destruct
- cellForIndexPath:
- _artworkLoader
@end
