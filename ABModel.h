@interface ABModel : NSObject
{
	pointer _addressBook;
	pointer _sectionLists;
	pointer _headerSortKeyToHeaderString;
	struct _displayedMemberPreparedRange;
	usigned long long _numberOfDisplayedMembers;
	BOOL _displayedMembersAreSearchResults;
	pointer _selectedPerson;
	unsigned int _displayOrdering;
	pointer _databaseChangeDelegates;
	pointer _backgroundAddressBook;
	BOOL _backgroundAddressBookInvalidated;
	id _cachedModelRecords;
	id _memberLock;
	BOOL _loadingInBackground;
	id _backgroundLoadingLock;
	BOOL _backgroundInvalidated;
	id _delayedNotificationHandler;
	BOOL _autoInvalidateOnDatabaseChange;
	id _lastSeenSources;
	id _lastSeenGroups;
	int _meID;
	id _displayedContactsFilter;
	id _selectedContactsFilter;
	id _lastSelectedContactsFilter;
}

@end
