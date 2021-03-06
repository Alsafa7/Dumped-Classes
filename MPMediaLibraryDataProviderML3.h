@interface MPMediaLibraryDataProviderML3 : NSObject
{
	id _uniqueIdentifier;
	id _backgroundTaskQueue;
	usigned long long _backgroundTask;
	usigned long long _backgroundTaskCount;
	BOOL _hasScheduledEventPosting;
	id _library;
	int _refreshState;
}

+ loadValueForAggregateFunction:onCollectionsForProperty:queryCriteria:completionBlock:
+ loadValueForAggregateFunction:onItemsForProperty:queryCriteria:completionBlock:
+ enumerateItemIdentifiersForQueryCriteria:ordered:cancelBlock:usingBlock:
+ enumerateCollectionIdentifiersForQueryCriteria:ordered:cancelBlock:usingBlock:
+ currentEntityRevision
+ playlistGeneration
+ writable
+ hasMediaOfType:
+ hasGeniusMixes
+ hasUbiquitousBookmarkableItems
+ itemPersistentIDForStoreID:
+ addPlaylistWithValuesForProperties:
+ removeItemsWithIdentifiers:count:hideFromPurchaseHistory:
+ removePlaylistWithIdentifier:
+ populateLocationPropertiesOfItemWithIdentifier:withPath:
+ preferredAudioLanguages
+ preferredSubtitleLanguages
+ performReadTransactionWithBlock:
+ syncValidity
+ itemExistsWithPersistentID:
+ playlistExistsWithPersistentID:
+ itemResultSetForQueryCriteria:
+ loadQueryCriteria:hasItemsWithCompletionBlock:
+ loadQueryCriteria:hasCollectionsWithCompletionBlock:
+ loadQueryCriteria:countOfItemsWithCompletionBlock:
+ loadQueryCriteria:countOfCollectionsWithCompletionBlock:
+ collectionResultSetForQueryCriteria:
+ setLibraryEntityFilterPredicatesWithCloudFilteringType:additionalFilterPredicates:
+ setLibraryContainerFilterPredicatesWithCloudFilteringType:additionalFilterPredicates:
+ enumerateEntityChangesAfterSyncAnchor:itemBlock:collectionBlock:
+ loadProperties:ofItemWithIdentifier:completionBlock:
+ setValue:forProperty:ofItemWithIdentifier:completionBlock:
+ loadBestArtworkImageDataForSize:ofItemWithIdentifier:atPlaybackTime:completionBlock:
+ loadProperties:ofCollectionWithIdentifier:groupingType:completionBlock:
+ setValue:forProperty:ofCollectionWithIdentifier:groupingType:completionBlock:
+ setValue:forProperty:ofPlaylistWithIdentifier:completionBlock:
+ addItemWithIdentifier:toPlaylistWithIdentifier:completionBlock:
+ addItemsWithIdentifiers:count:toPlaylistWithIdentifier:completionBlock:
+ removeItemsWithIdentifiers:atFilteredIndexes:inPlaylistWithIdentifier:completionBlock:
+ removeAllItemsInPlaylistWithIdentifier:
+ moveItemFromIndex:toIndex:inPlaylistWithIdentifier:completionBlock:
+ _libraryContentsDidChange:
+ _dynamicPropertiesDidChange:
+ _invisiblePropertiesDidChange:
+ _displayValuesDidChange:
+ _syncGenerationDidChange:
+ _libraryUIDDidChange:
+ _postEvents
+ performBackgroundTaskWithBlock:
+ adjustedValueForMPProperty:ofEntity:withDefaultValue:
+ _loadValueForAggregateFunction:entityClass:property:query:completionBlock:
+ _loadProperties:ofEntityWithIdentifier:ML3EntityClass:completionBlock:
+ ML3SystemFilterPredicatesWithGroupingType:cloudTrackFilteringType:additionalFilterPredicates:
+ systemFilterPredicatesWithGroupingType:cloudTrackFilteringType:
+ _dataProviderSupportsEntityChangeTracking
+ _coalesceEvents
+ _removeEntitiesWithIdentifiers:count:entityClass:
+ dealloc
+ name
+ uniqueIdentifier
+ initWithLibrary:
+ performTransactionWithBlock:
+ library
+ setLibrary:
+ isCurrentThreadInTransaction
+ syncGenerationID
+ localizedSectionIndexTitles
+ localizedSectionHeaderForSectionIndex:
+ databasePath
+ .cxx_destruct
+ lastModifiedDate
- loadValueForAggregateFunction:onCollectionsForProperty:queryCriteria:completionBlock:
- loadValueForAggregateFunction:onItemsForProperty:queryCriteria:completionBlock:
- enumerateItemIdentifiersForQueryCriteria:ordered:cancelBlock:usingBlock:
- enumerateCollectionIdentifiersForQueryCriteria:ordered:cancelBlock:usingBlock:
- currentEntityRevision
- playlistGeneration
- writable
- hasMediaOfType:
- hasGeniusMixes
- hasUbiquitousBookmarkableItems
- itemPersistentIDForStoreID:
- addPlaylistWithValuesForProperties:
- removeItemsWithIdentifiers:count:hideFromPurchaseHistory:
- removePlaylistWithIdentifier:
- populateLocationPropertiesOfItemWithIdentifier:withPath:
- preferredAudioLanguages
- preferredSubtitleLanguages
- performReadTransactionWithBlock:
- syncValidity
- itemExistsWithPersistentID:
- playlistExistsWithPersistentID:
- itemResultSetForQueryCriteria:
- loadQueryCriteria:hasItemsWithCompletionBlock:
- loadQueryCriteria:hasCollectionsWithCompletionBlock:
- loadQueryCriteria:countOfItemsWithCompletionBlock:
- loadQueryCriteria:countOfCollectionsWithCompletionBlock:
- collectionResultSetForQueryCriteria:
- setLibraryEntityFilterPredicatesWithCloudFilteringType:additionalFilterPredicates:
- setLibraryContainerFilterPredicatesWithCloudFilteringType:additionalFilterPredicates:
- enumerateEntityChangesAfterSyncAnchor:itemBlock:collectionBlock:
- loadProperties:ofItemWithIdentifier:completionBlock:
- setValue:forProperty:ofItemWithIdentifier:completionBlock:
- loadBestArtworkImageDataForSize:ofItemWithIdentifier:atPlaybackTime:completionBlock:
- loadProperties:ofCollectionWithIdentifier:groupingType:completionBlock:
- setValue:forProperty:ofCollectionWithIdentifier:groupingType:completionBlock:
- setValue:forProperty:ofPlaylistWithIdentifier:completionBlock:
- addItemWithIdentifier:toPlaylistWithIdentifier:completionBlock:
- addItemsWithIdentifiers:count:toPlaylistWithIdentifier:completionBlock:
- removeItemsWithIdentifiers:atFilteredIndexes:inPlaylistWithIdentifier:completionBlock:
- removeAllItemsInPlaylistWithIdentifier:
- moveItemFromIndex:toIndex:inPlaylistWithIdentifier:completionBlock:
- _libraryContentsDidChange:
- _dynamicPropertiesDidChange:
- _invisiblePropertiesDidChange:
- _displayValuesDidChange:
- _syncGenerationDidChange:
- _libraryUIDDidChange:
- _postEvents
- performBackgroundTaskWithBlock:
- adjustedValueForMPProperty:ofEntity:withDefaultValue:
- _loadValueForAggregateFunction:entityClass:property:query:completionBlock:
- _loadProperties:ofEntityWithIdentifier:ML3EntityClass:completionBlock:
- ML3SystemFilterPredicatesWithGroupingType:cloudTrackFilteringType:additionalFilterPredicates:
- systemFilterPredicatesWithGroupingType:cloudTrackFilteringType:
- _dataProviderSupportsEntityChangeTracking
- _coalesceEvents
- _removeEntitiesWithIdentifiers:count:entityClass:
- dealloc
- name
- uniqueIdentifier
- initWithLibrary:
- performTransactionWithBlock:
- library
- setLibrary:
- isCurrentThreadInTransaction
- syncGenerationID
- localizedSectionIndexTitles
- localizedSectionHeaderForSectionIndex:
- databasePath
- .cxx_destruct
- lastModifiedDate
@end
