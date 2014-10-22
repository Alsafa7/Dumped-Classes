@interface ABPeoplePickerNavigationController : UINavigationController
{
	pointer _addressBook;
	id _peoplePickerDelegate;
	id _model;
	int _behavior;
	pointer _displayedProperties;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _defaultToolbarItems;
	id _insertionValue;
	int _insertionProperty;
	struct _flags;
	BOOL _navigationBarIsAnimating;
	BOOL _allowsContactBlocking;
	BOOL _allowsOnlyPhoneActions;
	BOOL _allowsOnlyFaceTimeActions;
}

@end
