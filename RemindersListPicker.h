@interface RemindersListPicker : UIViewController
{
	id _tableView;
	id _model;
	bit[1] _editing;
	bit[1] _needsReloadAfterEndingEditing;
	bit[1] _isEmpty;
	bit[1] _shouldIgnoreNextEventStoreChange;
	int _style;
	id _editButton;
	id _currentlyEditingTextField;
	id _alertView;
	id _indexPathToDelete;
	BOOL _hasSwipedRow;
	id _delegate;
	double _keyboardHeightOnScreen;
	id _textFieldToIDs;
	pointer _newCalendarColorRef;
	id _currentCalendarColor;
}

@end
