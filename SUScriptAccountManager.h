@interface SUScriptAccountManager : NSObject
{
	id _accounts;
	id _lock;
}

+ dealloc
+ init
+ accounts
+ accountForDSID:
+ _accountsChangedNotification:
+ _dispatchEvent:forName:
+ _ntsReloadAccounts
- dealloc
- init
- accounts
- accountForDSID:
- _accountsChangedNotification:
- _dispatchEvent:forName:
- _ntsReloadAccounts
@end
