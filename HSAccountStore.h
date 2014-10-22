@interface HSAccountStore : NSObject
{
	int _defaultsDidChangeToken;
	id _groupIDRequest;
}

+ clearCaches
+ password
+ setPassword:
+ appleID
+ setAppleID:
+ groupID
+ canDetermineGroupID
+ determineGroupIDWithCompletionHandler:
+ dealloc
+ init
+ clearGroupID
+ clearAllCredentials
+ groupIDRequest
+ setGroupIDRequest:
+ setGroupID:
- clearCaches
- password
- setPassword:
- appleID
- setAppleID:
- groupID
- canDetermineGroupID
- determineGroupIDWithCompletionHandler:
- dealloc
- init
- clearGroupID
- clearAllCredentials
- groupIDRequest
- setGroupIDRequest:
- setGroupID:
@end
