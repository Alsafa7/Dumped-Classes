@interface SSRequest : NSObject
{
	long long _backgroundTaskIdentifier;
	BOOL _cancelAfterTaskExpiration;
	id _delegate;
	id _dispatchQueue;
	id _requestConnection;
	id _responseConnection;
}

+ _endBackgroundTask
+ dealloc
+ setDelegate:
+ init
+ delegate
+ cancel
+ start
+ disconnect
+ _shutdownRequest
+ _startWithMessageID:messageBlock:
+ startWithCompletionBlock:
+ _initSSRequest
+ _shutdownRequestWithMessageID:
+ __beginBackgroundTask
+ __endBackgroundTask
+ setShouldCancelAfterTaskExpiration:
+ shouldCancelAfterTaskExpiration
+ _beginBackgroundTask
- _endBackgroundTask
- dealloc
- setDelegate:
- init
- delegate
- cancel
- start
- disconnect
- _shutdownRequest
- _startWithMessageID:messageBlock:
- startWithCompletionBlock:
- _initSSRequest
- _shutdownRequestWithMessageID:
- __beginBackgroundTask
- __endBackgroundTask
- setShouldCancelAfterTaskExpiration:
- shouldCancelAfterTaskExpiration
- _beginBackgroundTask
@end
