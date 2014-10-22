@interface AARequester : NSOperation
{
	id _request;
	id _response;
	id _urlConnection;
	id _handler;
	id _data;
	id _httpResponse;
	Class _responseClass;
	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _canceled;
	BOOL _isCanceled;
}

+ setFinished:
+ isCanceled
+ cancel
+ start
+ connection:didFailWithError:
+ connection:didReceiveData:
+ connectionDidFinishLoading:
+ connection:didReceiveResponse:
+ isFinished
+ isExecuting
+ initWithRequest:handler:
+ _callHandler
+ setExecuting:
+ setCanceled:
+ .cxx_destruct
+ connection:canAuthenticateAgainstProtectionSpace:
+ connection:didReceiveAuthenticationChallenge:
- setFinished:
- isCanceled
- cancel
- start
- connection:didFailWithError:
- connection:didReceiveData:
- connectionDidFinishLoading:
- connection:didReceiveResponse:
- isFinished
- isExecuting
- initWithRequest:handler:
- _callHandler
- setExecuting:
- setCanceled:
- .cxx_destruct
- connection:canAuthenticateAgainstProtectionSpace:
- connection:didReceiveAuthenticationChallenge:
@end
