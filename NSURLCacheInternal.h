@interface NSURLCacheInternal : NSObject
{
	usigned long long memoryCapacity;
	usigned long long diskCapacity;
	id diskPath;
	usigned long long currentMemoryUsage;
	usigned long long currentDiskUsage;
	id memoryCache;
	id memoryCacheGuard;
	id memoryCacheLRUHead;
	id memoryCacheLRUTail;
	usigned long long memoryCacheItemLengthThreshold;
	id diskCacheGuard;
	id diskCachePendingWrites;
	id diskCachePendingRemovals;
	id diskCachePendingOperations;
	usigned long long diskCacheItemLengthThreshold;
	double diskCacheTouchTime;
	pointer diskCacheLRUList;
	usigned long long timerResetCount;
	usigned long long syncSkipCount;
	pointer _cacheRef;
	BOOL diskCacheLeftoverFilesRemovedFlag;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;
}

+ dealloc
+ finalize
- dealloc
- finalize
@end
