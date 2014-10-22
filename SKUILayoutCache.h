@interface SKUILayoutCache : NSObject
{
	id _batchedRequests;
	id _delegate;
	id _dispatchQueue;
	id _layouts;
	id _requests;
}

+ setDelegate:
+ init
+ delegate
+ commitLayoutRequests
+ populateCacheWithLayoutRequests:
+ _layoutRequestsInRange:
+ _addLayoutBatch:
+ addLayoutRequests:
+ layoutForIndex:
+ .cxx_destruct
+ _populateCache
- setDelegate:
- init
- delegate
- commitLayoutRequests
- populateCacheWithLayoutRequests:
- _layoutRequestsInRange:
- _addLayoutBatch:
- addLayoutRequests:
- layoutForIndex:
- .cxx_destruct
- _populateCache
@end
