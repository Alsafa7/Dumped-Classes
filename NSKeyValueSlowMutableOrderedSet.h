@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet
{
	id _valueGetter;
	id _valueSetter;
	BOOL _treatNilValuesLikeEmptyOrderedSets;
	Array _padding;
}

+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
+ _raiseNilValueExceptionWithSelector:
+ _nonNilOrderedSetValueWithSelector:
+ _createNonNilMutableOrderedSetValueWithSelector:
+ count
+ objectAtIndex:
+ indexOfObject:
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
- _nonNilOrderedSetValueWithSelector:
- _createNonNilMutableOrderedSetValueWithSelector:
- count
- objectAtIndex:
- indexOfObject:
- insertObject:atIndex:
- removeObjectAtIndex:
- removeObjectsAtIndexes:
- objectsAtIndexes:
- getObjects:range:
- replaceObjectAtIndex:withObject:
- insertObjects:atIndexes:
- replaceObjectsAtIndexes:withObjects:
@end
