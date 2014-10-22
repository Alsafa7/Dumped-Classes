@interface NSInPredicateOperator : NSPredicateOperator
{
	usigned long long _flags;
	id _stringVersion;
}

+ minimalFormInContext:ofPredicate:
+ initWithOperatorType:modifier:options:
+ performPrimitiveOperationUsingObject:andObject:
+ _setOptions:
+ stringVersion
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ copyWithZone:
+ options
+ symbol
+ flags
- minimalFormInContext:ofPredicate:
- initWithOperatorType:modifier:options:
- performPrimitiveOperationUsingObject:andObject:
- _setOptions:
- stringVersion
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- copyWithZone:
- options
- symbol
- flags
@end
