@interface _UICache : NSObject
{
	id _cacheQueue;
	id _cache;
	id _memoryWarningsSource;
	BOOL _clearsCacheOnLowMemoryWarnings;
	BOOL _clearsCacheOnApplicationBackground;
	id _noteObserver;
}

+ dealloc
+ init
+ removeAllObjects
+ removeObjectForKey:
+ setClearsCacheOnApplicationBackground:
+ setClearsCacheOnLowMemoryWarnings:
+ objectForKey:
+ setObject:forKey:
+ clearsCacheOnLowMemoryWarnings
+ clearsCacheOnApplicationBackground
- dealloc
- init
- removeAllObjects
- removeObjectForKey:
- setClearsCacheOnApplicationBackground:
- setClearsCacheOnLowMemoryWarnings:
- objectForKey:
- setObject:forKey:
- clearsCacheOnLowMemoryWarnings
- clearsCacheOnApplicationBackground
@end
