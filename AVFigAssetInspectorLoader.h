@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader
{
	id _weakReferenceToAsset;
	id _initializationOptions;
	pointer _figAsset;
	int _figAssetCreationStatus;
	id _assetInspector;
	long long _assetInspectorOnce;
	id _completionHandlerQueue;
	pointer _loadingMutex;
	pointer _playabilityMutex;
	pointer _savedPhotosAlbumValidationMutex;
	pointer _playabilityValidationSemaphore;
	long long _playableStatus;
	int _playableResult;
	BOOL _playable;
	pointer _cameraRollValidationSemaphore;
	long long _compatibleWithSavedPhotosAlbumStatus;
	int _compatibleWithSavedPhotosAlbumResult;
	BOOL _compatibleWithSavedPhotosAlbum;
	id _loadingBatches;
	BOOL _loadingCanceled;
	id _assetCache;
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
	id _downloadDestinationURL;
	id _validationPlist;
	usigned long long _referenceRestrictions;
	id _URL;
	BOOL _shouldOptimizeAccessForLinearMoviePlayback;
}

@end
