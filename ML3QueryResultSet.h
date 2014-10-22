@interface ML3QueryResultSet : NSObject
{
	id _backingStore;
	id _query;
	long long _revision;
	BOOL _supportsIncrementalUpdate;
	id _updateToLibraryCurrentRevisionCompletionBlocks;
	id _queue;
	id _fixedPriorityQueue;
}

+ enumerateSectionHeadersUsingBlock:
+ sectionIndexTitles
+ count
+ query
+ copyWithZone:
+ enumeratePersistentIDsUsingBlock:
+ enumerateSectionsUsingBlock:
+ persistentIDAtIndex:
+ _initWithQuery:supportsIncrementalUpdate:
+ initWithQuery:
+ entityLimit
+ _onQueueAddUpdateFinishedBlock:
+ _updateToLibraryCurrentRevision
+ _onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:
+ _loadCurrentFullResults
+ _mergeChangesWithFromNewPIDs:changedPIDs:
+ updateToLibraryCurrentRevision
+ revision
+ .cxx_destruct
- enumerateSectionHeadersUsingBlock:
- sectionIndexTitles
- count
- query
- copyWithZone:
- enumeratePersistentIDsUsingBlock:
- enumerateSectionsUsingBlock:
- persistentIDAtIndex:
- _initWithQuery:supportsIncrementalUpdate:
- initWithQuery:
- entityLimit
- _onQueueAddUpdateFinishedBlock:
- _updateToLibraryCurrentRevision
- _onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:
- _loadCurrentFullResults
- _mergeChangesWithFromNewPIDs:changedPIDs:
- updateToLibraryCurrentRevision
- revision
- .cxx_destruct
@end
