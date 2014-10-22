@interface ACUIAccountOperationsHelper : NSObject
{
	id _accountStore;
	id _accountOperationsQueue;
	BOOL _isRemovingAccount;
	BOOL _isSavingAccount;
	id _delegate;
}

+ setDelegate:
+ delegate
+ initWithAccountStore:
+ saveAccount:requireVerification:
+ setIsSavingAccount:
+ _desiredDataclassActionsFromPossibleActions:forAccount:
+ saveAccount:withDataclassActions:requireVerification:
+ setIsRemovingAccount:
+ saveAccount:
+ saveAccount:withDataclassActions:
+ isRemovingAccount
+ isSavingAccount
+ removeAccount:
+ .cxx_destruct
- setDelegate:
- delegate
- initWithAccountStore:
- saveAccount:requireVerification:
- setIsSavingAccount:
- _desiredDataclassActionsFromPossibleActions:forAccount:
- saveAccount:withDataclassActions:requireVerification:
- setIsRemovingAccount:
- saveAccount:
- saveAccount:withDataclassActions:
- isRemovingAccount
- isSavingAccount
- removeAccount:
- .cxx_destruct
@end
