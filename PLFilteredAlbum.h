@interface PLFilteredAlbum : NSObject
{
	id _indexMapper;
	id _filteredIndexes;
	BOOL _backingAlbumSupportsEdits;
	BOOL _backingAlbumSupportsCloudShared;
	id _weak_assets;
	BOOL isObservingContextChanges;
	int filter;
	pointer _backingAlbum;
	id predicate;
	id _filterParameters;
}

+ dealloc
+ count
+ description
+ isEmpty
+ setFilter:
+ name
+ title
+ setPredicate:
+ kind
+ predicate
+ localizedTitle
+ isCameraAlbum
+ kindValue
+ isCloudSharedAlbum
+ localizedSharedByLabelAllowsEmail:
+ cloudOwnerDisplayNameIncludingEmail:allowsEmail:
+ updateCloudLastInterestingChangeDateWithDate:
+ updateCloudLastContributionDateWithDate:
+ getUnseenStartMarkerIndex:count:showsProgress:
+ userDeleteSubscriberRecord:
+ cloudGUID
+ setCloudGUID:
+ cloudMetadata
+ setCloudMetadata:
+ cloudOwnerFirstName
+ setCloudOwnerFirstName:
+ cloudOwnerLastName
+ setCloudOwnerLastName:
+ cloudOwnerFullName
+ setCloudOwnerFullName:
+ cloudOwnerEmail
+ setCloudOwnerEmail:
+ cloudOwnerHashedPersonID
+ setCloudOwnerHashedPersonID:
+ cloudSubscriptionDate
+ setCloudSubscriptionDate:
+ publicURL
+ setPublicURL:
+ invitationRecords
+ setInvitationRecords:
+ unseenAssetsCount
+ setUnseenAssetsCount:
+ unseenAssetsCountIntegerValue
+ setUnseenAssetsCountIntegerValue:
+ cloudPublicURLEnabled
+ setCloudPublicURLEnabled:
+ cloudPublicURLEnabledLocal
+ setCloudPublicURLEnabledLocal:
+ cloudMultipleContributorsEnabled
+ setCloudMultipleContributorsEnabled:
+ cloudMultipleContributorsEnabledLocal
+ setCloudMultipleContributorsEnabledLocal:
+ cloudLastInterestingChangeDate
+ setCloudLastInterestingChangeDate:
+ cloudCreationDate
+ setCloudCreationDate:
+ cloudLastContributionDate
+ setCloudLastContributionDate:
+ cloudPersonID
+ setCloudPersonID:
+ cloudRelationshipStateValue
+ cloudRelationshipStateLocalValue
+ localizedSharedWithLabel
+ cloudAlbumSubscriberRecords
+ cloudFirstRecentBatchDate
+ cloudNotificationsEnabled
+ setCloudNotificationsEnabled:
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
+ insertInternalUserEditableAssets:atIndexes:trimmedVideoPathInfo:commentText:
+ userEditableAssets
+ filterParameters
+ backingAlbum
+ initWithBackingAlbum:filter:parameters:
+ setBackingAlbum:
+ set_assets:
+ _assets
+ filteredIndexes
+ _cloudSharedBackingAlbum
+ setIsObservingContextChanges:
+ backingContextDidChange:
+ _editableBackingAlbum
+ shouldIncludeObjectAtIndex:
+ mappedDataSourceChanged:remoteNotificationData:
+ derivedChangeNotificationClass
+ currentStateForChange
+ cachedIndexMapState
+ indexMapper
+ countOfFilteredAssets
+ indexInFilteredAssetsOfObject:
+ objectInFilteredAssetsAtIndex:
+ filteredAssetsAtIndexes:
+ getFilteredAssets:range:
+ insertObject:inFilteredAssetsAtIndex:
+ removeObjectFromFilteredAssetsAtIndex:
+ insertFilteredAssets:atIndexes:
+ removeFilteredAssetsAtIndexes:
+ replaceObjectInFilteredAssetsAtIndex:withObject:
+ replaceFilteredAssetsAtIndexes:withFilteredValues:
+ isObservingContextChanges
+ filter
- dealloc
- count
- description
- isEmpty
- setFilter:
- name
- title
- setPredicate:
- kind
- predicate
- localizedTitle
- isCameraAlbum
- kindValue
- isCloudSharedAlbum
- localizedSharedByLabelAllowsEmail:
- cloudOwnerDisplayNameIncludingEmail:allowsEmail:
- updateCloudLastInterestingChangeDateWithDate:
- updateCloudLastContributionDateWithDate:
- getUnseenStartMarkerIndex:count:showsProgress:
- userDeleteSubscriberRecord:
- cloudGUID
- setCloudGUID:
- cloudMetadata
- setCloudMetadata:
- cloudOwnerFirstName
- setCloudOwnerFirstName:
- cloudOwnerLastName
- setCloudOwnerLastName:
- cloudOwnerFullName
- setCloudOwnerFullName:
- cloudOwnerEmail
- setCloudOwnerEmail:
- cloudOwnerHashedPersonID
- setCloudOwnerHashedPersonID:
- cloudSubscriptionDate
- setCloudSubscriptionDate:
- publicURL
- setPublicURL:
- invitationRecords
- setInvitationRecords:
- unseenAssetsCount
- setUnseenAssetsCount:
- unseenAssetsCountIntegerValue
- setUnseenAssetsCountIntegerValue:
- cloudPublicURLEnabled
- setCloudPublicURLEnabled:
- cloudPublicURLEnabledLocal
- setCloudPublicURLEnabledLocal:
- cloudMultipleContributorsEnabled
- setCloudMultipleContributorsEnabled:
- cloudMultipleContributorsEnabledLocal
- setCloudMultipleContributorsEnabledLocal:
- cloudLastInterestingChangeDate
- setCloudLastInterestingChangeDate:
- cloudCreationDate
- setCloudCreationDate:
- cloudLastContributionDate
- setCloudLastContributionDate:
- cloudPersonID
- setCloudPersonID:
- cloudRelationshipStateValue
- cloudRelationshipStateLocalValue
- localizedSharedWithLabel
- cloudAlbumSubscriberRecords
- cloudFirstRecentBatchDate
- cloudNotificationsEnabled
- setCloudNotificationsEnabled:
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
- insertInternalUserEditableAssets:atIndexes:trimmedVideoPathInfo:commentText:
- userEditableAssets
- filterParameters
- backingAlbum
- initWithBackingAlbum:filter:parameters:
- setBackingAlbum:
- set_assets:
- _assets
- filteredIndexes
- _cloudSharedBackingAlbum
- setIsObservingContextChanges:
- backingContextDidChange:
- _editableBackingAlbum
- shouldIncludeObjectAtIndex:
- mappedDataSourceChanged:remoteNotificationData:
- derivedChangeNotificationClass
- currentStateForChange
- cachedIndexMapState
- indexMapper
- countOfFilteredAssets
- indexInFilteredAssetsOfObject:
- objectInFilteredAssetsAtIndex:
- filteredAssetsAtIndexes:
- getFilteredAssets:range:
- insertObject:inFilteredAssetsAtIndex:
- removeObjectFromFilteredAssetsAtIndex:
- insertFilteredAssets:atIndexes:
- removeFilteredAssetsAtIndexes:
- replaceObjectInFilteredAssetsAtIndex:withObject:
- replaceFilteredAssetsAtIndexes:withFilteredValues:
- isObservingContextChanges
- filter
@end
