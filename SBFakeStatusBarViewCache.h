@interface SBFakeStatusBarViewCache : NSObject
{
	id _cachedStatusBarQueues;
}

+ recycleBar:forKey:
+ barForKey:withGenerationBlockIfNecessary:
+ dealloc
+ init
- recycleBar:forKey:
- barForKey:withGenerationBlockIfNecessary:
- dealloc
- init
@end
