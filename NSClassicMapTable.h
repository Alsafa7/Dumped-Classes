@interface NSClassicMapTable : NSMapTable
{
	struct _keyCallBacks;
	struct _valueCallBacks;
	pointer _ht;
}

+ removeAllItems
+ setItem:forKnownAbsentKey:
+ existingItemForSetItem:forAbsentKey:
+ mapMember:originalKey:value:
+ getKeys:values:
+ dealloc
+ count
+ init
+ copy
+ isEqual:
+ description
+ removeObjectForKey:
+ allKeys
+ allValues
+ objectForKey:
+ setObject:forKey:
- removeAllItems
- setItem:forKnownAbsentKey:
- existingItemForSetItem:forAbsentKey:
- mapMember:originalKey:value:
- getKeys:values:
- dealloc
- count
- init
- copy
- isEqual:
- description
- removeObjectForKey:
- allKeys
- allValues
- objectForKey:
- setObject:forKey:
@end
