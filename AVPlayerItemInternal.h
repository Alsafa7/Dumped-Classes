@interface AVPlayerItemInternal : NSObject
{
	id weakReference;
	id previousItem;
	id nextItem;
	pointer figPlaybackItem;
	pointer figCPEProtector;
	pointer figTimebase;
	id delegate;
	id playerReference;
	id playerConnection;
	BOOL isCurrentPlayerItem;
	id stateDispatchQueue;
	id propertyStorage;
	long long status;
	id error;
	id URL;
	id asset;
	id automaticallyLoadedAssetKeys;
	id assetWithFigPlaybackItem;
	id trackIDsForAssetWithFigPlaybackItem;
	id syncLayersQ;
	id syncLayers;
	id timedMetadata;
	struct initialTime;
	struct initialToleranceBefore;
	struct initialToleranceAfter;
	struct forwardPlaybackEndTime;
	struct reversePlaybackEndTime;
	id initialDate;
	id initialEstimatedDate;
	BOOL initialLimitReadAhead;
	long long initialPlaybackLikelyToKeepUpTrigger;
	BOOL initialAlwaysMonitorsPlayability;
	BOOL initialWillNeverSeekBackwardsHint;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	double initialBufferingTargetMinimum;
	double initialBufferingTargetMaximum;
	pointer initialFigTimePitchAlgorithm;
	BOOL savesDownloadedDataToDiskWhenDone;
	BOOL nonForcedSubtitlesEnabled;
	BOOL networkUsuallyExceedsMaxBitRate;
	BOOL allowProgressiveSwitchUp;
	float maximumBitRate;
	id audioMix;
	id videoComposition;
	pointer figVideoCompositor;
	id customVideoCompositorSession;
	BOOL seekingWaitsForVideoCompositionRendering;
	id textStyleRules;
	id gaplessInfo;
	long long initialVariantIndex;
	id audibleDRMInfo;
	id rampInOutInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	id handlersToCallWhenReadyForEnqueueing;
	id mediaOptionsSelectedByClient;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	BOOL didBecomeReadyForBasicInspection;
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didBecomeReadyForInspectionOfDuration;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	BOOL didApplyInitialAudioMix;
	BOOL wasInitializedWithURL;
	BOOL needTimedMetadataNotification;
	BOOL externalSubtitlesEnabled;
	BOOL externalProtectionRequested;
	BOOL requiresAccessLog;
	int eqPreset;
	pointer seekIDMutex;
	int nextSeekIDToGenerate;
	int pendingSeekID;
	id seekCompletionHandler;
	id dataYouTubeID;
	id itemOutputs;
	id itemVideoOutputs;
	id itemLegibleOutputs;
	id serviceIdentifier;
	id mediaKind;
	usigned long long restrictions;
}

@end
