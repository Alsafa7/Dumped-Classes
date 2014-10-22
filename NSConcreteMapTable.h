@interface NSConcreteMapTable : NSMapTable
{
	struct keys;
	struct values;
	usigned long long count;
	usigned long long capacity;
	usigned long long keyOptions;
	usigned long long valueOptions;
	usigned long long mutations;
	int growLock;
	BOOL shouldRehash;
}

+ _initBlock
+ removeAllItems
+ raiseCountUnderflowException
+ rehashAround:
+ rehash
+ keyPointerFunctions
+ valuePointerFunctions
+ setItem:forAbsentKey:
+ setItem:forKnownAbsentKey:
+ existingItemForSetItem:forAbsentKey:
+ replaceItem:forExistingKey:
+ mapMember:originalKey:value:
+ getKeys:values:
+ realCount
+ _setBackingStore
+ assign:key:value:isNew:
+ grow
+ checkCount:
+ zeroPairedEntries
+ containsKeys:values:count:
+ dump
+ dealloc
+ initWithCoder:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ init
+ copy
+ isEqual:
+ hash
+ description
+ removeObjectForKey:
+ allKeys
+ classForCoder
+ objectEnumerator
+ initWithKeyOptions:valueOptions:capacity:
+ allValues
+ keyEnumerator
+ initWithKeyPointerFunctions:valuePointerFunctions:capacity:
+ objectForKey:
+ setObject:forKey:
+ finalize
- _initBlock
- removeAllItems
- raiseCountUnderflowException
- rehashAround:
- rehash
- keyPointerFunctions
- valuePointerFunctions
- setItem:forAbsentKey:
- setItem:forKnownAbsentKey:
- existingItemForSetItem:forAbsentKey:
- replaceItem:forExistingKey:
- mapMember:originalKey:value:
- getKeys:values:
- realCount
- _setBackingStore
- assign:key:value:isNew:
- grow
- checkCount:
- zeroPairedEntries
- containsKeys:values:count:
- dump
- dealloc
- initWithCoder:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- init
- copy
- isEqual:
- hash
- description
- removeObjectForKey:
- allKeys
- classForCoder
- objectEnumerator
- initWithKeyOptions:valueOptions:capacity:
- allValues
- keyEnumerator
- initWithKeyPointerFunctions:valuePointerFunctions:capacity:
- objectForKey:
- setObject:forKey:
- finalize
@end
