@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray
{
	id _valueGetter;
	id _valueSetter;
	BOOL _treatNilValuesLikeEmptyArrays;
	Array _padding;
}

+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
+ _nonNilArrayValueWithSelector:
+ _raiseNilValueExceptionWithSelector:
+ _createNonNilMutableArrayValueWithSelector:
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
- _nonNilArrayValueWithSelector:
- _raiseNilValueExceptionWithSelector:
- _createNonNilMutableArrayValueWithSelector:
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
