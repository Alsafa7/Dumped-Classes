@interface NSSharedKeySet : NSObject
{
	char *_g;
	unsigned char _select;
	pointer _rankTable;
	double _c;
	unsigned int _M;
	unsigned int _factor;
	unsigned int _numKey;
	Array _seeds;
	pointer _keys;
	id _subSharedKeySet;
}

+ keyAtIndex:
+ initWithKeys:count:
+ createSubclassCode:interface:implementation:
+ maximumIndex
+ keySetCount
+ dealloc
+ initWithCoder:
+ countByEnumeratingWithState:objects:count:
+ encodeWithCoder:
+ count
+ init
+ allKeys
+ copyWithZone:
+ isEmpty
+ indexForKey:
+ finalize
- keyAtIndex:
- initWithKeys:count:
- createSubclassCode:interface:implementation:
- maximumIndex
- keySetCount
- dealloc
- initWithCoder:
- countByEnumeratingWithState:objects:count:
- encodeWithCoder:
- count
- init
- allKeys
- copyWithZone:
- isEmpty
- indexForKey:
- finalize
@end
