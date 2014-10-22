@interface MFLibraryContentIndex : NSObject
{
	id _queue;
	id _path;
	id _indexName;
	double _startNonIdle;
	long long _state;
	id _pendingIndexableItems;
	id _pendingRemovals;
	id _group;
	id _indexingQueue;
	usigned long long _throttledBatchSize;
	id _dataSource;
	id _dataSourceQueue;
	id _contentIndexWrapper;
	int _invalidated;
	id _resultsCache;
	bit[1] _refreshing;
	bit[1] _processPendingChangesScheduled;
}

+ dealloc
+ suspend
+ resume
+ documentIdentifiersMatchingCriterion:mailboxIDs:
+ isSearchable
+ initWithPath:indexName:dataSource:
+ setTargetQueue:
+ invalidateAndWait
+ indexItems:
+ removeItemsWithDocumentIdentifiers:
+ refresh
+ _markInvalidated
+ scheduleProcessPendingItems
+ _copyContentIndex_indexingQueue
+ _processIndexingBatch:
+ _processRemovals:
+ _processRefreshRequest
+ _transitionToNextState
+ _transitionToNextStatePaused:
+ _copyContentIndex
+ _createQueryNodeFromCriterion:
+ _createQueryNodeFromMailboxIDs:
+ _createQueryFromCriterion:mailboxIDs:contentIndex:
+ _indexFullPath
+ _dataSourceInvalidateItemsGreaterThanTransactionId:
+ _consumeBatchOfSize:
+ _addItem:toContentIndex:
+ _dataSourceAssignTransactionIdentifier:forDocumentIdentifiers:
+ _invalidateResultsCache
+ _dataSourceIndexItemsNeedingRefreshWithLimit:
+ wait
- dealloc
- suspend
- resume
- documentIdentifiersMatchingCriterion:mailboxIDs:
- isSearchable
- initWithPath:indexName:dataSource:
- setTargetQueue:
- invalidateAndWait
- indexItems:
- removeItemsWithDocumentIdentifiers:
- refresh
- _markInvalidated
- scheduleProcessPendingItems
- _copyContentIndex_indexingQueue
- _processIndexingBatch:
- _processRemovals:
- _processRefreshRequest
- _transitionToNextState
- _transitionToNextStatePaused:
- _copyContentIndex
- _createQueryNodeFromCriterion:
- _createQueryNodeFromMailboxIDs:
- _createQueryFromCriterion:mailboxIDs:contentIndex:
- _indexFullPath
- _dataSourceInvalidateItemsGreaterThanTransactionId:
- _consumeBatchOfSize:
- _addItem:toContentIndex:
- _dataSourceAssignTransactionIdentifier:forDocumentIdentifiers:
- _invalidateResultsCache
- _dataSourceIndexItemsNeedingRefreshWithLimit:
- wait
@end
