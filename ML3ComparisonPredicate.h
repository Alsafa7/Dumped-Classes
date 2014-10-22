@interface ML3ComparisonPredicate : ML3PropertyPredicate
{
	id _value;
	id _transformFunction;
	int _comparison;
	BOOL _caseInsensitive;
	id _treatNullAsString;
}

+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ setValue:
+ value
+ appendSQLToMutableString:entityClass:
+ databaseStatementParameters
+ comparison
+ setComparison:
+ setCaseInsensitive:
+ setTreatNullAsString:
+ setTransformFunction:
+ caseInsensitive
+ treatNullAsString
+ transformFunction
+ operator
+ valueToBindForOperation:
+ initWithProperty:value:comparison:caseInsensitive:transformFunction:treatNullAsString:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- setValue:
- value
- appendSQLToMutableString:entityClass:
- databaseStatementParameters
- comparison
- setComparison:
- setCaseInsensitive:
- setTreatNullAsString:
- setTransformFunction:
- caseInsensitive
- treatNullAsString
- transformFunction
- operator
- valueToBindForOperation:
- initWithProperty:value:comparison:caseInsensitive:transformFunction:treatNullAsString:
- .cxx_destruct
@end
