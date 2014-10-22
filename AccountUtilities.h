@interface AccountUtilities : NSObject
{
	id _accountStore;
	id _accountIDsEnabledForNotes;
	id _noteContext;
}

+ accountStore
+ dealloc
+ init
+ defaultStoreSyncIdWithDesiredSyncId:
+ _accountStoreDidChange:
+ localNotesExist
+ accountsEnabledForNotes
+ accountIDsEnabledForNotes
+ .cxx_destruct
- accountStore
- dealloc
- init
- defaultStoreSyncIdWithDesiredSyncId:
- _accountStoreDidChange:
- localNotesExist
- accountsEnabledForNotes
- accountIDsEnabledForNotes
- .cxx_destruct
@end
