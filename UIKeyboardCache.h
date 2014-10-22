@interface UIKeyboardCache : NSObject
{
	id _store;
	id _layouts;
	BOOL _isCommitting;
}

+ dealloc
+ init
+ commitTransaction
+ clearNonPersistentCache
+ updateCacheForInputModes:
+ displayImagesForView:fromLayout:imageFlags:
+ displayView:imageWidth:fromLayout:
+ cachedCompositeImageForCacheKeys:fromLayout:opacities:
+ cachedImageForKey:fromLayout:
+ displayView:fromLayout:
+ uniqueLayoutsFromInputModes:
- dealloc
- init
- commitTransaction
- clearNonPersistentCache
- updateCacheForInputModes:
- displayImagesForView:fromLayout:imageFlags:
- displayView:imageWidth:fromLayout:
- cachedCompositeImageForCacheKeys:fromLayout:opacities:
- cachedImageForKey:fromLayout:
- displayView:fromLayout:
- uniqueLayoutsFromInputModes:
@end
