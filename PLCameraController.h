@interface PLCameraController : NSObject
{
	id _avCaptureSession;
	id _avCaptureDeviceFront;
	id _avCaptureDeviceBack;
	id _avCaptureDeviceAudio;
	id _avCaptureInputFront;
	id _avCaptureInputBack;
	id _avCaptureInputAudio;
	id _avCaptureOutputPhoto;
	id _avCaptureOutputVideo;
	id _avCaptureOutputPanorama;
	id _avCaptureOutputEffectPreview;
	id _avCaptureOutputMetadata;
	id _mogulFormatBack;
	id _mogulFormatFront;
	pointer _panoramaProcessor;
	pointer _panoramaImageQueue;
	struct _panoramaPreviewSize;
	float _panoramaPreviewScale;
	id _avCaptureSessionDispatchQueue;
	id _avCaptureOutputMetadataQueue;
	id _currentDevice;
	id _currentInput;
	id _currentOutput;
	id _previewLayer;
	struct _cleanAperture;
	BOOL _shouldBeStopped;
	long long _cameraMode;
	long long _cameraDevice;
	long long _flashMode;
	int _captureOrientation;
	BOOL _imageWriterQueueIsAvailable;
	usigned long long _ioSurfaceCounter;
	BOOL _hdrEnabled;
	BOOL _hdrCaptureIncludesEV0Image;
	int _hdrEV0PhotoCaptureCount;
	id _delegate;
	double _maximumCaptureDuration;
	int _videoCaptureQuality;
	id _videoCapturePath;
	id _accelerometer;
	pointer _lastVideoPreviewFrameImageRef;
	BOOL _lockFocusLock;
	BOOL _lockFocusAfterFocusFinishes;
	BOOL _isFocusingOnFace;
	long long _cameraOrientation;
	id _idleTimerTimer;
	BOOL _delaySuspend;
	id _delaySuspendTimer;
	double _maxVideoZoomFactorRear;
	double _maxVideoZoomFactorFront;
	struct _cameraFlags;
	id _dispatchTimerQueue;
	id _dispatchTimer;
	BOOL __previewPaused;
	BOOL __previewLayerEnabledForRenderer;
	BOOL __videoDataOutputEnabledForRenderer;
	BOOL _performingTimedCapture;
	BOOL _disableAllPreviewSuspensionDuringCapture;
	BOOL __atomicEffectsAvailable;
	BOOL __configuringCamera;
	BOOL __atomicModeChangeWaitingForPreviewStarted;
	BOOL __atomicModeChangeWaitingForConfigureSession;
	BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
	id postSessionSetupBlock;
	id _effectsRenderer;
	id _supportedCameraModes;
	id __effectFilterIndexQueue;
	id __effectFilterIndices;
	id __captureIsolationQueue;
	id __currentFaceMetadata;
}

