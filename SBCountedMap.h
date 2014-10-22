@interface SBCountedMap : NSObject
{
	id _countedKeys;
	id _map;
}

+ checkinValue:
+ checkoutValueForKey:creationBlock:
+ checkinValues:
+ dealloc
+ init
- checkinValue:
- checkoutValueForKey:creationBlock:
- checkinValues:
- dealloc
- init
@end
