@interface MPUCompletionQueryDataSource : MPUQueryDataSource
{
	id _tokens;
	id _completions;
	id _overlayedSectionEntityPIDs;
	id _statuses;
	id _variants;
	BOOL _shouldShowCompletions;
	BOOL _shouldAutomaticallyLoadCompletions;
	id _completionDelegate;
}

+ invalidate
+ loadCompletionOfferingForSectionAtIndex:
+ _setCompletion:forSectionAtIndex:
+ completionDelegate
+ _tokenForSectionAtIndex:
+ cancelCompletionOfferingWithToken:
+ shouldLoadCompletionArtwork
+ _setToken:forSectionAtIndex:
+ _pidForSectionAtIndex:
+ setShouldAutomaticallyLoadCompletions:
+ removeAllCompletionOverlays
+ hasVariantsForSectionAtIndex:
+ variantForSectionAtIndex:
+ setVariant:forSectionAtIndex:
+ sectionEntityWithoutOverlayAtIndex:
+ setCompletionDelegate:
+ loadCompletionOfferings
+ setShouldShowCompletions:
+ shouldShowCompletions
+ completionOfferingForSectionAtIndex:
+ isShowingCompletionOverlayForSectionAtIndex:
+ removeOverlayCompletionForSectionAtIndex:
+ indexOfSectionForCompletionOffering:
+ overlayCompletionForSectionAtIndex:
+ setCompletionOfferStatus:forSectionAtIndex:
+ completionOfferStatusForSectionAtIndex:
+ hasCompletionOfferForSectionAtIndex:
+ sectionEntityAtIndex:
+ shouldAutomaticallyLoadCompletions
+ .cxx_destruct
- invalidate
- loadCompletionOfferingForSectionAtIndex:
- _setCompletion:forSectionAtIndex:
- completionDelegate
- _tokenForSectionAtIndex:
- cancelCompletionOfferingWithToken:
- shouldLoadCompletionArtwork
- _setToken:forSectionAtIndex:
- _pidForSectionAtIndex:
- setShouldAutomaticallyLoadCompletions:
- removeAllCompletionOverlays
- hasVariantsForSectionAtIndex:
- variantForSectionAtIndex:
- setVariant:forSectionAtIndex:
- sectionEntityWithoutOverlayAtIndex:
- setCompletionDelegate:
- loadCompletionOfferings
- setShouldShowCompletions:
- shouldShowCompletions
- completionOfferingForSectionAtIndex:
- isShowingCompletionOverlayForSectionAtIndex:
- removeOverlayCompletionForSectionAtIndex:
- indexOfSectionForCompletionOffering:
- overlayCompletionForSectionAtIndex:
- setCompletionOfferStatus:forSectionAtIndex:
- completionOfferStatusForSectionAtIndex:
- hasCompletionOfferForSectionAtIndex:
- sectionEntityAtIndex:
- shouldAutomaticallyLoadCompletions
- .cxx_destruct
@end