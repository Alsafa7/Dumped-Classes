@interface SKUIChartsPageSection : SKUIStorePageSection
{
	id _ipadViewController;
	id _iphoneViewController;
	id _overlayController;
	long long _selectedChartIndex;
	long long _selectedItemIndex;
}

+ dealloc
+ initWithPageComponent:
+ cellSizeForIndexPath:
+ addImpressionsForIndexPath:toSession:
+ numberOfCells
+ collectionViewShouldHighlightItemAtIndexPath:
+ collectionViewShouldSelectItemAtIndexPath:
+ willAppearInContext:
+ prefetchResourcesWithReason:
+ fitsToHeight
+ productPageOverlay:flipSourceViewToDismissItem:
+ productPageOverlay:flipSourceViewToPresentItem:
+ productPageOverlayDidDismiss:
+ _chartsViewController
+ _recordClickEvent:withItem:itemIndex:chartIndex:
+ chartsViewController:didConfirmItemOfferForItem:atIndex:chartIndex:
+ chartsViewController:didSelectItem:atIndex:chartIndex:
+ chartsViewController:willDisplayItem:atIndex:chartIndex:
+ .cxx_destruct
+ cellForIndexPath:
- dealloc
- initWithPageComponent:
- cellSizeForIndexPath:
- addImpressionsForIndexPath:toSession:
- numberOfCells
- collectionViewShouldHighlightItemAtIndexPath:
- collectionViewShouldSelectItemAtIndexPath:
- willAppearInContext:
- prefetchResourcesWithReason:
- fitsToHeight
- productPageOverlay:flipSourceViewToDismissItem:
- productPageOverlay:flipSourceViewToPresentItem:
- productPageOverlayDidDismiss:
- _chartsViewController
- _recordClickEvent:withItem:itemIndex:chartIndex:
- chartsViewController:didConfirmItemOfferForItem:atIndex:chartIndex:
- chartsViewController:didSelectItem:atIndex:chartIndex:
- chartsViewController:willDisplayItem:atIndex:chartIndex:
- .cxx_destruct
- cellForIndexPath:
@end
