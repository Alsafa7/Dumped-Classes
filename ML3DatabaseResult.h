@interface ML3DatabaseResult : NSObject
{
	id _statement;
	id _columnNameIndexMap;
	usigned long long _limitIndex;
	id _limitProperty;
	long long _limitValue;
}

+ dealloc
+ init
+ rows
+ int64ValueForFirstRowAndColumn
+ enumerateRowsWithBlock:
+ hasAtLeastOneRow
+ objectForFirstRowAndColumn
+ stringValueForFirstRowAndColumn
+ limitValue
+ indexForColumnName:
+ setLimitProperty:
+ setLimitValue:
+ columnNameIndexMap
+ initWithStatement:
+ setLimitProperty:limitValue:
+ _statement
+ limitProperty
+ .cxx_destruct
- dealloc
- init
- rows
- int64ValueForFirstRowAndColumn
- enumerateRowsWithBlock:
- hasAtLeastOneRow
- objectForFirstRowAndColumn
- stringValueForFirstRowAndColumn
- limitValue
- indexForColumnName:
- setLimitProperty:
- setLimitValue:
- columnNameIndexMap
- initWithStatement:
- setLimitProperty:limitValue:
- _statement
- limitProperty
- .cxx_destruct
@end
