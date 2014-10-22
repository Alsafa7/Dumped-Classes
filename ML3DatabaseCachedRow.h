@interface ML3DatabaseCachedRow : ML3DatabaseRow
{
	id _arrayRepresentation;
}

+ dictionaryRepresentation
+ columnCount
+ initWithArray:
+ valueForColumnIndex:
+ stringForColumnIndex:
+ numberForColumnIndex:
+ intForColumnIndex:
+ int64ForColumnIndex:
+ dataForColumnIndex:
+ arrayRepresentation
+ doubleForColumnIndex:
+ getBlobBytes:outLength:forColumnIndex:
+ initWithParentResult:
+ valueForColumnName:
+ dataForColumnName:
+ doubleForColumnName:
+ intForColumnName:
+ int64ForColumnName:
+ stringForColumnName:
+ numberForColumnName:
+ getBlobBytes:outLength:forColumnName:
+ _numberOrZeroForColumnIndex:
+ .cxx_destruct
- dictionaryRepresentation
- columnCount
- initWithArray:
- valueForColumnIndex:
- stringForColumnIndex:
- numberForColumnIndex:
- intForColumnIndex:
- int64ForColumnIndex:
- dataForColumnIndex:
- arrayRepresentation
- doubleForColumnIndex:
- getBlobBytes:outLength:forColumnIndex:
- initWithParentResult:
- valueForColumnName:
- dataForColumnName:
- doubleForColumnName:
- intForColumnName:
- int64ForColumnName:
- stringForColumnName:
- numberForColumnName:
- getBlobBytes:outLength:forColumnName:
- _numberOrZeroForColumnIndex:
- .cxx_destruct
@end
