@interface NSComparisonPredicateOperator : NSPredicateOperator
{
	usigned long long _variant;
	usigned long long _options;
}

+ minimalFormInContext:ofPredicate:
+ predicateFormat
+ performPrimitiveOperationUsingObject:andObject:
+ initWithOperatorType:modifier:variant:
+ initWithOperatorType:modifier:variant:options:
+ variant
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ copyWithZone:
+ options
- minimalFormInContext:ofPredicate:
- predicateFormat
- performPrimitiveOperationUsingObject:andObject:
- initWithOperatorType:modifier:variant:
- initWithOperatorType:modifier:variant:options:
- variant
- initWithCoder:
- encodeWithCoder:
- isEqual:
- copyWithZone:
- options
@end
