@interface _NSXPCConnectionReplyInfo : NSObject
{
	id _replyBlock;
	id _errorBlock;
	id _cleanupBlock;
	SEL _selector;
	id _interface;
	id _userInfo;
	usigned long long _proxyNumber;
}

+ proxyNumber
+ replyBlock
+ cleanupBlock
+ errorBlock
+ setReplyBlock:
+ setErrorBlock:
+ setCleanupBlock:
+ setProxyNumber:
+ dealloc
+ setSelector:
+ userInfo
+ selector
+ setUserInfo:
+ interface
+ setInterface:
- proxyNumber
- replyBlock
- cleanupBlock
- errorBlock
- setReplyBlock:
- setErrorBlock:
- setCleanupBlock:
- setProxyNumber:
- dealloc
- setSelector:
- userInfo
- selector
- setUserInfo:
- interface
- setInterface:
@end
