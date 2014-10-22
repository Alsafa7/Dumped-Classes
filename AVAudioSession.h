@interface AVAudioSession : NSObject
{
	pointer _impl;
}

+ inputNumberOfChannels
+ setActive:withFlags:error:
+ setPreferredHardwareSampleRate:error:
+ preferredHardwareSampleRate
+ inputIsAvailable
+ currentHardwareSampleRate
+ currentHardwareInputNumberOfChannels
+ currentHardwareOutputNumberOfChannels
+ privateMarkKVOPropertiesDirty:
+ privateSetPropertyValue:withBool:error:
+ setActive:withOptions:error:
+ privateUpdateInputGain:
+ privateGetDataSources:
+ privateGetSelectedDataSource:
+ privateConfigureRouteDescription:
+ privateRefreshAvailableInputs
+ isInputAvailable
+ preferredSampleRate
+ privateUpdateOutputVolume:
+ privateUpdateDataSources:forInput:
+ privateUpdatePromptStyle:
+ privateUpdateAudioFormats:
+ privateUpdateAudioFormat:
+ requestRecordPermission:
+ setPreferredInputNumberOfChannels:error:
+ setPreferredOutputNumberOfChannels:error:
+ setInputGain:error:
+ setInputDataSource:error:
+ setOutputDataSource:error:
+ outputVolume
+ audioFormat
+ isEarpieceActiveNoiseCancelationEnabled
+ allowAllBuiltInDataSources
+ setAllowAllBuiltInDataSources:
+ inputGain
+ privateGetImplementation
+ inputDataSources
+ inputDataSource
+ outputDataSources
+ outputDataSource
+ isInputGainSettable
+ isOtherAudioPlaying
+ preferredInputNumberOfChannels
+ preferredOutputNumberOfChannels
+ maximumInputNumberOfChannels
+ maximumOutputNumberOfChannels
+ overrideOutputAudioPort:error:
+ setPreferredInput:error:
+ preferredInput
+ availableInputs
+ setActivationContext:error:
+ setDefaultChatMode:error:
+ setIAmTheAssistant:error:
+ privateInputIsAvailableChanged:
+ privateBeginInterruption
+ privateEndInterruptionWithFlags:
+ privateHandleInputGainChange:
+ privateHandleOutputVolumeChange:
+ privateHandleInputDataSourcesChange:
+ privateHandleOutputDataSourcesChange:
+ privateHandlePromptStyleChange:
+ privateHandleFormatsChange:
+ privateHandleFormatChange:
+ privateHandleServerDied
+ privateUpdateInputChannelCount:
+ privateUpdateOutputChannelCount:
+ silenceOutput:error:
+ audioFormats
+ setMode:error:
+ forceSoundCheck
+ setForceSoundCheck:error:
+ release
+ retain
+ setDelegate:
+ init
+ autorelease
+ retainCount
+ delegate
+ copyWithZone:
+ mode
+ category
+ promptStyle
+ setPreferredSampleRate:error:
+ categoryOptions
+ setCategory:withOptions:error:
+ outputLatency
+ inputLatency
+ IOBufferDuration
+ currentRoute
+ opaqueSessionID
+ setCategory:error:
+ sampleRate
+ outputNumberOfChannels
+ setActive:error:
+ preferredIOBufferDuration
+ setPreferredIOBufferDuration:error:
- inputNumberOfChannels
- setActive:withFlags:error:
- setPreferredHardwareSampleRate:error:
- preferredHardwareSampleRate
- inputIsAvailable
- currentHardwareSampleRate
- currentHardwareInputNumberOfChannels
- currentHardwareOutputNumberOfChannels
- privateMarkKVOPropertiesDirty:
- privateSetPropertyValue:withBool:error:
- setActive:withOptions:error:
- privateUpdateInputGain:
- privateGetDataSources:
- privateGetSelectedDataSource:
- privateConfigureRouteDescription:
- privateRefreshAvailableInputs
- isInputAvailable
- preferredSampleRate
- privateUpdateOutputVolume:
- privateUpdateDataSources:forInput:
- privateUpdatePromptStyle:
- privateUpdateAudioFormats:
- privateUpdateAudioFormat:
- requestRecordPermission:
- setPreferredInputNumberOfChannels:error:
- setPreferredOutputNumberOfChannels:error:
- setInputGain:error:
- setInputDataSource:error:
- setOutputDataSource:error:
- outputVolume
- audioFormat
- isEarpieceActiveNoiseCancelationEnabled
- allowAllBuiltInDataSources
- setAllowAllBuiltInDataSources:
- inputGain
- privateGetImplementation
- inputDataSources
- inputDataSource
- outputDataSources
- outputDataSource
- isInputGainSettable
- isOtherAudioPlaying
- preferredInputNumberOfChannels
- preferredOutputNumberOfChannels
- maximumInputNumberOfChannels
- maximumOutputNumberOfChannels
- overrideOutputAudioPort:error:
- setPreferredInput:error:
- preferredInput
- availableInputs
- setActivationContext:error:
- setDefaultChatMode:error:
- setIAmTheAssistant:error:
- privateInputIsAvailableChanged:
- privateBeginInterruption
- privateEndInterruptionWithFlags:
- privateHandleInputGainChange:
- privateHandleOutputVolumeChange:
- privateHandleInputDataSourcesChange:
- privateHandleOutputDataSourcesChange:
- privateHandlePromptStyleChange:
- privateHandleFormatsChange:
- privateHandleFormatChange:
- privateHandleServerDied
- privateUpdateInputChannelCount:
- privateUpdateOutputChannelCount:
- silenceOutput:error:
- audioFormats
- setMode:error:
- forceSoundCheck
- setForceSoundCheck:error:
- release
- retain
- setDelegate:
- init
- autorelease
- retainCount
- delegate
- copyWithZone:
- mode
- category
- promptStyle
- setPreferredSampleRate:error:
- categoryOptions
- setCategory:withOptions:error:
- outputLatency
- inputLatency
- IOBufferDuration
- currentRoute
- opaqueSessionID
- setCategory:error:
- sampleRate
- outputNumberOfChannels
- setActive:error:
- preferredIOBufferDuration
- setPreferredIOBufferDuration:error:
@end
