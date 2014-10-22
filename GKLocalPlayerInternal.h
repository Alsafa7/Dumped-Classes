@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
	id _accountName;
	id _emailAddresses;
	id _facebookUserID;
	id _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
}

+ numberOfChallenges
+ setNumberOfChallenges:
+ setPurpleBuddyAccount:
+ numberOfRequests
+ numberOfTurns
+ facebookUserID
+ setFacebookUserID:
+ iCloudUserID
+ setICloudUserID:
+ setUnderage:
+ isFindable
+ setFindable:
+ isPhotoPending
+ setPhotoPending:
+ setNumberOfRequests:
+ setNumberOfTurns:
+ isFriend
+ isLocalPlayer
+ isUnderage
+ isPurpleBuddyAccount
+ dealloc
+ setAccountName:
+ accountName
+ emailAddresses
+ setEmailAddresses:
- numberOfChallenges
- setNumberOfChallenges:
- setPurpleBuddyAccount:
- numberOfRequests
- numberOfTurns
- facebookUserID
- setFacebookUserID:
- iCloudUserID
- setICloudUserID:
- setUnderage:
- isFindable
- setFindable:
- isPhotoPending
- setPhotoPending:
- setNumberOfRequests:
- setNumberOfTurns:
- isFriend
- isLocalPlayer
- isUnderage
- isPurpleBuddyAccount
- dealloc
- setAccountName:
- accountName
- emailAddresses
- setEmailAddresses:
@end
