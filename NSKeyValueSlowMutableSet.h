@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet
{
	id _valueGetter;
	id _valueSetter;
	BOOL _treatNilValuesLikeEmptySets;
	Array _padding;
}

+ setSet:
+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
+ _raiseNilValueExceptionWithSelector:
+ _setValueWithSelector:
+ _createMutableSetValueWithSelector:
+ removeObject:
+ count
+ addObject:
+ removeAllObjects
+ addObjectsFromArray:
+ intersectSet:
+ minusSet:
+ objectEnumerator
+ unionSet:
+ member:
- setSet:
- _proxyInitWithContainer:getter:
- _proxyNonGCFinalize
- _raiseNilValueExceptionWithSelector:
- _setValueWithSelector:
- _createMutableSetValueWithSelector:
- removeObject:
- count
- addObject:
- removeAllObjects
- addObjectsFromArray:
- intersectSet:
- minusSet:
- objectEnumerator
- unionSet:
- member:
@end
