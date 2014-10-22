@interface NSRLEArray : NSObject
{
	pointer theList;
}

+ objectAtIndex:effectiveRange:
+ objectAtIndex:effectiveRange:runIndex:
+ objectAtRunIndex:length:
+ initWithRefCountedRunArray:
+ _makeNewListFrom:
+ dealloc
+ count
+ init
+ description
+ copyWithZone:
+ mutableCopyWithZone:
+ finalize
- objectAtIndex:effectiveRange:
- objectAtIndex:effectiveRange:runIndex:
- objectAtRunIndex:length:
- initWithRefCountedRunArray:
- _makeNewListFrom:
- dealloc
- count
- init
- description
- copyWithZone:
- mutableCopyWithZone:
- finalize
@end
