@interface CKPreviewDispatchCache : NSObject
{
	id _dispatchCache;
	id _pendingBlocks;
}

+ dealloc
+ init
+ flush
+ didReceiveMemoryWarning
+ resume
+ cachedPreviewForMediaObject:orientation:
+ setCachedPreview:forMediaObject:orientation:
+ enqueueSaveBlock:forMediaObject:withPriority:
+ notificationCenter
+ enqueueGenerationBlock:completion:withPriority:forMediaObject:orientation:
+ isGeneratingForMediaObject:orientation:
+ transferRemoved:
+ setDispatchCache:
+ setPendingBlocks:
+ dispatchCache
+ mediaObjectManager
+ pendingBlocks
+ transferFinished:
+ beginGeneratingForMediaObject:orientation:
+ endGeneratingForMediaObject:orientation:
+ systemApplicationDidSuspend
+ systemApplicationDidSuspendForEventsOnly
- dealloc
- init
- flush
- didReceiveMemoryWarning
- resume
- cachedPreviewForMediaObject:orientation:
- setCachedPreview:forMediaObject:orientation:
- enqueueSaveBlock:forMediaObject:withPriority:
- notificationCenter
- enqueueGenerationBlock:completion:withPriority:forMediaObject:orientation:
- isGeneratingForMediaObject:orientation:
- transferRemoved:
- setDispatchCache:
- setPendingBlocks:
- dispatchCache
- mediaObjectManager
- pendingBlocks
- transferFinished:
- beginGeneratingForMediaObject:orientation:
- endGeneratingForMediaObject:orientation:
- systemApplicationDidSuspend
- systemApplicationDidSuspendForEventsOnly
@end
