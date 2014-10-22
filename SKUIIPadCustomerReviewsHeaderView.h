@interface SKUIIPadCustomerReviewsHeaderView : UIControl
{
	id _appSupportButton;
	id _clientContext;
	id _colorScheme;
	id _sortPopoverController;
	long long _selectedSortIndex;
	id _separatorView;
	id _sortButton;
	id _sortLabel;
	id _sortTitles;
	id _titleLabel;
	id _writeAReviewButton;
}

+ dealloc
+ setBackgroundColor:
+ hitTest:withEvent:
+ layoutSubviews
+ sizeThatFits:
+ selectedSortIndex
+ setSelectedSortIndex:
+ popoverControllerDidDismissPopover:
+ colorScheme
+ setColorScheme:
+ initWithClientContext:
+ appSupportButton
+ writeAReviewButton
+ setSortTitles:
+ _reloadSortButton
+ _destroySortPopoverController
+ _sortButtonAction:
+ sortTitles
+ .cxx_destruct
+ menuViewController:didSelectItemAtIndex:
- dealloc
- setBackgroundColor:
- hitTest:withEvent:
- layoutSubviews
- sizeThatFits:
- selectedSortIndex
- setSelectedSortIndex:
- popoverControllerDidDismissPopover:
- colorScheme
- setColorScheme:
- initWithClientContext:
- appSupportButton
- writeAReviewButton
- setSortTitles:
- _reloadSortButton
- _destroySortPopoverController
- _sortButtonAction:
- sortTitles
- .cxx_destruct
- menuViewController:didSelectItemAtIndex:
@end
