@interface _UIStatusBarCache : NSObject
{
	id _store;
}

+ dealloc
+ init
+ _canCacheImages
+ imageNamed:forGroup:withScale:
+ cacheImage:named:forGroup:
- dealloc
- init
- _canCacheImages
- imageNamed:forGroup:withScale:
- cacheImage:named:forGroup:
@end
