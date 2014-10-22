@interface NSCache : NSObject
{
	id _delegate;
	Array _private;
	pointer _reserved;
}

+ setEvictsObjectsWhenApplicationEntersBackground:
+ evictsObjectsWithDiscardedContent
+ setTotalCostLimit:
+ totalCostLimit
+ countLimit
+ setEvictsObjectsWithDiscardedContent:
+ evictsObjectsWhenApplicationEntersBackground
+ dealloc
+ setDelegate:
+ init
+ removeAllObjects
+ delegate
+ removeObjectForKey:
+ setName:
+ allObjects
+ name
+ setCountLimit:
+ setObject:forKey:cost:
+ objectForKey:
+ setObject:forKey:
+ finalize
- setEvictsObjectsWhenApplicationEntersBackground:
- evictsObjectsWithDiscardedContent
- setTotalCostLimit:
- totalCostLimit
- countLimit
- setEvictsObjectsWithDiscardedContent:
- evictsObjectsWhenApplicationEntersBackground
- dealloc
- setDelegate:
- init
- removeAllObjects
- delegate
- removeObjectForKey:
- setName:
- allObjects
- name
- setCountLimit:
- setObject:forKey:cost:
- objectForKey:
- setObject:forKey:
- finalize
@end
