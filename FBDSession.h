@interface FBDSession : SLRemoteSession
{
	id _accountStore;
	id _activeAccountIdentifier;
}

+ _playPostSound
+ _uploadPost:withSourceAppIdentifier:suppressAlerts:trackPostStatus:completion:
+ _privilegedAccount
+ finishedPostUpload:withSuccess:
+ accountStore
+ fetchLikeStatusForURL:flags:completion:
+ likeURL:completion:
+ unlikeURL:completion:
+ tokenSecretForEntitledClientWithHandler:
+ doTestCallWithDict:withHandler:
+ injectCompletedUploadWithCompletion:
+ uploadPost:withXPCTransferCompletion:
+ uploadPost:forPID:withXPCTransferCompletion:
+ uploadPost:suppressAlerts:withPostCompletion:
+ uploadsInProgress:
+ cancelUploadWithIdentifier:
+ revokeAccessTokenForAppWithID:
+ revokeAllAccessTokensForDeviceWithCompletion:
+ uploadProfileImageData:withCompletion:
+ completedUploadsWithHandler:
+ _tokenSecret
+ .cxx_destruct
- _playPostSound
- _uploadPost:withSourceAppIdentifier:suppressAlerts:trackPostStatus:completion:
- _privilegedAccount
- finishedPostUpload:withSuccess:
- accountStore
- fetchLikeStatusForURL:flags:completion:
- likeURL:completion:
- unlikeURL:completion:
- tokenSecretForEntitledClientWithHandler:
- doTestCallWithDict:withHandler:
- injectCompletedUploadWithCompletion:
- uploadPost:withXPCTransferCompletion:
- uploadPost:forPID:withXPCTransferCompletion:
- uploadPost:suppressAlerts:withPostCompletion:
- uploadsInProgress:
- cancelUploadWithIdentifier:
- revokeAccessTokenForAppWithID:
- revokeAllAccessTokensForDeviceWithCompletion:
- uploadProfileImageData:withCompletion:
- completedUploadsWithHandler:
- _tokenSecret
- .cxx_destruct
@end
