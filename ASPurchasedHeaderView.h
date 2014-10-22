@interface ASPurchasedHeaderView : UIView
{
	id _clientContext;
	id _filterLocalAppsControl;
	id _searchBar;
	BOOL _searchBarHidden;
	id _sortButton;
	id _sortByLabel;
}

+ filterLocalAppsControl
+ sortTypeControl
+ filtersLocalApps
+ setFiltersLocalApps:
+ setSearchBarHidden:
+ setSortTypeTitle:
+ isSearchBarHidden
+ sortTypeTitle
+ initWithFrame:
+ hitTest:withEvent:
+ layoutSubviews
+ searchBar
+ clientContext
+ .cxx_destruct
+ setClientContext:
- filterLocalAppsControl
- sortTypeControl
- filtersLocalApps
- setFiltersLocalApps:
- setSearchBarHidden:
- setSortTypeTitle:
- isSearchBarHidden
- sortTypeTitle
- initWithFrame:
- hitTest:withEvent:
- layoutSubviews
- searchBar
- clientContext
- .cxx_destruct
- setClientContext:
@end
