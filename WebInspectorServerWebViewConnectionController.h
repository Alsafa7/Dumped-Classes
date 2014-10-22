@interface WebInspectorServerWebViewConnectionController : NSObject
{
	id _server;
	id _openConnections;
	BOOL _hasScheduledPush;
}

+ dealloc
+ initWithServer:
+ closeAllConnections
+ _receivedData:
+ pushListing
+ receivedMessage:userInfo:
+ connectionClosing:
+ sendMessageToFrontend:userInfo:
+ _listingForWebView:pageId:registry:
+ _pushListing:
+ pushListing:
+ _receivedSetup:
+ _receivedDidClose:
+ _receivedGetListing:
+ _receivedIndicate:
+ _receivedConnectionDied:
- dealloc
- initWithServer:
- closeAllConnections
- _receivedData:
- pushListing
- receivedMessage:userInfo:
- connectionClosing:
- sendMessageToFrontend:userInfo:
- _listingForWebView:pageId:registry:
- _pushListing:
- pushListing:
- _receivedSetup:
- _receivedDidClose:
- _receivedGetListing:
- _receivedIndicate:
- _receivedConnectionDied:
@end
