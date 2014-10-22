@interface NotesDisplayController : ResumableViewController
{
	id _delegate;
	id _backgroundView;
	id _deleteButtonItem;
	id _shareButtonItem;
	id _doneButton;
	id _addButton;
	id _note;
	long long _noteIndexToDisplayAfterDelete;
	id _contentLayer;
	BOOL _dontTransitionOut;
	BOOL _showKeyboardAfterTransition;
	BOOL _delayingSetContent;
	BOOL _rotating;
	bit[1] _noteNeedsSaving;
	bit[1] _emailDeliveryFailed;
	bit[1] _didSetContentFromNote;
	float _yOffset;
	id _emailErrorTitle;
	id _emailErrorDescription;
	id _autosaveTimer;
	id _alertSheet;
	BOOL _restoreAlertSheet;
	id _noteStore;
	BOOL _isAutosaving;
	BOOL _isRunningDeleteAnimation;
	BOOL _useCachedNoteContentIfPossible;
	id _noteContentBeforeInvalidation;
	BOOL _noteContentWasPlainTextBeforeInvalidation;
	BOOL _printPanelShowing;
	BOOL _restorePrintPanel;
	id _sharePopover;
	id _findViewController;
	id _searchTermToHighlight;
}

@end
