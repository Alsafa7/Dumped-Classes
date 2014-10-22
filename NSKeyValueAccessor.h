@interface NSKeyValueAccessor : NSObject
{
	id _containerClassID;
	id _key;
	pointer _implementation;
	SEL _selector;
	usigned long long _extraArgumentCount;
	pointer _extraArgument1;
	pointer _extraArgument2;
	pointer _extraArgument3;
}

+ initWithContainerClassID:key:implementation:selector:extraArguments:count:
+ containerClassID
+ extraArgumentCount
+ extraArgument1
+ extraArgument2
+ dealloc
+ selector
+ key
- initWithContainerClassID:key:implementation:selector:extraArguments:count:
- containerClassID
- extraArgumentCount
- extraArgument1
- extraArgument2
- dealloc
- selector
- key
@end
