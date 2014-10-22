@interface MFAccountStore : NSObject
{
	int _accountStoreLock;
	id _accountStore;
}

+ persistentStore
+ dealloc
+ init
+ existingAccountWithPersistentAccount:
+ newPersistentAccountWithAccountTypeIdentifier:
+ supportedDataclassesWithAccountTypeIdentifier:
+ savePersistentAccountWithAccount:
+ removePersistentAccountWithAccount:
+ incomingAccountsWithError:
+ deliveryAccountsWithError:
+ setPersistentStore:
+ _accountsStoreChanged:
+ accountsWithTypeIdentifiers:error:
+ _accountWithPersistentAccount:useExisting:
- persistentStore
- dealloc
- init
- existingAccountWithPersistentAccount:
- newPersistentAccountWithAccountTypeIdentifier:
- supportedDataclassesWithAccountTypeIdentifier:
- savePersistentAccountWithAccount:
- removePersistentAccountWithAccount:
- incomingAccountsWithError:
- deliveryAccountsWithError:
- setPersistentStore:
- _accountsStoreChanged:
- accountsWithTypeIdentifiers:error:
- _accountWithPersistentAccount:useExisting:
@end
