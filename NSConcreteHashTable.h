@interface NSConcreteHashTable : NSHashTable
{
	struct slice;
	usigned long long count;
	usigned long long capacity;
	usigned long long options;
	usigned long long mutations;
}

+ pointerFunctions
+ _initBlock
+ getItem:
+ removeAllItems
+ insertKnownAbsentItem:
+ getKeys:count:
+ initWithPointerFunctions:capacity:
+ insertItem:
+ raiseCountUnderflowException
+ rehashAround:
+ assign:key:
+ hashGrow
+ rehash
+ dealloc
+ initWithCoder:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ init
+ addObject:
+ copy
+ isEqual:
+ hash
+ description
+ classForCoder
+ objectEnumerator
+ allObjects
+ initWithOptions:capacity:
+ removeItem:
+ finalize
- pointerFunctions
- _initBlock
- getItem:
- removeAllItems
- insertKnownAbsentItem:
- getKeys:count:
- initWithPointerFunctions:capacity:
- insertItem:
- raiseCountUnderflowException
- rehashAround:
- assign:key:
- hashGrow
- rehash
- dealloc
- initWithCoder:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- init
- addObject:
- copy
- isEqual:
- hash
- description
- classForCoder
- objectEnumerator
- allObjects
- initWithOptions:capacity:
- removeItem:
- finalize
@end
