@interface VSGenericUpdateEndpoint : NSObject
{
	id _endpoint;
	id _queue;
	id _listener;
	id _handler;
}

+ setListener:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ invalidate
+ setHandler:
+ handler
+ endpoint
+ listener:shouldAcceptNewConnection:
+ queue
+ setQueue:
+ listener
+ setEndpoint:
+ .cxx_destruct
- setListener:
- dealloc
- initWithCoder:
- encodeWithCoder:
- invalidate
- setHandler:
- handler
- endpoint
- listener:shouldAcceptNewConnection:
- queue
- setQueue:
- listener
- setEndpoint:
- .cxx_destruct
@end
