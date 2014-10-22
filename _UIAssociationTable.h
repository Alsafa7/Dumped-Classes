@interface _UIAssociationTable : NSObject
{
	id _leftToRightHashTables;
	id _rightToLeftHashTables;
}

+ dealloc
+ description
+ isEmpty
+ initWithLeftValueOptions:rightValueOptions:
+ rightValueEnumerableForLeftValue:
+ registerAssociationWithLeftValue:rightValue:
+ unregisterAssociationWithLeftValue:rightValue:
+ hasRightValuesForLeftValue:
+ leftValuesForRightValue:
+ hasLeftValuesForRightValue:
+ leftValueEnumerable
+ leftValues
+ rightValues
+ rightValueEnumerable
+ rightValuesForLeftValue:
+ leftValueEnumerableForRightValue:
- dealloc
- description
- isEmpty
- initWithLeftValueOptions:rightValueOptions:
- rightValueEnumerableForLeftValue:
- registerAssociationWithLeftValue:rightValue:
- unregisterAssociationWithLeftValue:rightValue:
- hasRightValuesForLeftValue:
- leftValuesForRightValue:
- hasLeftValuesForRightValue:
- leftValueEnumerable
- leftValues
- rightValues
- rightValueEnumerable
- rightValuesForLeftValue:
- leftValueEnumerableForRightValue:
@end
