@interface MBSCachePool : NSObject
{
	id _caches;
	id _queue;
	BOOL _drainScheduled;
}

+ acquireCache
+ releaseCache:
+ _openCache
+ _scheduleDrain
+ _closeCache:
+ _drain
+ dealloc
+ init
- acquireCache
- releaseCache:
- _openCache
- _scheduleDrain
- _closeCache:
- _drain
- dealloc
- init
@end
