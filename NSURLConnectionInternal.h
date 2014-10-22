@interface NSURLConnectionInternal : NSObject
{
	id _connection;
	id _delegateQueue;
	id _url;
	id _originalRequest;
	id _currentRequest;
	id _delegate;
	id _connectionProperties;
	BOOL _connectionActive;
}

+ _withActiveConnectionAndDelegate:
+ initWithInfo:
+ _setDelegateQueue:
+ setConnectionActive:
+ _withConnectionAndDelegate:
+ invokeForDelegate:
+ _withConnectionDisconnectFromConnection
+ _withConnectionAndDelegate:onlyActive:
+ _connectionProperties
+ originalRequest
+ currentRequest
+ isConnectionActive
+ dealloc
+ useCredential:forAuthenticationChallenge:
+ _invalidate
+ continueWithoutCredentialForAuthenticationChallenge:
+ cancelAuthenticationChallenge:
+ performDefaultHandlingForAuthenticationChallenge:
+ rejectProtectionSpaceAndContinueWithChallenge:
- _withActiveConnectionAndDelegate:
- initWithInfo:
- _setDelegateQueue:
- setConnectionActive:
- _withConnectionAndDelegate:
- invokeForDelegate:
- _withConnectionDisconnectFromConnection
- _withConnectionAndDelegate:onlyActive:
- _connectionProperties
- originalRequest
- currentRequest
- isConnectionActive
- dealloc
- useCredential:forAuthenticationChallenge:
- _invalidate
- continueWithoutCredentialForAuthenticationChallenge:
- cancelAuthenticationChallenge:
- performDefaultHandlingForAuthenticationChallenge:
- rejectProtectionSpaceAndContinueWithChallenge:
@end
