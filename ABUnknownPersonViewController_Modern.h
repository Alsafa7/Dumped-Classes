@interface ABUnknownPersonViewController_Modern : UIViewController
{
	pointer _addressBook;
	pointer _displayedPerson;
	BOOL _allowsActions;
	BOOL _allowsAddingToAddressBook;
	BOOL _allowsSendingTextMessage;
	BOOL _allowsConferencing;
	BOOL _allowsContactBlocking;
	BOOL _allowsOnlyPhoneActions;
	BOOL _allowsOnlyFaceTimeActions;
	BOOL _allowsSharing;
	int _style;
	id _unknownPersonViewDelegate;
	id _alternateName;
	id _message;
	id _sharingDelegate;
	id _personHeaderView;
	id _styleProvider;
	id _helper;
	id _dataSource;
	id _actionsDelegate;
	id _displayedUIPerson;
	id _displayedProperties;
	id _contactViewController;
	id _primaryCNProperty;
	id _primaryCountryCode;
	id _vCardTableView;
	id _vCards;
	id _vCardsProperties;
	id _addAllVCardsSheet;
	id _unmergedRecords;
	id _unmergedAlertSheet;
}

@end
