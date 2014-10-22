@interface ASPurchasesDatabase : NSObject
{
	id _authenticationCompletionBlocks;
	id _authenticateRequest;
	id _cloudClient;
	int _databaseChangeToken;
	long long _state;
	id _underlyingDatabase;
}

+ updateFromServerWithReason:completionBlock:
+ authenticateWithCompletionBlock:
+ itemsWithPredicate:sortColumn:sortAscending:
+ _connectCloudClient
+ _authenticationActivity:
+ _setUpdateInProgress:isInitialLoad:
+ dealloc
+ init
+ state
+ _setState:
+ _accountStoreDidChange:
+ _finishSignInWithResponse:error:
+ .cxx_destruct
- updateFromServerWithReason:completionBlock:
- authenticateWithCompletionBlock:
- itemsWithPredicate:sortColumn:sortAscending:
- _connectCloudClient
- _authenticationActivity:
- _setUpdateInProgress:isInitialLoad:
- dealloc
- init
- state
- _setState:
- _accountStoreDidChange:
- _finishSignInWithResponse:error:
- .cxx_destruct
@end
