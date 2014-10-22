@interface MPRadioOperationQueue : NSObject
{
	id _assetCache;
	id _deferredOperations;
	id _inflightAssetLoads;
	id _operationQueue;
	id _playbackOperation;
	id _requestContext;
	id _serialQueue;
	id _warmAssetCache;
}

+ assetCache
+ loadAssetForItem:withCompletionBlock:
+ addStationWithRequest:completionBlock:
+ getTracksWithRequest:completionBlock:
+ loadRadioConfigurationWithCompletionBlock:
+ sendPlayEvents:forStationHash:stationID:completionBlock:
+ _storeBagDidLoadNotification:
+ _addOperation:
+ _finishAssetLoadWithKey:asset:error:
+ _warmAssetForStation:trackStoreID:
+ _popAssetLoadBlocksWithKey:asset:error:
+ _finishAssetWarmWithKey:asset:error:
+ cancelPlaybackPreparation
+ preparePlaybackForStation:withCompletionBlock:
+ dealloc
+ init
+ .cxx_destruct
- assetCache
- loadAssetForItem:withCompletionBlock:
- addStationWithRequest:completionBlock:
- getTracksWithRequest:completionBlock:
- loadRadioConfigurationWithCompletionBlock:
- sendPlayEvents:forStationHash:stationID:completionBlock:
- _storeBagDidLoadNotification:
- _addOperation:
- _finishAssetLoadWithKey:asset:error:
- _warmAssetForStation:trackStoreID:
- _popAssetLoadBlocksWithKey:asset:error:
- _finishAssetWarmWithKey:asset:error:
- cancelPlaybackPreparation
- preparePlaybackForStation:withCompletionBlock:
- dealloc
- init
- .cxx_destruct
@end
