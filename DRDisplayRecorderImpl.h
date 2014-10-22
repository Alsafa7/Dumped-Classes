@interface DRDisplayRecorderImpl : DRDisplayRecorder
{
	int recorderStatus;
	int filedes;
	usigned long long currentFrameIndex;
	double recordingStartTime;
	double frameDelay;
	id activeFilePath;
	id recordingErrorText;
	long long recordingErrorCode;
	id audioRecorder;
	pointer backgroundThread;
	long long iconBadge;
	BOOL isWildcat;
	int adjustedRotation;
}

+ currentNetworkName
+ activator:requiresIconDataForListenerName:scale:
+ activator:requiresSmallIconDataForListenerName:scale:
+ activator:requiresLocalizedTitleForListenerName:
+ activator:requiresLocalizedGroupForListenerName:
+ activator:requiresLocalizedDescriptionForListenerName:
+ activator:abortEvent:
+ activator:requiresIconDataForListenerName:
+ activator:requiresSmallIconDataForListenerName:
+ activator:receiveEvent:forListenerName:
+ activator:receiveDeactivateEvent:
+ recorderStatus
+ recordingErrorCode
+ recordingErrorText
+ currentFrameIndex
+ recordingStartTime
+ activeFilePath
+ pushIconBadge
+ popIconBadge
+ _remoteUnsignedIntegerNamed:userInfo:
+ _remoteIntegerNamed:userInfo:
+ _remoteObjectNamed:userInfo:
+ _remoteDoubleNamed:userInfo:
+ _remoteVoidNamed:userInfo:
+ _remoteLongLongNamed:userInfo:
+ captureOutput:didOutputSampleBuffer:fromConnection:
+ isAvailable
+ openSettings
+ dealloc
+ init
- currentNetworkName
- activator:requiresIconDataForListenerName:scale:
- activator:requiresSmallIconDataForListenerName:scale:
- activator:requiresLocalizedTitleForListenerName:
- activator:requiresLocalizedGroupForListenerName:
- activator:requiresLocalizedDescriptionForListenerName:
- activator:abortEvent:
- activator:requiresIconDataForListenerName:
- activator:requiresSmallIconDataForListenerName:
- activator:receiveEvent:forListenerName:
- activator:receiveDeactivateEvent:
- recorderStatus
- recordingErrorCode
- recordingErrorText
- currentFrameIndex
- recordingStartTime
- activeFilePath
- pushIconBadge
- popIconBadge
- _remoteUnsignedIntegerNamed:userInfo:
- _remoteIntegerNamed:userInfo:
- _remoteObjectNamed:userInfo:
- _remoteDoubleNamed:userInfo:
- _remoteVoidNamed:userInfo:
- _remoteLongLongNamed:userInfo:
- captureOutput:didOutputSampleBuffer:fromConnection:
- isAvailable
- openSettings
- dealloc
- init
@end