+ captureOutput:didOutputSampleBuffer:fromConnection:
+ faceRectangle
+ hasFlash
+ flashMode
+ setFlashMode:
+ videoZoomFactor
+ setVideoZoomFactor:
+ rampToVideoZoomFactor:withRate:
+ cancelVideoZoomRamp
+ captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections:error:
+ captureOutput:didStartRecordingToOutputFileAtURL:fromConnections:
+ captureOutput:didDropSampleBuffer:fromConnection:
+ captureOutput:didOutputMetadataObjects:fromConnection:
+ isReady
+ _applicationSuspended:
+ _serverDied:
+ dealloc
+ currentDevice
+ setDelegate:
+ init
+ delegate
+ observeValueForKeyPath:ofObject:change:context:
+ accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
+ _applicationDidBecomeActive:
+ startVideoCapture
+ stopVideoCapture
+ cameraDevice
+ setCameraDevice:
+ _applicationDidEnterBackground:
+ _applicationWillEnterForeground:
+ startPreview
+ pausePreview
+ stopPreview
+ mogulFrameRate
+ _synchronizeHDRSettings
+ _callStateDidChange:
+ _updateCallStatus
+ _updateSupportedCameraModes
+ postOrientationChangedNotification:force:
+ _setPreviewLayerEnabledForRenderer:
+ _setVideoDataOutputEnabledForRenderer:
+ _debug_teardownDispatchTimer
+ _destroyCamera
+ _setLocationEnabled:
+ setPostSessionSetupBlock:
+ _teardownDelaySuspendTimer
+ _inCallStatusChanged:
+ _isVideoMode:
+ _setCameraMode:cameraDevice:
+ _imageWriterQueueAvailabilityChanged
+ _updateEffectsRendererMirroring
+ _safeSetCameraMode:cameraDevice:
+ currentOutput
+ _setConfiguringCamera:
+ _videoModeSessionPreset
+ canCapturePhotoDuringRecording
+ supportsAvalancheForDevice:
+ _setEffectsAvailable:
+ _setupPanoramaForDevice:output:options:
+ _currentVideoConnection
+ _cleanupPanoramaOnSessionQueue:
+ _setFaceDetectionEnabled:forCaptureDevice:captureOutput:
+ setCurrentOutput:
+ setCurrentInput:
+ _updateEffectsVideoDataOutputEnabled
+ _updatePreviewLayerEnabled
+ _setModeChangeWaitingForPreviewStarted:
+ _setModeChangeWaitingForConfigureSession:
+ _configureSessionWithCameraMode:cameraDevice:
+ _updateEffectsRendererFilterIndexForceStateChange:renderNotifyBlock:
+ effectsRenderer
+ setCameraMode:
+ enqueueBlockInCaptureSessionQueue:
+ _notifyControllerModeDidChange
+ _isModeChangeWaitingForPreviewStarted
+ _isModeChangeWaitingForConfigureSession
+ enqueueBlockOnMainQueue:
+ _isAtomicModeChangeWaitingForPreviewStarted
+ _setAtomicModeChangeWaitingForPreviewStarted:
+ _isAtomicModeChangeWaitingForConfigureSession
+ _setAtomicModeChangeWaitingForConfigureSession:
+ cameraMode
+ _jankyPreviewStartedWorkaround
+ _previewStarted
+ _debug_dispatchTimerQueue
+ _debug_checkIris
+ _debug_waitForIrisToOpen
+ _mogulFormatFromDevice:
+ supportsLiveEffects
+ _setEffectsRenderer:
+ _deviceStarted:
+ _sessionStarted:
+ _sessionStopped:
+ _sessionRuntimeErrored:
+ _wasInterrupted:
+ _interruptionEnded:
+ _movieFileRecordingCompleted:
+ _inputPortFormatDescriptionDidChange:
+ _focusHasChanged:
+ postSessionSetupBlock
+ _setDelaySuspend:
+ _forceDelaySuspendTimeout
+ _debug_cancelWaitForIris
+ executeBlockOnMainQueue:
+ _tearDownCamera
+ setEffectFilterIndices:forceStateChange:
+ _setupCamera
+ previewLayer
+ _startPreview:
+ currentInput
+ _setOrientationEventsEnabled:
+ _modeUsesCompassHeading
+ _delayIdleTimerByTimeInterval:
+ _setFlashMode:force:
+ isCapturingPanorama
+ stopPanoramaCapture
+ _resetIdleTimer
+ isCapturingVideo
+ _recoverFromServerError
+ _isCountingHDREV0Captures
+ captureOrientation
+ _processCapturedPhotoWithDictionary:error:
+ performAutofocusAfterCapture
+ isChangingModes
+ _sanityCheckSessionCanCaptureWithOutput:
+ isFocusing
+ isExposing
+ _setOrientation
+ supportsPreviewDuringHDR
+ isHDREnabled
+ _setOrientationForConnection:
+ activeFilters
+ _captureIsolationQueue
+ _newFilteredSurfaceFromSurface:filters:
+ _capturedPhotoWithDictionary:error:
+ _removeVideoCaptureFileAndDirectoryAtPath:
+ _verifyVideoConsolidationForVideoAtPath:outUserInfo:
+ setFaceDetectionEnabled:
+ hasInheritedForegroundState
+ canCaptureVideo
+ _setVideoCapturePath:
+ _videoMetadataArrayIncludingSensitiveProperties:
+ lockFocusForRecording
+ minimumVideoCaptureDuration
+ canCapturePanorama
+ lockFocusAndExposureForPano
+ _panoramaDidStop
+ _isConfiguringCamera
+ _processSampleBuffer:
+ _panoramaDidReceiveIssueWithPanoramaString:
+ _cancelDelayedFocusRequests
+ _lockCurrentDeviceForConfiguration
+ _unlockCurrentDeviceForConfiguration
+ _autofocus:autoExpose:
+ performingTimedCapture
+ _autofocusAfterCapture
+ flashWillFire
+ _lockFocus:lockExposure:lockWhiteBalance:
+ userInitiatedLockFocus
+ _commonFocusFinished
+ _focusOperationFinished
+ _autofocusOperationFinished
+ _lockedFocusOperationFinished
+ _faceMetadataDidChange:
+ _focusStarted
+ _focusCompleted
+ _exposureStarted
+ _exposureCompleted
+ _whiteBalanceStarted
+ _whiteBalanceCompleted
+ _flashStateChanged
+ _torchLevelChanged
+ _updateTorchAvailability
+ _faceRectangleChanged
+ _willTakePhoto
+ _didTakePhoto
+ supportsHDRForDevice:
+ supportsHDR
+ accelerometer:didChangeDeviceOrientation:
+ minimumZoomFactorForDevice:
+ maximumZoomFactorForDevice:
+ _limitZoomFactor:forDevice:
+ supportsVideoCapture
+ supportsPanorama
+ _setSupportedCameraModes:
+ _activeFilterIndex
+ _effectsAvailable
+ effectFilterIndexForMode:
+ _effectFilterIndexQueue
+ _effectFilterIndices
+ _sanitizeEffectFilterIndex:forMode:
+ _setEffectFilterIndices:
+ _notifyEffectFilterIndexChanged
+ _atomicEffectsAvailable
+ _setAtomicEffectsAvailable:
+ _setPerformingTimedCapture:
+ lockFocusForTimedCapture
+ _setPreviewPaused:
+ _isPreviewPaused
+ _previewLayerEnabledForRenderer
+ _videoDataOutputEnabledForRenderer
+ cameraEffectsRendererDidStartPreview:
+ cameraEffectsRenderer:requestsPreviewLayerEnabled:
+ cameraEffectsRenderer:requestsVideoDataOutputEnabled:
+ cameraEffectsRenderer:willTransitionToShowGrid:
+ cameraEffectsRenderer:didStartTransitionToShowGrid:animated:
+ cameraEffectsRenderer:didFinishTransitionToShowGrid:
+ inCall
+ captureIOSurface
+ releaseIOSurface
+ _setDefaultPrewarmDate:
+ hasFrontCamera
+ hasRearCamera
+ setConvertSampleBufferToJPEG:
+ convertSampleBufferToJPEG
+ _didSendPreviewStartedCallbackToEmptyDelegate
+ _startPreviewWithCameraDevice:cameraMode:effectFilterIndices:
+ startPreview:
+ previewOrientation
+ setPreviewOrientation:
+ isPreviewMirrored
+ _clearPreviewLayer
+ canCapturePhoto
+ imageWriterQueueIsAvailable
+ capturePhoto
+ videoCapturePath
+ setVideoCaptureQuality:
+ setVideoCaptureMaximumDuration:
+ setPanoramaImageQueueLayer:
+ startPanoramaCapture
+ panoramaProcessorOutputCallbackWithStatus:buffer:
+ setPanoramaCaptureDirection:
+ _panoramaDidReceiveStatusNotificationString:
+ _panoramaDidReceiveWarningNotificationString:
+ _panoramaDidReceiveErrorNotificationString:
+ _panoShouldEnd
+ isFocusAllowed
+ canFocusAtPoint
+ focusAtAdjustedPoint:
+ smoothFocusAtCenter
+ currentFocusMode
+ restartAutoFocus
+ _pptTestSetAutofocusDisabled:
+ canLockFocus
+ isFocusLockSupported
+ isExposureLockSupported
+ setFocusDisabled:
+ isFocusingOnFace
+ isTorchOn
+ isTorchDisabled
+ setHDREnabled:
+ cameraOrientation
+ setEffectFilterIndex:forMode:
+ effectFilterIndices
+ currentMinFrameDuration
+ currentMaxFrameDuration
+ startTimedCapture
+ continueTimedCapture
+ finishTimedCapture
+ recentFaceMetadata
+ resumePreview
+ currentSession
+ setCurrentDevice:
+ imageOutput
+ panoramaPreviewScale
+ panoramaPreviewSize
+ cleanAperture
+ setCaptureOrientation:
+ supportedCameraModes
+ disableAllPreviewSuspensionDuringCapture
+ setDisableAllPreviewSuspensionDuringCapture:
+ _wasStillImageStabilzationOnBeforeTimedCapture
+ _currentFaceMetadata
+ isCameraApp
+ setIsCameraApp:
+ autofocus
- captureOutput:didOutputSampleBuffer:fromConnection:
- faceRectangle
- hasFlash
- flashMode
- setFlashMode:
- videoZoomFactor
- setVideoZoomFactor:
- rampToVideoZoomFactor:withRate:
- cancelVideoZoomRamp
- captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections:error:
- captureOutput:didStartRecordingToOutputFileAtURL:fromConnections:
- captureOutput:didDropSampleBuffer:fromConnection:
- captureOutput:didOutputMetadataObjects:fromConnection:
- isReady
- _applicationSuspended:
- _serverDied:
- dealloc
- currentDevice
- setDelegate:
- init
- delegate
- observeValueForKeyPath:ofObject:change:context:
- accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:
- _applicationDidBecomeActive:
- startVideoCapture
- stopVideoCapture
- cameraDevice
- setCameraDevice:
- _applicationDidEnterBackground:
- _applicationWillEnterForeground:
- startPreview
- pausePreview
- stopPreview
- mogulFrameRate
- _synchronizeHDRSettings
- _callStateDidChange:
- _updateCallStatus
- _updateSupportedCameraModes
- postOrientationChangedNotification:force:
- _setPreviewLayerEnabledForRenderer:
- _setVideoDataOutputEnabledForRenderer:
- _debug_teardownDispatchTimer
- _destroyCamera
- _setLocationEnabled:
- setPostSessionSetupBlock:
- _teardownDelaySuspendTimer
- _inCallStatusChanged:
- _isVideoMode:
- _setCameraMode:cameraDevice:
- _imageWriterQueueAvailabilityChanged
- _updateEffectsRendererMirroring
- _safeSetCameraMode:cameraDevice:
- currentOutput
- _setConfiguringCamera:
- _videoModeSessionPreset
- canCapturePhotoDuringRecording
- supportsAvalancheForDevice:
- _setEffectsAvailable:
- _setupPanoramaForDevice:output:options:
- _currentVideoConnection
- _cleanupPanoramaOnSessionQueue:
- _setFaceDetectionEnabled:forCaptureDevice:captureOutput:
- setCurrentOutput:
- setCurrentInput:
- _updateEffectsVideoDataOutputEnabled
- _updatePreviewLayerEnabled
- _setModeChangeWaitingForPreviewStarted:
- _setModeChangeWaitingForConfigureSession:
- _configureSessionWithCameraMode:cameraDevice:
- _updateEffectsRendererFilterIndexForceStateChange:renderNotifyBlock:
- effectsRenderer
- setCameraMode:
- enqueueBlockInCaptureSessionQueue:
- _notifyControllerModeDidChange
- _isModeChangeWaitingForPreviewStarted
- _isModeChangeWaitingForConfigureSession
- enqueueBlockOnMainQueue:
- _isAtomicModeChangeWaitingForPreviewStarted
- _setAtomicModeChangeWaitingForPreviewStarted:
- _isAtomicModeChangeWaitingForConfigureSession
- _setAtomicModeChangeWaitingForConfigureSession:
- cameraMode
- _jankyPreviewStartedWorkaround
- _previewStarted
- _debug_dispatchTimerQueue
- _debug_checkIris
- _debug_waitForIrisToOpen
- _mogulFormatFromDevice:
- supportsLiveEffects
- _setEffectsRenderer:
- _deviceStarted:
- _sessionStarted:
- _sessionStopped:
- _sessionRuntimeErrored:
- _wasInterrupted:
- _interruptionEnded:
- _movieFileRecordingCompleted:
- _inputPortFormatDescriptionDidChange:
- _focusHasChanged:
- postSessionSetupBlock
- _setDelaySuspend:
- _forceDelaySuspendTimeout
- _debug_cancelWaitForIris
- executeBlockOnMainQueue:
- _tearDownCamera
- setEffectFilterIndices:forceStateChange:
- _setupCamera
- previewLayer
- _startPreview:
- currentInput
- _setOrientationEventsEnabled:
- _modeUsesCompassHeading
- _delayIdleTimerByTimeInterval:
- _setFlashMode:force:
- isCapturingPanorama
- stopPanoramaCapture
- _resetIdleTimer
- isCapturingVideo
- _recoverFromServerError
- _isCountingHDREV0Captures
- captureOrientation
- _processCapturedPhotoWithDictionary:error:
- performAutofocusAfterCapture
- isChangingModes
- _sanityCheckSessionCanCaptureWithOutput:
- isFocusing
- isExposing
- _setOrientation
- supportsPreviewDuringHDR
- isHDREnabled
- _setOrientationForConnection:
- activeFilters
- _captureIsolationQueue
- _newFilteredSurfaceFromSurface:filters:
- _capturedPhotoWithDictionary:error:
- _removeVideoCaptureFileAndDirectoryAtPath:
- _verifyVideoConsolidationForVideoAtPath:outUserInfo:
- setFaceDetectionEnabled:
- hasInheritedForegroundState
- canCaptureVideo
- _setVideoCapturePath:
- _videoMetadataArrayIncludingSensitiveProperties:
- lockFocusForRecording
- minimumVideoCaptureDuration
- canCapturePanorama
- lockFocusAndExposureForPano
- _panoramaDidStop
- _isConfiguringCamera
- _processSampleBuffer:
- _panoramaDidReceiveIssueWithPanoramaString:
- _cancelDelayedFocusRequests
- _lockCurrentDeviceForConfiguration
- _unlockCurrentDeviceForConfiguration
- _autofocus:autoExpose:
- performingTimedCapture
- _autofocusAfterCapture
- flashWillFire
- _lockFocus:lockExposure:lockWhiteBalance:
- userInitiatedLockFocus
- _commonFocusFinished
- _focusOperationFinished
- _autofocusOperationFinished
- _lockedFocusOperationFinished
- _faceMetadataDidChange:
- _focusStarted
- _focusCompleted
- _exposureStarted
- _exposureCompleted
- _whiteBalanceStarted
- _whiteBalanceCompleted
- _flashStateChanged
- _torchLevelChanged
- _updateTorchAvailability
- _faceRectangleChanged
- _willTakePhoto
- _didTakePhoto
- supportsHDRForDevice:
- supportsHDR
- accelerometer:didChangeDeviceOrientation:
- minimumZoomFactorForDevice:
- maximumZoomFactorForDevice:
- _limitZoomFactor:forDevice:
- supportsVideoCapture
- supportsPanorama
- _setSupportedCameraModes:
- _activeFilterIndex
- _effectsAvailable
- effectFilterIndexForMode:
- _effectFilterIndexQueue
- _effectFilterIndices
- _sanitizeEffectFilterIndex:forMode:
- _setEffectFilterIndices:
- _notifyEffectFilterIndexChanged
- _atomicEffectsAvailable
- _setAtomicEffectsAvailable:
- _setPerformingTimedCapture:
- lockFocusForTimedCapture
- _setPreviewPaused:
- _isPreviewPaused
- _previewLayerEnabledForRenderer
- _videoDataOutputEnabledForRenderer
- cameraEffectsRendererDidStartPreview:
- cameraEffectsRenderer:requestsPreviewLayerEnabled:
- cameraEffectsRenderer:requestsVideoDataOutputEnabled:
- cameraEffectsRenderer:willTransitionToShowGrid:
- cameraEffectsRenderer:didStartTransitionToShowGrid:animated:
- cameraEffectsRenderer:didFinishTransitionToShowGrid:
- inCall
- captureIOSurface
- releaseIOSurface
- _setDefaultPrewarmDate:
- hasFrontCamera
- hasRearCamera
- setConvertSampleBufferToJPEG:
- convertSampleBufferToJPEG
- _didSendPreviewStartedCallbackToEmptyDelegate
- _startPreviewWithCameraDevice:cameraMode:effectFilterIndices:
- startPreview:
- previewOrientation
- setPreviewOrientation:
- isPreviewMirrored
- _clearPreviewLayer
- canCapturePhoto
- imageWriterQueueIsAvailable
- capturePhoto
- videoCapturePath
- setVideoCaptureQuality:
- setVideoCaptureMaximumDuration:
- setPanoramaImageQueueLayer:
- startPanoramaCapture
- panoramaProcessorOutputCallbackWithStatus:buffer:
- setPanoramaCaptureDirection:
- _panoramaDidReceiveStatusNotificationString:
- _panoramaDidReceiveWarningNotificationString:
- _panoramaDidReceiveErrorNotificationString:
- _panoShouldEnd
- isFocusAllowed
- canFocusAtPoint
- focusAtAdjustedPoint:
- smoothFocusAtCenter
- currentFocusMode
- restartAutoFocus
- _pptTestSetAutofocusDisabled:
- canLockFocus
- isFocusLockSupported
- isExposureLockSupported
- setFocusDisabled:
- isFocusingOnFace
- isTorchOn
- isTorchDisabled
- setHDREnabled:
- cameraOrientation
- setEffectFilterIndex:forMode:
- effectFilterIndices
- currentMinFrameDuration
- currentMaxFrameDuration
- startTimedCapture
- continueTimedCapture
- finishTimedCapture
- recentFaceMetadata
- resumePreview
- currentSession
- setCurrentDevice:
- imageOutput
- panoramaPreviewScale
- panoramaPreviewSize
- cleanAperture
- setCaptureOrientation:
- supportedCameraModes
- disableAllPreviewSuspensionDuringCapture
- setDisableAllPreviewSuspensionDuringCapture:
- _wasStillImageStabilzationOnBeforeTimedCapture
- _currentFaceMetadata
- isCameraApp
- setIsCameraApp:
- autofocus
@end
