@interface SKUIIPadSearchHeaderView : UIView
{
	long long _activeFacetIndex;
	id _clientContext;
	id _delegate;
	id _facetButtons;
	id _facetPopoverController;
	id _facetSelections;
	id _searchFacets;
}

+ dealloc
+ setDelegate:
+ layoutSubviews
+ sizeThatFits:
+ delegate
+ popoverControllerDidDismissPopover:
+ facetSelections
+ setSearchFacets:
+ setFacetSelections:
+ _destroyFacetPopover
+ _facetButtonAction:
+ _titleForFacet:
+ _selectedIndexForFacet:
+ _newPopoverControllerWithFacet:checkedIndex:
+ initWithFrame:clientContext:
+ setSearchFacets:selections:
+ searchFacets
+ .cxx_destruct
+ menuViewController:didSelectItemAtIndex:
- dealloc
- setDelegate:
- layoutSubviews
- sizeThatFits:
- delegate
- popoverControllerDidDismissPopover:
- facetSelections
- setSearchFacets:
- setFacetSelections:
- _destroyFacetPopover
- _facetButtonAction:
- _titleForFacet:
- _selectedIndexForFacet:
- _newPopoverControllerWithFacet:checkedIndex:
- initWithFrame:clientContext:
- setSearchFacets:selections:
- searchFacets
- .cxx_destruct
- menuViewController:didSelectItemAtIndex:
@end
