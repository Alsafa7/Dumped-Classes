@interface AXIPCServerMessageHandlerContext : NSObject
{
	id _handler;
	id _target;
	SEL _selector;
}

+ initWithHandler:
+ dealloc
+ target
+ selector
+ handler
+ initWithTarget:selector:
- initWithHandler:
- dealloc
- target
- selector
- handler
- initWithTarget:selector:
@end
