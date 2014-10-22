@interface NotesListController : ResumableViewController
{
	id _backgroundView;
	id _table;
	id _addButton;
	id _cancelButton;
	id _titleView;
	id _titleViewContainer;
	id _searchController;
	float _yOffset;
	id _searching;
	id _searchTokens;
	pointer _searchContext;
	id _searchItems;
	id _tempSearchItems;
	id _searchTableTopFadingView;
	id _listFRC;
	BOOL _fetchResultContentChangeRequiresTableReload;
	unsigned int _ignoringTableReloads;
	id _collection;
	id _collectionID;
	id _placeholderNoteTitle;
	id _previousSelectedNoteID;
	BOOL _ignoreKeyboardNotifications;
	id _animationQueue;
	BOOL _isAnimating;
	int _delayedDirection;
	id _delayedNote;
	id _editingNote;
	BOOL _ignoreNextNotesChangedNotification;
}

@end
