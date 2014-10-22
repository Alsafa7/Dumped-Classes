@interface NSPredicateOperator : NSObject
{
	usigned long long _operatorType;
	usigned long long _modifier;
}

+ operatorType
+ acceptVisitor:flags:
+ modifier
+ initWithOperatorType:modifier:options:
+ predicateFormat
+ performPrimitiveOperationUsingObject:andObject:
+ performOperationUsingObject:andObject:
+ _setOptions:
+ initWithOperatorType:modifier:
+ initWithOperatorType:
+ _setModifier:
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ selector
+ options
+ symbol
- operatorType
- acceptVisitor:flags:
- modifier
- initWithOperatorType:modifier:options:
- predicateFormat
- performPrimitiveOperationUsingObject:andObject:
- performOperationUsingObject:andObject:
- _setOptions:
- initWithOperatorType:modifier:
- initWithOperatorType:
- _setModifier:
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- selector
- options
- symbol
@end
