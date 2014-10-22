@interface SSAccountStore : NSObject
{
	id _dispatchQueue;
	id _keyValueStore;
	id _notificationQueue;
	id _notifyTokens;
}

+ activeLockerAccount
+ activeAccount
+ dealloc
+ init
+ accounts
+ reloadAccounts
+ signOutAccount:
+ _keyValueStore
+ isExpiredForTokenType:
+ resetExpirationForTokenType:
+ accountWithUniqueIdentifier:reloadIfNecessary:
+ getDefaultAccountNameUsingBlock:
+ isAuthenticationActive
+ setAccountCredits:forAccountWithUniqueIdentifier:
+ setDefaultAccountName:completionBlock:
+ _dispatchAsync:
+ _dispatchSync:
+ _postAccountStoreChangeNotification
+ signOutAllAccounts
+ accountWithUniqueIdentifier:
+ addAccount:
+ isExpired
+ setActiveAccount:
+ setActiveLockerAccount:
+ resetExpiration
- activeLockerAccount
- activeAccount
- dealloc
- init
- accounts
- reloadAccounts
- signOutAccount:
- _keyValueStore
- isExpiredForTokenType:
- resetExpirationForTokenType:
- accountWithUniqueIdentifier:reloadIfNecessary:
- getDefaultAccountNameUsingBlock:
- isAuthenticationActive
- setAccountCredits:forAccountWithUniqueIdentifier:
- setDefaultAccountName:completionBlock:
- _dispatchAsync:
- _dispatchSync:
- _postAccountStoreChangeNotification
- signOutAllAccounts
- accountWithUniqueIdentifier:
- addAccount:
- isExpired
- setActiveAccount:
- setActiveLockerAccount:
- resetExpiration
@end
