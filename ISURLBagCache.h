@interface ISURLBagCache : NSObject
{
	id _cachedBags;
	id _dispatchQueue;
}

+ URLBagForContext:
+ dealloc
+ init
+ URLBagForContext:withOptions:
+ addURLBag:
+ _newRequestWithURLBagContext:
+ _URLBagForContext:withOptions:
+ _shouldFallbackForContext:options:
+ _fallbackContextWithContext:
+ _cachedResponseForRequest:
+ invalidateURLBagForContext:
+ _storeFrontChangedNotification:
+ invalidateAllURLBags
- URLBagForContext:
- dealloc
- init
- URLBagForContext:withOptions:
- addURLBag:
- _newRequestWithURLBagContext:
- _URLBagForContext:withOptions:
- _shouldFallbackForContext:options:
- _fallbackContextWithContext:
- _cachedResponseForRequest:
- invalidateURLBagForContext:
- _storeFrontChangedNotification:
- invalidateAllURLBags
@end
