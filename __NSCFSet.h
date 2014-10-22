@interface __NSCFSet : NSMutableSet
{
	Array _cfinfo;
	unsigned int _rc;
	Array _bits;
	pointer _callbacks;
	pointer _values;
}

+ getObjects:
+ _trueCount
+ release
+ retain
+ removeObject:
+ countByEnumeratingWithState:objects:count:
+ count
+ addObject:
+ removeAllObjects
+ isEqual:
+ hash
+ retainCount
+ copyWithZone:
+ classForCoder
+ objectEnumerator
+ _tryRetain
+ _isDeallocating
+ member:
+ mutableCopyWithZone:
+ finalize
- getObjects:
- _trueCount
- release
- retain
- removeObject:
- countByEnumeratingWithState:objects:count:
- count
- addObject:
- removeAllObjects
- isEqual:
- hash
- retainCount
- copyWithZone:
- classForCoder
- objectEnumerator
- _tryRetain
- _isDeallocating
- member:
- mutableCopyWithZone:
- finalize
@end
