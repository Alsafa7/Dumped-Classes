@interface SSProtocolCondition : NSObject
{
	long long _operator;
	id _value;
}

+ dealloc
+ initWithDictionary:
+ evaluateWithContext:
- dealloc
- initWithDictionary:
- evaluateWithContext:
@end
