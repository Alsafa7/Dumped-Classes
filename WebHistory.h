@interface WebHistory : NSObject
{
	id _historyPrivate;
}

+ _addVisitedLinksToPageGroup:
+ _visitedURL:withTitle:method:wasFailure:increaseVisitCount:
+ _data
+ allItems
+ _itemForURLString:
+ removeAllItems
+ removeItems:
+ dealloc
+ init
+ addItems:
+ containsURL:
+ finalize
+ itemForURL:
+ _sendNotification:entries:
+ historyAgeInDaysLimit
+ historyItemLimit
+ orderedLastVisitedDays
+ orderedItemsLastVisitedOnDay:
+ setHistoryAgeInDaysLimit:
+ setHistoryItemLimit:
+ saveToURL:error:
+ timeZoneChanged:
+ loadFromURL:error:
- _addVisitedLinksToPageGroup:
- _visitedURL:withTitle:method:wasFailure:increaseVisitCount:
- _data
- allItems
- _itemForURLString:
- removeAllItems
- removeItems:
- dealloc
- init
- addItems:
- containsURL:
- finalize
- itemForURL:
- _sendNotification:entries:
- historyAgeInDaysLimit
- historyItemLimit
- orderedLastVisitedDays
- orderedItemsLastVisitedOnDay:
- setHistoryAgeInDaysLimit:
- setHistoryItemLimit:
- saveToURL:error:
- timeZoneChanged:
- loadFromURL:error:
@end
