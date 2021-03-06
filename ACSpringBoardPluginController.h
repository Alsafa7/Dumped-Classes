@interface ACSpringBoardPluginController : SBUIPluginController
{
	BOOL _proxForGestureEnabled;
	BOOL _waitingForUserEvent;
	BOOL _springBoardIdleTimerDisabled;
	BOOL _startGuidedAccessOnDismissal;
	BOOL _waitingForTelephonyToStart;
	id _language;
	id _educationAlertManager;
	id _bulletinManager;
	id _heater;
	id _siriViewController;
	id _presentationIdentifier;
	long long _lastSpeechEvent;
	id _testInputQueue;
	id _bluetoothDevice;
	id _motionGestureManager;
	double _preparationTimestamp;
	double _lastDismissalTimestamp;
	id _dismissalDialogPhase;
}

+ _lockStateDidChange:
+ _language
+ _heater
+ _lockState
+ _wasDismissed
+ _testInputQueue
+ _hasTestInput
+ _sbUserEvent:
+ _setPresentationIdentifier:
+ _setProxForGestureEnabled:
+ _setBluetoothDevice:
+ heaterSuggestsDefrosting:
+ heaterSuggestsPreheating:
+ _updateLanguageCode
+ _proximityDidChange:
+ _applicationURLWillOpen:
+ _testingStringsDidChange:
+ _updateMotionGestureListening
+ _supportsActivationEvent:
+ _intervalForActivationEvent:
+ _setPreparationTimestamp:
+ _presentationIsEyesFree
+ _siriViewController
+ _setSiriViewController:
+ _presentationIdentifier
+ _preparationTimestamp
+ _lastDismissalTimestamp
+ _dismissalDialogPhase
+ _startRequestWithOptions:
+ _updateExpectsFaceContact
+ _cancelPendingPhoneCall
+ _requestDismissal
+ _setLastDismissalTimestamp:
+ _setDismissalDialogPhase:
+ _isWaitingForTelephonyToStart
+ _endBTVoiceSession
+ _startGuidedAccessOnDismissal
+ _bluetoothDevice
+ _setWaitingForTelephonyToStart:
+ _applicationURLDidOpen:
+ _displayDidLaunch:
+ _activeCallStateDidChange:
+ _telephonyHasStarted
+ _applicationDidLaunch
+ _dequeueAllTestInputs
+ _enqueueTestInput:
+ _deletePersistedConversation
+ _activationSettingsDidChange
+ setWaitingForUserEvent:
+ _isWaitingForUserEvent
+ _bulletinManager
+ _dequeueTestInput
+ _isProxForGestureEnabled
+ _motionGestureManager
+ _setMotionGestureManager:
+ _passcodeLockStateDidChange
+ _educationAlertManager
+ _lastSpeechEvent
+ _setLastSpeechEvent:
+ _isSpringBoardIdleTimerDisabled
+ bulletinManagerDidChangeBulletins:
+ _testingAudioInputPathsDidChange:
+ _setStartGuidedAccessOnDismissal:
+ _sendTelephonyHasStartedAfterDelay:
+ _setSpringBoardIdleTimerDisabled:
+ _beginListeningForAssistantActivationGesture
+ _stopListeningForAssistantActivationGesture
+ _wantsToActivateWithActivationEvent:
+ dealloc
+ init
+ _preferencesDidChange:
+ siriLanguageSpokenLanguageCodeDidChange:
+ siriViewController:didEncounterUnexpectedError:
+ siriViewControllerDidChangeVisibility:
+ siriViewController:bulletinWithIdentifier:
+ lockStateForSiriViewController:
+ dismissSiriViewController:
+ startGuidedAccessForSiriViewController:
+ siriViewControllerDidFinishRequest:
+ userRelevantEventDidOccurInSiriViewController:
+ siriViewController:launchApplicationWithBundleIdentifier:withURL:
+ notifyOnNextUserInteractionForSiriViewController:
+ siriViewController:siriIdleAndQuietStatusDidChange:
+ siriViewController:didReadBulletinWithIdentifier:
+ siriViewController:openURL:
+ siriViewController:willStartRequestWithOptions:
+ siriViewControllerShouldEndSession:
+ siriViewController:attemptUnlockWithPassword:
+ bulletinsForSiriViewController:
+ siriViewControllerDidChangeListeningState:
+ supportedAndEnabled
+ wantsActivationEvent:interval:
+ prepareForActivationEvent:afterInterval:
+ cancelPendingActivationEvent:
+ handleActivationEvent:context:
+ handledPasscodeUnlockWithCompletion:
+ handledMenuButtonDownEvent
+ handledMenuButtonTap
+ handleBluetoothDismissal
+ handledWiredMicButtonTap
+ viewControllerForActivationContext:
+ .cxx_destruct
- _lockStateDidChange:
- _language
- _heater
- _lockState
- _wasDismissed
- _testInputQueue
- _hasTestInput
- _sbUserEvent:
- _setPresentationIdentifier:
- _setProxForGestureEnabled:
- _setBluetoothDevice:
- heaterSuggestsDefrosting:
- heaterSuggestsPreheating:
- _updateLanguageCode
- _proximityDidChange:
- _applicationURLWillOpen:
- _testingStringsDidChange:
- _updateMotionGestureListening
- _supportsActivationEvent:
- _intervalForActivationEvent:
- _setPreparationTimestamp:
- _presentationIsEyesFree
- _siriViewController
- _setSiriViewController:
- _presentationIdentifier
- _preparationTimestamp
- _lastDismissalTimestamp
- _dismissalDialogPhase
- _startRequestWithOptions:
- _updateExpectsFaceContact
- _cancelPendingPhoneCall
- _requestDismissal
- _setLastDismissalTimestamp:
- _setDismissalDialogPhase:
- _isWaitingForTelephonyToStart
- _endBTVoiceSession
- _startGuidedAccessOnDismissal
- _bluetoothDevice
- _setWaitingForTelephonyToStart:
- _applicationURLDidOpen:
- _displayDidLaunch:
- _activeCallStateDidChange:
- _telephonyHasStarted
- _applicationDidLaunch
- _dequeueAllTestInputs
- _enqueueTestInput:
- _deletePersistedConversation
- _activationSettingsDidChange
- setWaitingForUserEvent:
- _isWaitingForUserEvent
- _bulletinManager
- _dequeueTestInput
- _isProxForGestureEnabled
- _motionGestureManager
- _setMotionGestureManager:
- _passcodeLockStateDidChange
- _educationAlertManager
- _lastSpeechEvent
- _setLastSpeechEvent:
- _isSpringBoardIdleTimerDisabled
- bulletinManagerDidChangeBulletins:
- _testingAudioInputPathsDidChange:
- _setStartGuidedAccessOnDismissal:
- _sendTelephonyHasStartedAfterDelay:
- _setSpringBoardIdleTimerDisabled:
- _beginListeningForAssistantActivationGesture
- _stopListeningForAssistantActivationGesture
- _wantsToActivateWithActivationEvent:
- dealloc
- init
- _preferencesDidChange:
- siriLanguageSpokenLanguageCodeDidChange:
- siriViewController:didEncounterUnexpectedError:
- siriViewControllerDidChangeVisibility:
- siriViewController:bulletinWithIdentifier:
- lockStateForSiriViewController:
- dismissSiriViewController:
- startGuidedAccessForSiriViewController:
- siriViewControllerDidFinishRequest:
- userRelevantEventDidOccurInSiriViewController:
- siriViewController:launchApplicationWithBundleIdentifier:withURL:
- notifyOnNextUserInteractionForSiriViewController:
- siriViewController:siriIdleAndQuietStatusDidChange:
- siriViewController:didReadBulletinWithIdentifier:
- siriViewController:openURL:
- siriViewController:willStartRequestWithOptions:
- siriViewControllerShouldEndSession:
- siriViewController:attemptUnlockWithPassword:
- bulletinsForSiriViewController:
- siriViewControllerDidChangeListeningState:
- supportedAndEnabled
- wantsActivationEvent:interval:
- prepareForActivationEvent:afterInterval:
- cancelPendingActivationEvent:
- handleActivationEvent:context:
- handledPasscodeUnlockWithCompletion:
- handledMenuButtonDownEvent
- handledMenuButtonTap
- handleBluetoothDismissal
- handledWiredMicButtonTap
- viewControllerForActivationContext:
- .cxx_destruct
@end
