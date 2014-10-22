@interface NotesListTableView : NotesTableView
{
	id _selectionView;
	id _emptyContentLabel;
	id _searchBar;
	BOOL _didSendToBack;
	usigned long long _selectionNumber;
	id _contentUnavailableView;
	id _contentUnavailableString;
}

@end
