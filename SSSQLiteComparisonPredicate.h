@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate
{
	long long _comparisonType;
	id _value;
}

+ comparisonType
+ dealloc
+ isEqual:
+ hash
+ copyWithZone:
+ value
+ SQLForEntityClass:
+ bindToStatement:bindingIndex:
+ _comparisonTypeString
- comparisonType
- dealloc
- isEqual:
- hash
- copyWithZone:
- value
- SQLForEntityClass:
- bindToStatement:bindingIndex:
- _comparisonTypeString
@end
