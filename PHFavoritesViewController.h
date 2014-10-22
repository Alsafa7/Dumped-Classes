@interface PHFavoritesViewController : PhoneViewController
{
	id _table;
	id _noContentView;
	id _peoplePickerController;
	id _selectedABFavoritesEntry;
	id _disambiguationSheet;
	id _disambiguationSheetContext;
	bit[1] _suspended;
	bit[1] _ignoreFavoritesDidChangeNotification;
	bit[1] _postponeTableReloadFromFavoritesChange;
	bit[1] _needsTableReloadFromFavoritesChange;
}

@end
