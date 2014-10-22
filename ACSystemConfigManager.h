@interface ACSystemConfigManager : NSObject
{
	id _timerQueue;
	id _timerSource;
	pointer _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
}

+ lockPrefs
+ unlockPrefs
+ getValueForKey:
+ accountsWithAccountTypeIdentifierExist:
+ _keepAlive
+ countOfAccountsWithAccountTypeIdentifier:
+ dealloc
+ init
+ setValue:forKey:
+ synchronize
+ setAccountsWithAccountTypeIdentifier:exist:
+ setCountOfAccounts:withAccountTypeIdentifier:
+ notifyTarget:
+ initializeSCPrefs:
+ setCallback:withContext:
+ _tearDown
+ .cxx_destruct
- lockPrefs
- unlockPrefs
- getValueForKey:
- accountsWithAccountTypeIdentifierExist:
- _keepAlive
- countOfAccountsWithAccountTypeIdentifier:
- dealloc
- init
- setValue:forKey:
- synchronize
- setAccountsWithAccountTypeIdentifier:exist:
- setCountOfAccounts:withAccountTypeIdentifier:
- notifyTarget:
- initializeSCPrefs:
- setCallback:withContext:
- _tearDown
- .cxx_destruct
@end
