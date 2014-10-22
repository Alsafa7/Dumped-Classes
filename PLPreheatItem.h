@interface PLPreheatItem : NSObject
{
	int _useCount;
}

+ startPreheatRequest
+ cachedImage
+ cachedImageIfAvailable
+ addImageHandler:
+ cancelPreheatRequest
+ incrementUseCount
+ decrementUseCount
- startPreheatRequest
- cachedImage
- cachedImageIfAvailable
- addImageHandler:
- cancelPreheatRequest
- incrementUseCount
- decrementUseCount
@end
