@interface BKSWorkspace : NSObject
{
	id _invalidationSignal;
	id _queue;
	id _connectionQueue;
	id _applicationInfoQueue;
	id _delegate;
	id _serverEndpoint;
	id _serverConnection;
	id _topApplicationBundleID;
	id _runningApplicationInfo;
	id _activatingApplications;
	id _activationTokens;
	unsigned int _serverPort;
	BOOL _suspended;
	BOOL _locked;
	BOOL _workspaceOwner;
	id _activationTokenFactory;
	id _topApplicationAssertion;
}

+ serverPort
+ suspended
+ initWithQueue:
+ dealloc
+ setDelegate:
+ init
+ description
+ delegate
+ invalidate
+ isLocked
+ setLocked:
+ _registerWithServer
+ initWithQueue:endpoint:delegate:connectImmediately:
+ _makeInitialConnection
+ _sendClientBundleIdentifier:
+ _reregister
+ topApplication
+ activatingApplications
+ _clearActivationStateForBundleID:
+ runningApplications
+ _sendActivate:withActivation:withDeactivation:token:
+ _setupForActivationForBundleID:activationSettings:withResult:
+ _noteWillActivateBundleIdentifier:suspended:activationToken:
+ _sendSuspend:
+ activate:withActivation:
+ _sendLocked:
+ _sendShutdown:
+ _infoForBundleIdentifier:
+ _sendApplication:setRecordingAudio:
+ _sendMessage:withMessagePacker:replyHandler:
+ _sendMessage:withMessagePacker:replyHandler:replyQueue:
+ _sendApplication:setIsConnectionToEA:
+ _sendApplication:setTaskPort:
+ _sendApplication:setNowPlayingAudio:
+ _sendApplication:simpleGSEvent:
+ _sendApplication:simpleGSEvent:withSubtype:
+ application:sendSimpleGSEvent:withSubtype:
+ newActivationAssertionForApplication:named:
+ _sendAcquireApplicationActivationAssertion:uniqueID:name:
+ _sendReleaseApplicationActivationAssertion:
+ _receiveWillBecomeReceiver:
+ _receiveDidBecomeReceiver:
+ _receiveHandleStatusBarReturnActionFromApplication:
+ _receiveApplicationLaunchBegan:
+ _receiveApplicationDidActivate:
+ _receiveApplicationExited:
+ _receiveApplicationSuspended:
+ _receiveApplicationSuspensionSettingsUpdated:
+ _receiveApplicationFinishedBackgroundContentFetching:
+ _receiveWorkspaceIsSuspended:
+ _receiveWorkspaceActivationResponse:
+ _receiveApplicationIsBeingDebuggedStateChanged:
+ _receiveCanActivateApplication:
+ _receiveHandleOpenApplicationRequest:
+ _receiveHandleOpenURLRequest:
+ _sendMessage:withMessagePacker:
+ _handleWillBecomeReceiverFrom:to:activationToken:
+ _handleDidBecomeReceiverFrom:to:workspaceWillResume:
+ _activationTokenForBundleID:
+ _isServerBeingDebugged
+ topActivatingApplication
+ _activationTokens
+ runningBundleIDForPID:
+ killall:
+ kill:
+ kill:withReason:description:
+ suspend:
+ shutdown:
+ application:setRecordingAudio:
+ isApplicationRecordingAudio:
+ elapsedCPUTimesForApplications:completion:
+ isBeingDebugged:
+ backgroundTimeRemaining:
+ application:setIsConnectedToExternalAccessory:
+ isApplicationConnectedToExternalAccessory:
+ application:setTaskPort:
+ application:setNowPlayingWithAudio:
+ application:sendSimpleGSEvent:
+ application:resignActiveForReason:
+ application:resumeActiveForReason:
+ _acquireApplicationActivationAssertion:uniqueID:name:
+ _releaseApplicationActivationAssertion:
+ _sendResume:
+ _addApplicationAsPending:
+ activationTokenFactory
+ setActivationTokenFactory:
+ _invalidateConnection
+ isBusy
+ resume:
+ _handleMessage:
- serverPort
- suspended
- initWithQueue:
- dealloc
- setDelegate:
- init
- description
- delegate
- invalidate
- isLocked
- setLocked:
- _registerWithServer
- initWithQueue:endpoint:delegate:connectImmediately:
- _makeInitialConnection
- _sendClientBundleIdentifier:
- _reregister
- topApplication
- activatingApplications
- _clearActivationStateForBundleID:
- runningApplications
- _sendActivate:withActivation:withDeactivation:token:
- _setupForActivationForBundleID:activationSettings:withResult:
- _noteWillActivateBundleIdentifier:suspended:activationToken:
- _sendSuspend:
- activate:withActivation:
- _sendLocked:
- _sendShutdown:
- _infoForBundleIdentifier:
- _sendApplication:setRecordingAudio:
- _sendMessage:withMessagePacker:replyHandler:
- _sendMessage:withMessagePacker:replyHandler:replyQueue:
- _sendApplication:setIsConnectionToEA:
- _sendApplication:setTaskPort:
- _sendApplication:setNowPlayingAudio:
- _sendApplication:simpleGSEvent:
- _sendApplication:simpleGSEvent:withSubtype:
- application:sendSimpleGSEvent:withSubtype:
- newActivationAssertionForApplication:named:
- _sendAcquireApplicationActivationAssertion:uniqueID:name:
- _sendReleaseApplicationActivationAssertion:
- _receiveWillBecomeReceiver:
- _receiveDidBecomeReceiver:
- _receiveHandleStatusBarReturnActionFromApplication:
- _receiveApplicationLaunchBegan:
- _receiveApplicationDidActivate:
- _receiveApplicationExited:
- _receiveApplicationSuspended:
- _receiveApplicationSuspensionSettingsUpdated:
- _receiveApplicationFinishedBackgroundContentFetching:
- _receiveWorkspaceIsSuspended:
- _receiveWorkspaceActivationResponse:
- _receiveApplicationIsBeingDebuggedStateChanged:
- _receiveCanActivateApplication:
- _receiveHandleOpenApplicationRequest:
- _receiveHandleOpenURLRequest:
- _sendMessage:withMessagePacker:
- _handleWillBecomeReceiverFrom:to:activationToken:
- _handleDidBecomeReceiverFrom:to:workspaceWillResume:
- _activationTokenForBundleID:
- _isServerBeingDebugged
- topActivatingApplication
- _activationTokens
- runningBundleIDForPID:
- killall:
- kill:
- kill:withReason:description:
- suspend:
- shutdown:
- application:setRecordingAudio:
- isApplicationRecordingAudio:
- elapsedCPUTimesForApplications:completion:
- isBeingDebugged:
- backgroundTimeRemaining:
- application:setIsConnectedToExternalAccessory:
- isApplicationConnectedToExternalAccessory:
- application:setTaskPort:
- application:setNowPlayingWithAudio:
- application:sendSimpleGSEvent:
- application:resignActiveForReason:
- application:resumeActiveForReason:
- _acquireApplicationActivationAssertion:uniqueID:name:
- _releaseApplicationActivationAssertion:
- _sendResume:
- _addApplicationAsPending:
- activationTokenFactory
- setActivationTokenFactory:
- _invalidateConnection
- isBusy
- resume:
- _handleMessage:
@end
