@interface ML3DatabaseRow : NSObject
{
	id _parentResult;
}

+ init
+ objectForKeyedSubscript:
+ objectAtIndexedSubscript:
+ dictionaryRepresentation
+ columnCount
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
+ parentResult
+ .cxx_destruct
- init
- objectForKeyedSubscript:
- objectAtIndexedSubscript:
- dictionaryRepresentation
- columnCount
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
- parentResult
- .cxx_destruct
@end
