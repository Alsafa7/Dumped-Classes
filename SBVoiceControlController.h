@interface SBVoiceControlController : NSObject
{
	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
}

+ configureVoiceControl
+ preheatForMenuButtonWithFireDate:
+ handleHomeButtonHeld
+ headsetAvailabilityChanged
+ handleHeadsetButtonDownWithClickCount:
+ handleHeadsetButtonUp
+ handleHeadsetButtonUpNotInCall
+ bluetoothDeviceInitiatedVoiceControl:
+ bluetoothDeviceEndedVoiceControl:
+ _updateNextRecognitionAudioInputPaths:
+ _assistantActivationSettingsDidChange:
+ _performDelayedHeadsetActionForAssistant
+ _performDelayedHeadsetActionForVoiceControl
+ _prepareDelayedHeadsetAction
+ _cancelDelayedHeadsetAction
+ init
+ _spokenLanguageDidChange:
- configureVoiceControl
- preheatForMenuButtonWithFireDate:
- handleHomeButtonHeld
- headsetAvailabilityChanged
- handleHeadsetButtonDownWithClickCount:
- handleHeadsetButtonUp
- handleHeadsetButtonUpNotInCall
- bluetoothDeviceInitiatedVoiceControl:
- bluetoothDeviceEndedVoiceControl:
- _updateNextRecognitionAudioInputPaths:
- _assistantActivationSettingsDidChange:
- _performDelayedHeadsetActionForAssistant
- _performDelayedHeadsetActionForVoiceControl
- _prepareDelayedHeadsetAction
- _cancelDelayedHeadsetAction
- init
- _spokenLanguageDidChange:
@end
