@interface SLFacebookSession : NSObject
{
	id _remoteSession;
}

+ fetchLikeStatusForURL:flags:completion:
+ likeURL:completion:
+ unlikeURL:completion:
+ uploadPost:forPID:
+ injectCompletedUploadWithCompletion:
+ uploadPost:suppressAlerts:withPostCompletion:
+ uploadsInProgress:
+ cancelUploadWithIdentifier:
+ revokeAccessTokenForAppWithID:
+ tokenSecretForEntitledClientWithError:
+ testCall
+ uploadPost:
+ revokeAllAccessTokensForDevice
+ uploadProfilePicture:error:
+ init
+ .cxx_destruct
- fetchLikeStatusForURL:flags:completion:
- likeURL:completion:
- unlikeURL:completion:
- uploadPost:forPID:
- injectCompletedUploadWithCompletion:
- uploadPost:suppressAlerts:withPostCompletion:
- uploadsInProgress:
- cancelUploadWithIdentifier:
- revokeAccessTokenForAppWithID:
- tokenSecretForEntitledClientWithError:
- testCall
- uploadPost:
- revokeAllAccessTokensForDevice
- uploadProfilePicture:error:
- init
- .cxx_destruct
@end
