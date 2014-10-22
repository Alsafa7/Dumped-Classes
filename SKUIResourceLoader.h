@interface SKUIResourceLoader : NSObject
{
	id _clientContext;
	id _delegate;
	id _operationQueue;
	id _operationsByRequestID;
	id _resourcesByRequestID;
}

+ operationQueue
+ isIdle
+ setDelegate:
+ init
+ delegate
+ clientContext
+ initWithOperationQueue:clientContext:
+ loadResourceWithRequest:reason:
+ _finishLoadForRequest:withResource:
+ _sendDidIdleIfNecessary
+ addResource:forRequestIdentifier:
+ cachedResourceForRequestIdentifier:
+ cancelRequestWithIdentifier:
+ removeAllCachedResources
+ setReason:forRequestWithIdentifier:
+ .cxx_destruct
+ cancelAllRequests
+ initWithOperationQueue:
- operationQueue
- isIdle
- setDelegate:
- init
- delegate
- clientContext
- initWithOperationQueue:clientContext:
- loadResourceWithRequest:reason:
- _finishLoadForRequest:withResource:
- _sendDidIdleIfNecessary
- addResource:forRequestIdentifier:
- cachedResourceForRequestIdentifier:
- cancelRequestWithIdentifier:
- removeAllCachedResources
- setReason:forRequestWithIdentifier:
- .cxx_destruct
- cancelAllRequests
- initWithOperationQueue:
@end
