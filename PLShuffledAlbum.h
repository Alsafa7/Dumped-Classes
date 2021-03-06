@interface PLShuffledAlbum : NSObject
{
	pointer _toBackingMap;
	pointer _fromBackingMap;
	pointer _backingAlbum;
	id _startingAsset;
	id _assets;
}

+ countOfShuffledAssets
+ indexInShuffledAssetsOfObject:
+ objectInShuffledAssetsAtIndex:
+ insertObject:inShuffledAssetsAtIndex:
+ removeObjectFromShuffledAssetsAtIndex:
+ replaceObjectInShuffledAssetsAtIndex:withObject:
+ fromBackingMap
+ description
+ mappedDataSourceChanged:remoteNotificationData:
+ derivedChangeNotificationClass
+ cachedIndexMapState
+ createShuffledIndexesMapsIfNeeded
+ createShuffledIndexesMaps
+ backingAlbum
+ initWithBackingAlbum:startingAsset:
+ startingAsset
+ dealloc
+ count
+ init
+ isEmpty
+ name
+ title
+ kind
+ localizedTitle
+ isCameraAlbum
+ kindValue
+ isCloudSharedAlbum
+ titleForSectionStartingAtIndex:
+ displayableIndexesForCount:
+ reducePendingItemsCountBy:
+ batchFetchAssets:
+ mutableAssets
+ hasUnseenContentBoolValue
+ setHasUnseenContentBoolValue:
+ posterImage
+ isLibrary
+ isPanoramasAlbum
+ isWallpaperAlbum
+ isPhotoStreamAlbum
+ isPendingPhotoStreamAlbum
+ isStandInAlbum
+ isOwnedCloudSharedAlbum
+ isMultipleContributorCloudSharedAlbum
+ canContributeToCloudSharedAlbum
+ shouldDeleteWhenEmpty
+ slideshowSettings
+ setSlideshowSettings:
+ importSessionID
+ setImportSessionID:
+ groupURL
+ sortingComparator
+ sectioningComparator
+ pendingItemsCount
+ setPendingItemsCount:
+ pendingItemsType
+ setPendingItemsType:
+ canPerformEditOperation:
+ uuid
+ assets
+ approximateCount
+ assetsCount
+ photosCount
+ videosCount
+ keyAsset
+ setKeyAsset:
+ secondaryKeyAsset
+ setSecondaryKeyAsset:
+ tertiaryKeyAsset
+ setTertiaryKeyAsset:
+ canShowComments
+ canShowAvalancheStacks
+ localizedLocationNames
+ set_assets:
+ _assets
- countOfShuffledAssets
- indexInShuffledAssetsOfObject:
- objectInShuffledAssetsAtIndex:
- insertObject:inShuffledAssetsAtIndex:
- removeObjectFromShuffledAssetsAtIndex:
- replaceObjectInShuffledAssetsAtIndex:withObject:
- fromBackingMap
- description
- mappedDataSourceChanged:remoteNotificationData:
- derivedChangeNotificationClass
- cachedIndexMapState
- createShuffledIndexesMapsIfNeeded
- createShuffledIndexesMaps
- backingAlbum
- initWithBackingAlbum:startingAsset:
- startingAsset
- dealloc
- count
- init
- isEmpty
- name
- title
- kind
- localizedTitle
- isCameraAlbum
- kindValue
- isCloudSharedAlbum
- titleForSectionStartingAtIndex:
- displayableIndexesForCount:
- reducePendingItemsCountBy:
- batchFetchAssets:
- mutableAssets
- hasUnseenContentBoolValue
- setHasUnseenContentBoolValue:
- posterImage
- isLibrary
- isPanoramasAlbum
- isWallpaperAlbum
- isPhotoStreamAlbum
- isPendingPhotoStreamAlbum
- isStandInAlbum
- isOwnedCloudSharedAlbum
- isMultipleContributorCloudSharedAlbum
- canContributeToCloudSharedAlbum
- shouldDeleteWhenEmpty
- slideshowSettings
- setSlideshowSettings:
- importSessionID
- setImportSessionID:
- groupURL
- sortingComparator
- sectioningComparator
- pendingItemsCount
- setPendingItemsCount:
- pendingItemsType
- setPendingItemsType:
- canPerformEditOperation:
- uuid
- assets
- approximateCount
- assetsCount
- photosCount
- videosCount
- keyAsset
- setKeyAsset:
- secondaryKeyAsset
- setSecondaryKeyAsset:
- tertiaryKeyAsset
- setTertiaryKeyAsset:
- canShowComments
- canShowAvalancheStacks
- localizedLocationNames
- set_assets:
- _assets
@end
