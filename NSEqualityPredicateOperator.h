@interface NSEqualityPredicateOperator : NSPredicateOperator
{
	BOOL _negate;
	usigned long long _options;
}

+ isNegation
+ initWithOperatorType:modifier:negate:options:
+ predicateFormat
+ performPrimitiveOperationUsingObject:andObject:
+ _setOptions:
+ initWithOperatorType:modifier:negate:
+ setNegation:
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ copyWithZone:
+ options
- isNegation
- initWithOperatorType:modifier:negate:options:
- predicateFormat
- performPrimitiveOperationUsingObject:andObject:
- _setOptions:
- initWithOperatorType:modifier:negate:
- setNegation:
- initWithCoder:
- encodeWithCoder:
- isEqual:
- copyWithZone:
- options
@end
