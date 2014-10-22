@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet
{
	pointer _ivar;
}

+ setSet:
+ _proxyInitWithContainer:getter:
+ _proxyNonGCFinalize
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
