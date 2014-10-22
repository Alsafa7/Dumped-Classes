@interface AVFigAssetTrackInspector : AVAssetTrackInspector
{
	pointer _figAsset;
	pointer _figAssetTrack;
	pointer _loadingMutex;
	pointer _validationMutex;
	pointer _playabilityValidationSemaphore;
	id _completionHandlerQueue;
	long long _playableStatus;
	int _playableResult;
	int _playabilityValidationResult;
	BOOL _playable;
	id _loadingBatches;
	id _weakReferenceToAsset;
}

@end
