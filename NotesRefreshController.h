@interface NotesRefreshController : NSObject
{
	id _lastNotesRefreshDates;
	id _lastStoresListRefreshDate;
}

+ notesNeedRefreshForCollectionWithId:
+ refreshNotesForCollectionWithId:
+ refreshAllNotesIfNeeded
+ storesListNeedsRefresh
+ refreshStoresList
+ refreshOrphanedAccounts
+ notesNeedRefresh
+ .cxx_destruct
+ _accountStore
- notesNeedRefreshForCollectionWithId:
- refreshNotesForCollectionWithId:
- refreshAllNotesIfNeeded
- storesListNeedsRefresh
- refreshStoresList
- refreshOrphanedAccounts
- notesNeedRefresh
- .cxx_destruct
- _accountStore
@end
