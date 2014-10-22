@interface SU_DBSession : NSObject
{
	id baseCredentials;
	id credentialStores;
	id anonymousStore;
	id root;
	id delegate;
}

+ linkFromController:
+ appScheme
+ linkConfirmedWithInfo:
+ linkCancelled
+ removeAppObserver
+ linkUserId:fromController:
+ appConformsToScheme
+ handleAppNotification:
+ unlinkAll
+ initWithAppKey:appSecret:root:
+ userIds
+ credentialStoreForUserId:
+ updateAccessToken:accessTokenSecret:forUserId:
+ setAccessToken:accessTokenSecret:forUserId:
+ saveCredentials
+ unlinkUserId:
+ dealloc
+ setDelegate:
+ delegate
+ isLinked
+ root
- linkFromController:
- appScheme
- linkConfirmedWithInfo:
- linkCancelled
- removeAppObserver
- linkUserId:fromController:
- appConformsToScheme
- handleAppNotification:
- unlinkAll
- initWithAppKey:appSecret:root:
- userIds
- credentialStoreForUserId:
- updateAccessToken:accessTokenSecret:forUserId:
- setAccessToken:accessTokenSecret:forUserId:
- saveCredentials
- unlinkUserId:
- dealloc
- setDelegate:
- delegate
- isLinked
- root
@end
