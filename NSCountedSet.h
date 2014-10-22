@interface NSCountedSet : NSMutableSet
{
	id _table;
	pointer _reserved;
}

+ initWithSet:copyItems:
+ countForObject:
+ getObjects:count:
+ dealloc
+ initWithCoder:
+ removeObject:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ init
+ addObject:
+ initWithCapacity:
+ copyWithZone:
+ classForCoder
+ objectEnumerator
+ initWithObjects:count:
+ initWithArray:
+ member:
+ mutableCopyWithZone:
+ initWithSet:
+ descriptionWithLocale:
- initWithSet:copyItems:
- countForObject:
- getObjects:count:
- dealloc
- initWithCoder:
- removeObject:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- init
- addObject:
- initWithCapacity:
- copyWithZone:
- classForCoder
- objectEnumerator
- initWithObjects:count:
- initWithArray:
- member:
- mutableCopyWithZone:
- initWithSet:
- descriptionWithLocale:
@end
