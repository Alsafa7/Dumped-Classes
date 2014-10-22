@interface AVQueue : NSObject
{
	id _mutex;
	id _items;
	pointer _reserved;
	int _isBeingModifiedCount;
}

+ removeAllItems
+ itemCount
+ dealloc
+ init
+ removeItem:
+ initWithArray:error:
+ _instantiateItem
+ appendItemsFromArray:error:
+ appendItem:error:
+ insertItem:atIndex:error:
+ itemWasAdded:atIndex:
+ itemWillBeRemoved:atIndex:
+ indexOfItem:
+ itemAfterItem:
+ insertItem:afterItem:error:
+ removeItemsInRange:
+ isBeingModified
+ removeItemAtIndex:
+ itemAtIndex:
+ initWithError:
- removeAllItems
- itemCount
- dealloc
- init
- removeItem:
- initWithArray:error:
- _instantiateItem
- appendItemsFromArray:error:
- appendItem:error:
- insertItem:atIndex:error:
- itemWasAdded:atIndex:
- itemWillBeRemoved:atIndex:
- indexOfItem:
- itemAfterItem:
- insertItem:afterItem:error:
- removeItemsInRange:
- isBeingModified
- removeItemAtIndex:
- itemAtIndex:
- initWithError:
@end
