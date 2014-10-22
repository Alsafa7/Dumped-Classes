@interface SSClientAccountStore : SSAccountStore
{
	id _accounts;
	BOOL _accountsValid;
}

+ activeLockerAccount
+ activeAccount
+ dealloc
+ init
+ accounts
+ reloadAccounts
+ signOutAccount:
+ accountWithUniqueIdentifier:reloadIfNecessary:
+ setAccountCredits:forAccountWithUniqueIdentifier:
+ _reloadAccountsIfNeeded
+ _addAccount:asActiveAccount:activeLockerAccount:
+ _accountWithUniqueIdentifier:
+ _invalidateAccounts
+ updateAccountsWithMessage:completionBlock:
+ _signOutWithAccountIDs:
+ _copyReloadedAccounts
+ signOutAllAccounts
+ accountWithUniqueIdentifier:
+ addAccount:
+ setActiveAccount:
+ setActiveLockerAccount:
+ setAccounts:
- activeLockerAccount
- activeAccount
- dealloc
- init
- accounts
- reloadAccounts
- signOutAccount:
- accountWithUniqueIdentifier:reloadIfNecessary:
- setAccountCredits:forAccountWithUniqueIdentifier:
- _reloadAccountsIfNeeded
- _addAccount:asActiveAccount:activeLockerAccount:
- _accountWithUniqueIdentifier:
- _invalidateAccounts
- updateAccountsWithMessage:completionBlock:
- _signOutWithAccountIDs:
- _copyReloadedAccounts
- signOutAllAccounts
- accountWithUniqueIdentifier:
- addAccount:
- setActiveAccount:
- setActiveLockerAccount:
- setAccounts:
@end
