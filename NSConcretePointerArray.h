@interface NSConcretePointerArray : NSPointerArray
{
	struct slice;
	usigned long long count;
	usigned long long capacity;
	usigned long long options;
	usigned long long mutations;
	BOOL needsCompaction;
}

+ initWithPointerFunctions:
+ pointerFunctions
+ pointerAtIndex:
+ addPointer:
+ removePointerAtIndex:
+ insertPointer:atIndex:
+ replacePointerAtIndex:withPointer:
+ _initBlock
+ arrayGrow:
+ _markNeedsCompaction
+ indexOfPointer:
+ removePointer:
+ dealloc
+ initWithCoder:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ init
+ isEqual:
+ hash
+ copyWithZone:
+ classForCoder
+ setCount:
+ initWithOptions:
+ finalize
+ compact
- initWithPointerFunctions:
- pointerFunctions
- pointerAtIndex:
- addPointer:
- removePointerAtIndex:
- insertPointer:atIndex:
- replacePointerAtIndex:withPointer:
- _initBlock
- arrayGrow:
- _markNeedsCompaction
- indexOfPointer:
- removePointer:
- dealloc
- initWithCoder:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- init
- isEqual:
- hash
- copyWithZone:
- classForCoder
- setCount:
- initWithOptions:
- finalize
- compact
@end
