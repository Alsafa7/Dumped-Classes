@interface NSInvocation : NSObject
{
	pointer _frame;
	pointer _retdata;
	id _signature;
	id _container;
	unsigned char _retainedArgs;
	Array _reserved;
}

+ _webkit_invokeAndHandleException:
+ _firstXPCProxyReplyHandlerArgumentIndex
+ userInfo
+ setUserInfo:
+ debugDescription
+ wantsReturnValue
+ argumentsRetained
+ _addAttachedObject:
+ invokeUsingIMP:
+ invokeSuper
+ dealloc
+ init
+ setArgument:atIndex:
+ invoke
+ setTarget:
+ setSelector:
+ copyWithZone:
+ target
+ retainArguments
+ selector
+ invokeWithTarget:
+ getReturnValue:
+ methodSignature
+ getArgument:atIndex:
+ setReturnValue:
- _webkit_invokeAndHandleException:
- _firstXPCProxyReplyHandlerArgumentIndex
- userInfo
- setUserInfo:
- debugDescription
- wantsReturnValue
- argumentsRetained
- _addAttachedObject:
- invokeUsingIMP:
- invokeSuper
- dealloc
- init
- setArgument:atIndex:
- invoke
- setTarget:
- setSelector:
- copyWithZone:
- target
- retainArguments
- selector
- invokeWithTarget:
- getReturnValue:
- methodSignature
- getArgument:atIndex:
- setReturnValue:
@end
