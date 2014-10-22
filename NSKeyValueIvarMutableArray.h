@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray
{
	pointer _ivar;
}

+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
+ _raiseNilValueExceptionWithSelector:
+ _nonNilMutableArrayValueWithSelector:
+ count
+ objectAtIndex:
+ addObject:
+ removeLastObject
+ insertObject:atIndex:
+ removeObjectAtIndex:
+ removeObjectsAtIndexes:
+ objectsAtIndexes:
+ getObjects:range:
+ replaceObjectAtIndex:withObject:
+ insertObjects:atIndexes:
+ replaceObjectsAtIndexes:withObjects:
- _proxyInitWithContainer:getter:
- _proxyNonGCFinalize
- _raiseNilValueExceptionWithSelector:
- _nonNilMutableArrayValueWithSelector:
- count
- objectAtIndex:
- addObject:
- removeLastObject
- insertObject:atIndex:
- removeObjectAtIndex:
- removeObjectsAtIndexes:
- objectsAtIndexes:
- getObjects:range:
- replaceObjectAtIndex:withObject:
- insertObjects:atIndexes:
- replaceObjectsAtIndexes:withObjects:
@end
