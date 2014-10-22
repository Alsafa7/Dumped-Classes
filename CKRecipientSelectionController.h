@interface CKRecipientSelectionController : UIViewController
{
	double _keyboardHeightWithAccessoryView;
	BOOL _peoplePickerHidden;
	BOOL _editable;
	BOOL _preventAtomization;
	id _delegate;
	id _toField;
	id _toFieldPalette;
	id _searchListController;
	id _peoplePickerController;
	id _toFieldScrollingView;
	id _backfillUpdater;
	id _recentContactForPresentedABCard;
}

@end
