@interface _NSThreadPerformInfo : NSObject
{
	id target;
	SEL selector;
	id argument;
	id modes;
	id waiter;
	char *signalled;
}

+ dealloc
- dealloc
@end
