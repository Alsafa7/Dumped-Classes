@interface MSConnection : NSObject
{
	id _center;
	id _noWakeCenter;
	id _serverSideConfig;
	id _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;
}

+ dealloc
+ init
+ pause
+ checkForOutstandingActivities
+ refreshServerSideConfigurationForPersonID:
+ _machErrorWithUnderlyingError:
+ _waitForMessageToBeSent
+ handleSubscriptionPushForPersonID:
+ abortActivitiesForPersonID:
+ isBusy
+ enqueueAssetCollections:personID:outError:
+ dequeueAssetCollectionWithGUIDs:personID:outError:
+ pollForSubscriptionUpdatesForPersonID:
+ serverSideConfigurationForPersonID:
+ forgetPersonID:
+ resetServerStateForPersonID:
+ resume:
+ deleteAssetCollections:personID:
+ isBusyCompletionBlock:
+ .cxx_destruct
- dealloc
- init
- pause
- checkForOutstandingActivities
- refreshServerSideConfigurationForPersonID:
- _machErrorWithUnderlyingError:
- _waitForMessageToBeSent
- handleSubscriptionPushForPersonID:
- abortActivitiesForPersonID:
- isBusy
- enqueueAssetCollections:personID:outError:
- dequeueAssetCollectionWithGUIDs:personID:outError:
- pollForSubscriptionUpdatesForPersonID:
- serverSideConfigurationForPersonID:
- forgetPersonID:
- resetServerStateForPersonID:
- resume:
- deleteAssetCollections:personID:
- isBusyCompletionBlock:
- .cxx_destruct
@end
