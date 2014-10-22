@interface AAAccountManager : NSObject
{
	id _accountStore;
	id _accounts;
	id _originalAccounts;
}

+ dealloc
+ _stopObservingAccountStoreDidChangeNotification
+ _beginObservingAccountStoreDidChangeNotification
+ _removeAppleIDCertsForUsername:
+ accountsEnabledForDataclass:
+ accountWithUsername:
+ accountWithPersonID:
+ updateAccount:
+ saveAllAccounts
+ accounts
+ removeAccount:
+ reloadAccounts
+ accountWithIdentifier:
+ .cxx_destruct
+ addAccount:
+ primaryAccount
+ _accountStore
- dealloc
- _stopObservingAccountStoreDidChangeNotification
- _beginObservingAccountStoreDidChangeNotification
- _removeAppleIDCertsForUsername:
- accountsEnabledForDataclass:
- accountWithUsername:
- accountWithPersonID:
- updateAccount:
- saveAllAccounts
- accounts
- removeAccount:
- reloadAccounts
- accountWithIdentifier:
- .cxx_destruct
- addAccount:
- primaryAccount
- _accountStore
@end
