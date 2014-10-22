@interface AVPlayerInternal : NSObject
{
	id weakReference;
	pointer figPlayer;
	pointer figMasterClock;
	id propertyStorage;
	id pixelBufferAttributeMediator;
	id pendingFigPlayerProperties;
	id expectedAssetTypes;
	id currentItem;
	id lastItem;
	pointer figPlaybackItemToIdentifyNextCurrentItem;
	id items;
	id layersQ;
	id caLayers;
	id externalPlaybackVideoGravity;
	long long status;
	id error;
	id stateDispatchQueue;
	id displaysUsedForPlayback;
	BOOL needsToCreateFigPlayer;
	BOOL logPerformanceData;
	id cachedFigMediaSelectionCriteriaProperty;
	BOOL reevaluateBackgroundPlayback;
	BOOL hostApplicationInForeground;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	BOOL iapdExtendedModeIsActive;
	id audioSessionMediaPlayerOnly;
	id vibrationPattern;
	pointer prerollIDMutex;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	id prerollCompletionHandler;
	id subtitleQueue;
	id currentSubtitlesPayload;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;
}

@end
