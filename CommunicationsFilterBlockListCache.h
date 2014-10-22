@interface CommunicationsFilterBlockListCache : NSObject
{
	id _recentItems;
}

+ init
+ _blockListChanged:
+ cachedResponseForItem:
+ removeItemFromCache:
+ setResponse:forItem:
- init
- _blockListChanged:
- cachedResponseForItem:
- removeItemFromCache:
- setResponse:forItem:
@end
