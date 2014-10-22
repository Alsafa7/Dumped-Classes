@interface ALAssetsLibrary : NSObject
{
	id _internal;
}

+ _writeImageToSavedPhotosAlbum:orientation:imageData:metadata:internalProperties:completionBlock:
+ _writeVideoAtPathToSavedPhotosAlbum:internalProperties:completionBlock:
+ publicErrorForPrivateDomain:withPrivateCode:
+ publicErrorFromPrivateError:
+ _performBlock:
+ registerAlbum:assetGroupPrivate:
+ _libraryIsAvailable
+ _addGroupForAlbum:ofType:toArray:
+ _addGroupListForContainerList:ofType:toArray:
+ _copyGroupForURL:
+ enumerateGroupsWithTypes:usingBlock:failureBlock:
+ writeImageToSavedPhotosAlbum:orientation:completionBlock:
+ writeImageToSavedPhotosAlbum:metadata:completionBlock:
+ writeVideoAtPathToSavedPhotosAlbum:completionBlock:
+ videoAtPathIsCompatibleWithSavedPhotosAlbum:
+ groupForURL:resultBlock:failureBlock:
+ addAssetsGroupAlbumWithName:resultBlock:failureBlock:
+ deleteAssetForURL:completionBlock:
+ assetsGroupsRelatedToAssetsGroup:
+ setInternal:
+ internal
+ dealloc
+ init
+ isValid
+ assetForURL:resultBlock:failureBlock:
+ writeImageDataToSavedPhotosAlbum:metadata:completionBlock:
+ hasCompletedRestorePostProcessing
+ _performBlockAndWait:
- _writeImageToSavedPhotosAlbum:orientation:imageData:metadata:internalProperties:completionBlock:
- _writeVideoAtPathToSavedPhotosAlbum:internalProperties:completionBlock:
- publicErrorForPrivateDomain:withPrivateCode:
- publicErrorFromPrivateError:
- _performBlock:
- registerAlbum:assetGroupPrivate:
- _libraryIsAvailable
- _addGroupForAlbum:ofType:toArray:
- _addGroupListForContainerList:ofType:toArray:
- _copyGroupForURL:
- enumerateGroupsWithTypes:usingBlock:failureBlock:
- writeImageToSavedPhotosAlbum:orientation:completionBlock:
- writeImageToSavedPhotosAlbum:metadata:completionBlock:
- writeVideoAtPathToSavedPhotosAlbum:completionBlock:
- videoAtPathIsCompatibleWithSavedPhotosAlbum:
- groupForURL:resultBlock:failureBlock:
- addAssetsGroupAlbumWithName:resultBlock:failureBlock:
- deleteAssetForURL:completionBlock:
- assetsGroupsRelatedToAssetsGroup:
- setInternal:
- internal
- dealloc
- init
- isValid
- assetForURL:resultBlock:failureBlock:
- writeImageDataToSavedPhotosAlbum:metadata:completionBlock:
- hasCompletedRestorePostProcessing
- _performBlockAndWait:
@end
