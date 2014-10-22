@interface GKRequestIdentifier : NSObject
{
	usigned long long _savedHash;
	SEL _selector;
	id _arguments;
}

+ _argumentsForInvocation:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ initWithInvocation:
- _argumentsForInvocation:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- initWithInvocation:
@end
