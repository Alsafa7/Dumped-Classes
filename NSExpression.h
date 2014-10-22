@interface NSExpression : NSObject
{
	struct _expressionFlags;
	unsigned int reserved;
	usigned long long _expressionType;
}

+ minimalFormInContext:
+ rightExpression
+ leftExpression
+ expressionType
+ constantValue
+ allowEvaluation
+ operand
+ collection
+ acceptVisitor:flags:
+ expressionValueWithObject:context:
+ initWithExpressionType:
+ predicateFormat
+ _expressionWithSubstitutionVariables:
+ function
+ trueExpression
+ falseExpression
+ _allowsEvaluation
+ subexpression
+ expressionBlock
+ _shouldUseParensWithDescription
+ initWithCoder:
+ encodeWithCoder:
+ description
+ arguments
+ copyWithZone:
+ keyPath
+ selector
+ variable
+ predicate
- minimalFormInContext:
- rightExpression
- leftExpression
- expressionType
- constantValue
- allowEvaluation
- operand
- collection
- acceptVisitor:flags:
- expressionValueWithObject:context:
- initWithExpressionType:
- predicateFormat
- _expressionWithSubstitutionVariables:
- function
- trueExpression
- falseExpression
- _allowsEvaluation
- subexpression
- expressionBlock
- _shouldUseParensWithDescription
- initWithCoder:
- encodeWithCoder:
- description
- arguments
- copyWithZone:
- keyPath
- selector
- variable
- predicate
@end
