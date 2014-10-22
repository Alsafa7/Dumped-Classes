@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject
{
	id _errorBlock;
}

+ errorBlock
+ _initWithConnection:proxyNumber:interface:error:
+ setErrorBlock:
+ dealloc
+ forwardInvocation:
- errorBlock
- _initWithConnection:proxyNumber:interface:error:
- setErrorBlock:
- dealloc
- forwardInvocation:
@end
