@interface WebBookmarkCollection : NSObject
{
	pointer _db;
	pointer _locale;
	id _wordTokenizer;
	id _rootBookmark;
	unsigned int _favoritesFolderIdentifier;
	BOOL _merging;
	BOOL _dirty;
	id _safariFetcherServerProxy;
	id _webFilterUserSettings;
	long long _webFilterRestrictionType;
}

+ generation
+ rollbackSyncTransaction
+ mergeWithBookmarksDictionary:clearHidden:error:
+ syncSetString:forKey:
+ commitSyncTransaction
+ bookmarksDictionary
+ syncStringForKey:
+ beginSyncTransaction
+ syncDataForKey:
+ setSyncData:forKey:
+ _addChildrenOfID:toCollection:recursive:error:
+ _bookmarkDictionaryForSqliteRow:recursive:error:
+ _syncAdd:toParent:withOrderIndex:error:
+ _mergeChildrenOfID:referencingBase:error:
+ _markSpecialBookmarks
+ _deleteSyncPropertyForKey:
+ _syncPropertyExistsForKey:
+ containsOnlyStockBookmarks
+ dealloc
+ isEmpty
+ initWithPath:
+ purgeableSpace
+ purge:
+ initSafariBookmarkCollectionCheckingIntegrity:
+ _postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade
+ _restoreMissingSpecialBookmarks
+ _clearAllDAVSyncData
+ _bookmarkWithServerID:
+ _setServerID:forBookmark:
+ _serverIDForBookmarkID:
+ _setSyncKey:forBookmark:
+ _setSyncData:forBookmark:
+ _saveBookmark:withSpecialID:updateGenerationIfNeeded:
+ _orderChildrenWithServerIDs:inFolderWithServerID:
+ _syncKeysForServerIDs:
+ _serverIDsInFolderWithServerID:
+ _serverIDAtOrderIndex:inFolderWithServerID:
+ clearReadingListArchiveWithUUID:
+ clearAllReadingListArchives
+ _deleteBookmark:leaveTombstone:
+ readingListWithUnreadOnly:
+ _changeList
+ _DAVGeneration
+ _clearChangeList
+ setMerging:
+ _bookmarkIDForServerID:
+ isMerging
+ _bookmarkWithSpecialID:
+ _mergeCandidateFolderWithTitle:parent:
+ _mergeCandidateBookmarkWithAddress:parent:
+ _markBookmarkID:added:
+ _openDatabaseAtPath:checkIntegrity:error:
+ _registerForSyncBookmarksFileChangedNotification
+ initWithPath:checkIntegrity:
+ initWithPath:migratingBookmarksPlist:syncAnchorPlist:checkIntegrity:
+ _errorForMostRecentSQLiteError
+ _createSchema
+ _errorForMostRecentSQLiteErrorWithErrorCode:
+ _migrateToCurrentSchema
+ _migrateBookmarksPlist:syncAnchorPlist:
+ webFilterUserSettings
+ _registerForWebFilterConfigurationChangedNotification
+ saveBookmark:
+ readingListFolderBookmarkID
+ _executeSQL:
+ _safariFetcherServerProxy
+ _readingListItemsWhere:
+ saveBookmark:startReadingListFetcher:
+ markWebContentFilterAllowsAllReadingListItems
+ _executeSQLWithCString:
+ purgeableReadingListItems
+ vacuum
+ _selectBookmarksWhere:
+ _finalizeStatementIfNotNull:
+ isWebFilterWhiteListOnlyModeEnabled
+ rootBookmark
+ bookmarkWithID:
+ listWithID:skipOffset:
+ _intFromExecutingSQL:
+ listWithID:
+ listWithID:skipOffset:includeHidden:
+ _rootFolderHiddenChildrenClause
+ listWithSpecialID:
+ webFilterWhiteListFolderBookmarkID
+ favoritesFolder
+ _parentIdentifierForBookmarksNeedingIcons
+ _selectBookmarksWhere:countOnly:
+ _simulateCrashWithDescription:
+ _specialIDForBookmarkBeingSaved:
+ _postBookmarksFolderContentsDidChangeNotification:
+ _postBookmarksSpecialFoldersDidChangeNotification
+ _startReadingListFetcher
+ _incrementGeneration
+ deleteBookmark:postChangeNotification:
+ _moveBookmark:toFolderWithID:
+ _moveBookmark:toIndex:
+ _normalizeSearchString:
+ _enumerateBookmarksForMatchStatement:normalizedQuery:usingBlock:
+ _addBookmarksForReadingListMatchStatement:normalizedQuery:toArray:maxResults:
+ _firstBookmarkWithURLMatchingString:prefixMatch:inParent:
+ _postBookmarksDidReloadNotification
+ _tableExpressionForArchiveMode:
+ _orderedWhereClauseForArchiveMode:
+ rollingListOfArchivedReadingListItems
+ _cullReadingListBookmarksList:toSize:
+ _clearAndCreateBookmarksTables
+ _clearAndCreateAncestorTable
+ _clearAndCreateBookmarksTitleWordTable
+ _indexAllTitleWords
+ _normalizeDatabaseURLs
+ _rebuildAncestorTable
+ deleteAllFavoriteIcons
+ _migrateSchemaVersion3ToVersion4
+ _migrateSchemaVersion4ToVersion5
+ _migrateSchemaVersion5ToVersion6
+ _migrateSchemaVersion6ToVersion7
+ _migrateSchemaVersion7ToVersion8
+ _migrateSchemaVersion8ToVersion9
+ _migrateSchemaVersion9ToVersion10
+ _migrateSchemaVersion10ToVersion11
+ _migrateSchemaVersion11And12And13ToVersion14
+ _migrateSchemaVersion14ToVersion15
+ _migrateSchemaVersion15ToVersion16
+ _migrateSchemaVersion16AndVersion17AndVersion18ToVersion19
+ _migrateSchemaVersion21ToVersion22
+ _migrateSchemaVersion22ToVersion23
+ _migrateSchemaVersion23ToVersion24
+ _migrateSchemaVersion24ToVersion25
+ _userVersion
+ _migrateSchemaVersion0ToVersion1
+ _migrateSchemaVersion1And2ToVersion3
+ _migrateSchemaVersion19And20ToVersion21
+ _migrateSchemaVersion25ToVersion26
+ _migrateSchemaVersion26ToVersion27
+ _migrateSchemaVersion27ToVersion28
+ _migrateSchemaVersion28ToVersion29
+ _migrateSchemaVersion29ToVersion30
+ _migrateSchemaVersion30ToVersion31
+ _migrateSchemaVersion31ToVersion32
+ _migrateSchemaVersion32ToVersion33
+ _migrateSchemaVersion33ToVersion34
+ _migrateSchemaVersion34ToVersion35
+ _migrateSchemaVersion35ToVersion36
+ _migrateSchemaVersion36ToVersion37
+ _rerunMigrationsIfNecessary
+ _importBookmarksPlist:
+ _importSyncAnchorPlist:
+ _insertAncestorTableEntriesForBookmarkID:withAncestorIDs:
+ _restoreBookmarkBarIfMissing
+ _restoreOrMergeReadingListFolderWithChangeNotification:
+ _restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:
+ _orderIndexForBookmarkInsertedIntoParent:insertAtBeginning:
+ _updateCachedChildCountForParentID:inDirection:
+ _clearSyncKeysUnderBookmarkID:isFolder:
+ _insertTombstoneWithServerID:
+ _deleteAncestorTableEntriesForBookmarkID:
+ _insertAncestorTableEntriesForBookmarkID:withParentID:
+ _clearAllSyncKeys
+ _clearAllTombstones
+ _deleteRecursively:
+ _specialIDForBookmarkTitle:
+ _databaseTitleForSpecialID:
+ _addBookmarkWithTitle:address:parentID:orderIndex:isFolder:externalUUID:associatedBookmark:updateParentChildCount:updateAncestorEntries:
+ _updateHiddenAncestorCountForBookmarksUnderFolderID:addingOffset:
+ _markBookmarkID:withSpecialID:
+ _reindexBookmarkID:title:
+ _unsafeOrderChildrenWithServerIDs:inFolderWithServerID:
+ _clearTitleWordsForBookmarkID:
+ _indexBookmarkID:title:
+ _collectChangesOfType:withClause:intoArray:
+ _incrementDAVGeneration
+ postBookmarksDidReloadNotification
+ bookmarksBarBookmark
+ _favoritesFolderIdentifier
+ webFilterWhiteListFolder
+ webFilterWhiteList
+ moveBookmark:toFolderWithID:
+ initWithPath:migratingBookmarksPlist:syncAnchorPlist:
+ cleanupReadingListArchives
+ markArchivedReadingListItemsAsNonRecoverable
+ updateReadingListWebFilterStatusForUnsetItemsOnly:
+ localeSettingsChanged
+ bookmarkWithUUID:
+ readingListFolder
+ bookmarkAtPath:
+ subfoldersOfID:
+ rootList
+ bookmarksBarList
+ shouldFetchIconForBookmark:
+ bookmarksNeedingIcons
+ deleteBookmark:
+ reorderBookmark:toIndex:
+ reorderList:moveBookmarkAtIndex:toIndex:
+ _prefixSearch:usingColumns:maxCount:
+ bookmarksMatchingString:
+ enumerateBookmarks:andReadingListItems:matchingString:usingBlock:
+ _bookmarksFromStatementSelectingIDs:withQuery:
+ readingListBookmarksMatchingString:maxResults:onlyArchivedBookmarks:
+ firstReadingListBookmarkWithURLMatchingString:prefixMatch:
+ indexOfReadingListBookmark:countingOnlyUnread:
+ countReadingListBookmarksNeedingArchiveInMode:
+ firstReadingListBookmarkNeedingArchiveInMode:
+ readingListBookmarksNeedingArchiveInMode:
+ rollOutLastReadingListItem
+ rollOutReadingListItemIfNeededToMakeRoomForOneNewItem
+ rollingReadingListMaximumCount
+ clearCarrierBookmarks
+ _bookmarksInListWhere:fromIndex:toIndex:
+ _webFilterConfigurationChanged
+ isWebFilterEnabled
+ setFavoritesFolderIdentifier:
+ _clearCachedFavoritesFolderIdentifier
+ favoritesFolderList
+ bookmarkIsFavoritesFolder:
- generation
- rollbackSyncTransaction
- mergeWithBookmarksDictionary:clearHidden:error:
- syncSetString:forKey:
- commitSyncTransaction
- bookmarksDictionary
- syncStringForKey:
- beginSyncTransaction
- syncDataForKey:
- setSyncData:forKey:
- _addChildrenOfID:toCollection:recursive:error:
- _bookmarkDictionaryForSqliteRow:recursive:error:
- _syncAdd:toParent:withOrderIndex:error:
- _mergeChildrenOfID:referencingBase:error:
- _markSpecialBookmarks
- _deleteSyncPropertyForKey:
- _syncPropertyExistsForKey:
- containsOnlyStockBookmarks
- dealloc
- isEmpty
- initWithPath:
- purgeableSpace
- purge:
- initSafariBookmarkCollectionCheckingIntegrity:
- _postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade
- _restoreMissingSpecialBookmarks
- _clearAllDAVSyncData
- _bookmarkWithServerID:
- _setServerID:forBookmark:
- _serverIDForBookmarkID:
- _setSyncKey:forBookmark:
- _setSyncData:forBookmark:
- _saveBookmark:withSpecialID:updateGenerationIfNeeded:
- _orderChildrenWithServerIDs:inFolderWithServerID:
- _syncKeysForServerIDs:
- _serverIDsInFolderWithServerID:
- _serverIDAtOrderIndex:inFolderWithServerID:
- clearReadingListArchiveWithUUID:
- clearAllReadingListArchives
- _deleteBookmark:leaveTombstone:
- readingListWithUnreadOnly:
- _changeList
- _DAVGeneration
- _clearChangeList
- setMerging:
- _bookmarkIDForServerID:
- isMerging
- _bookmarkWithSpecialID:
- _mergeCandidateFolderWithTitle:parent:
- _mergeCandidateBookmarkWithAddress:parent:
- _markBookmarkID:added:
- _openDatabaseAtPath:checkIntegrity:error:
- _registerForSyncBookmarksFileChangedNotification
- initWithPath:checkIntegrity:
- initWithPath:migratingBookmarksPlist:syncAnchorPlist:checkIntegrity:
- _errorForMostRecentSQLiteError
- _createSchema
- _errorForMostRecentSQLiteErrorWithErrorCode:
- _migrateToCurrentSchema
- _migrateBookmarksPlist:syncAnchorPlist:
- webFilterUserSettings
- _registerForWebFilterConfigurationChangedNotification
- saveBookmark:
- readingListFolderBookmarkID
- _executeSQL:
- _safariFetcherServerProxy
- _readingListItemsWhere:
- saveBookmark:startReadingListFetcher:
- markWebContentFilterAllowsAllReadingListItems
- _executeSQLWithCString:
- purgeableReadingListItems
- vacuum
- _selectBookmarksWhere:
- _finalizeStatementIfNotNull:
- isWebFilterWhiteListOnlyModeEnabled
- rootBookmark
- bookmarkWithID:
- listWithID:skipOffset:
- _intFromExecutingSQL:
- listWithID:
- listWithID:skipOffset:includeHidden:
- _rootFolderHiddenChildrenClause
- listWithSpecialID:
- webFilterWhiteListFolderBookmarkID
- favoritesFolder
- _parentIdentifierForBookmarksNeedingIcons
- _selectBookmarksWhere:countOnly:
- _simulateCrashWithDescription:
- _specialIDForBookmarkBeingSaved:
- _postBookmarksFolderContentsDidChangeNotification:
- _postBookmarksSpecialFoldersDidChangeNotification
- _startReadingListFetcher
- _incrementGeneration
- deleteBookmark:postChangeNotification:
- _moveBookmark:toFolderWithID:
- _moveBookmark:toIndex:
- _normalizeSearchString:
- _enumerateBookmarksForMatchStatement:normalizedQuery:usingBlock:
- _addBookmarksForReadingListMatchStatement:normalizedQuery:toArray:maxResults:
- _firstBookmarkWithURLMatchingString:prefixMatch:inParent:
- _postBookmarksDidReloadNotification
- _tableExpressionForArchiveMode:
- _orderedWhereClauseForArchiveMode:
- rollingListOfArchivedReadingListItems
- _cullReadingListBookmarksList:toSize:
- _clearAndCreateBookmarksTables
- _clearAndCreateAncestorTable
- _clearAndCreateBookmarksTitleWordTable
- _indexAllTitleWords
- _normalizeDatabaseURLs
- _rebuildAncestorTable
- deleteAllFavoriteIcons
- _migrateSchemaVersion3ToVersion4
- _migrateSchemaVersion4ToVersion5
- _migrateSchemaVersion5ToVersion6
- _migrateSchemaVersion6ToVersion7
- _migrateSchemaVersion7ToVersion8
- _migrateSchemaVersion8ToVersion9
- _migrateSchemaVersion9ToVersion10
- _migrateSchemaVersion10ToVersion11
- _migrateSchemaVersion11And12And13ToVersion14
- _migrateSchemaVersion14ToVersion15
- _migrateSchemaVersion15ToVersion16
- _migrateSchemaVersion16AndVersion17AndVersion18ToVersion19
- _migrateSchemaVersion21ToVersion22
- _migrateSchemaVersion22ToVersion23
- _migrateSchemaVersion23ToVersion24
- _migrateSchemaVersion24ToVersion25
- _userVersion
- _migrateSchemaVersion0ToVersion1
- _migrateSchemaVersion1And2ToVersion3
- _migrateSchemaVersion19And20ToVersion21
- _migrateSchemaVersion25ToVersion26
- _migrateSchemaVersion26ToVersion27
- _migrateSchemaVersion27ToVersion28
- _migrateSchemaVersion28ToVersion29
- _migrateSchemaVersion29ToVersion30
- _migrateSchemaVersion30ToVersion31
- _migrateSchemaVersion31ToVersion32
- _migrateSchemaVersion32ToVersion33
- _migrateSchemaVersion33ToVersion34
- _migrateSchemaVersion34ToVersion35
- _migrateSchemaVersion35ToVersion36
- _migrateSchemaVersion36ToVersion37
- _rerunMigrationsIfNecessary
- _importBookmarksPlist:
- _importSyncAnchorPlist:
- _insertAncestorTableEntriesForBookmarkID:withAncestorIDs:
- _restoreBookmarkBarIfMissing
- _restoreOrMergeReadingListFolderWithChangeNotification:
- _restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:
- _orderIndexForBookmarkInsertedIntoParent:insertAtBeginning:
- _updateCachedChildCountForParentID:inDirection:
- _clearSyncKeysUnderBookmarkID:isFolder:
- _insertTombstoneWithServerID:
- _deleteAncestorTableEntriesForBookmarkID:
- _insertAncestorTableEntriesForBookmarkID:withParentID:
- _clearAllSyncKeys
- _clearAllTombstones
- _deleteRecursively:
- _specialIDForBookmarkTitle:
- _databaseTitleForSpecialID:
- _addBookmarkWithTitle:address:parentID:orderIndex:isFolder:externalUUID:associatedBookmark:updateParentChildCount:updateAncestorEntries:
- _updateHiddenAncestorCountForBookmarksUnderFolderID:addingOffset:
- _markBookmarkID:withSpecialID:
- _reindexBookmarkID:title:
- _unsafeOrderChildrenWithServerIDs:inFolderWithServerID:
- _clearTitleWordsForBookmarkID:
- _indexBookmarkID:title:
- _collectChangesOfType:withClause:intoArray:
- _incrementDAVGeneration
- postBookmarksDidReloadNotification
- bookmarksBarBookmark
- _favoritesFolderIdentifier
- webFilterWhiteListFolder
- webFilterWhiteList
- moveBookmark:toFolderWithID:
- initWithPath:migratingBookmarksPlist:syncAnchorPlist:
- cleanupReadingListArchives
- markArchivedReadingListItemsAsNonRecoverable
- updateReadingListWebFilterStatusForUnsetItemsOnly:
- localeSettingsChanged
- bookmarkWithUUID:
- readingListFolder
- bookmarkAtPath:
- subfoldersOfID:
- rootList
- bookmarksBarList
- shouldFetchIconForBookmark:
- bookmarksNeedingIcons
- deleteBookmark:
- reorderBookmark:toIndex:
- reorderList:moveBookmarkAtIndex:toIndex:
- _prefixSearch:usingColumns:maxCount:
- bookmarksMatchingString:
- enumerateBookmarks:andReadingListItems:matchingString:usingBlock:
- _bookmarksFromStatementSelectingIDs:withQuery:
- readingListBookmarksMatchingString:maxResults:onlyArchivedBookmarks:
- firstReadingListBookmarkWithURLMatchingString:prefixMatch:
- indexOfReadingListBookmark:countingOnlyUnread:
- countReadingListBookmarksNeedingArchiveInMode:
- firstReadingListBookmarkNeedingArchiveInMode:
- readingListBookmarksNeedingArchiveInMode:
- rollOutLastReadingListItem
- rollOutReadingListItemIfNeededToMakeRoomForOneNewItem
- rollingReadingListMaximumCount
- clearCarrierBookmarks
- _bookmarksInListWhere:fromIndex:toIndex:
- _webFilterConfigurationChanged
- isWebFilterEnabled
- setFavoritesFolderIdentifier:
- _clearCachedFavoritesFolderIdentifier
- favoritesFolderList
- bookmarkIsFavoritesFolder:
@end
