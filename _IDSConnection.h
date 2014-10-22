@interface _IDSConnection : NSObject
{
	id _messageContext;
	id _delegateContext;
	id _delegateToInfo;
	id _account;
	id _commands;
	id _serviceToken;
	id _pendingSends;
	unsigned int _delegateCapabilities;
}

+ dealloc
+ isActive
+ addDelegate:queue:
+ requestKeepAlive
+ daemonDisconnected
+ messageReceived:withGUID:withPayload:forTopic:fromID:
+ messageIdentifier:updatedWithResponseCode:error:lastCall:
+ _setTemporaryMessageContext:
+ _callDelegatesWithBlock:
+ initWithAccount:commands:delegateContext:
+ sendMessage:toDestinations:priority:options:identifier:error:
+ account:isActiveChanged:
+ account:devicesChanged:
+ setDelegateCapabilities:
+ sendServerMessage:command:
+ account
+ _connect
+ removeDelegate:
- dealloc
- isActive
- addDelegate:queue:
- requestKeepAlive
- daemonDisconnected
- messageReceived:withGUID:withPayload:forTopic:fromID:
- messageIdentifier:updatedWithResponseCode:error:lastCall:
- _setTemporaryMessageContext:
- _callDelegatesWithBlock:
- initWithAccount:commands:delegateContext:
- sendMessage:toDestinations:priority:options:identifier:error:
- account:isActiveChanged:
- account:devicesChanged:
- setDelegateCapabilities:
- sendServerMessage:command:
- account
- _connect
- removeDelegate:
@end
