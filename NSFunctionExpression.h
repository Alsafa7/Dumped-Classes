@interface NSFunctionExpression : NSExpression
{
	id _operand;
	SEL _selector;
	id _arguments;
}

+ minimalFormInContext:
+ _mapKVCOperatorsToFunctionsInContext:
+ allowEvaluation
+ operand
+ initWithExpressionType:operand:selector:argumentArray:
+ acceptVisitor:flags:
+ expressionValueWithObject:context:
+ predicateFormat
+ _expressionWithSubstitutionVariables:
+ function
+ initWithTarget:selectorName:arguments:
+ initWithSelector:argumentArray:
+ _shouldUseParensWithDescription
+ binaryOperatorForSelector
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ arguments
+ copyWithZone:
+ selector
- minimalFormInContext:
- _mapKVCOperatorsToFunctionsInContext:
- allowEvaluation
- operand
- initWithExpressionType:operand:selector:argumentArray:
- acceptVisitor:flags:
- expressionValueWithObject:context:
- predicateFormat
- _expressionWithSubstitutionVariables:
- function
- initWithTarget:selectorName:arguments:
- initWithSelector:argumentArray:
- _shouldUseParensWithDescription
- binaryOperatorForSelector
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- arguments
- copyWithZone:
- selector
@end
