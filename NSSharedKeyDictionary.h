@interface NSSharedKeyDictionary : NSMutableDictionary
{
	id _keyMap;
	usigned long long _count;
	pointer _values;
	pointer _ifkIMP;
	id _sideDic;
	usigned long long _mutations;
}

+ getObjects:andKeys:count:
+ initWithKeySet:
+ dealloc
+ initWithCoder:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ removeObjectForKey:
+ copyWithZone:
+ classForCoder
+ keyEnumerator
+ keySet
+ mutableCopyWithZone:
+ objectForKey:
+ setObject:forKey:
+ finalize
- getObjects:andKeys:count:
- initWithKeySet:
- dealloc
- initWithCoder:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- removeObjectForKey:
- copyWithZone:
- classForCoder
- keyEnumerator
- keySet
- mutableCopyWithZone:
- objectForKey:
- setObject:forKey:
- finalize
@end
