@interface RadioRequest : NSObject
{
	BOOL _cachedResponse;
	long long _errorCode;
	id _queue;
	id _requestContext;
	long long _status;
	id _unparsedResponseDictionary;
	BOOL _asynchronousBackgroundRequest;
}

+ requestContext
+ setRequestContext:
+ dealloc
+ init
+ cancel
+ status
+ setStatus:
+ isAsynchronousBackgroundRequest
+ _loadRadioURLBagWithCompletionHandler:
+ _loadRadioURLBagAndAllowRetry:withCompletionHandler:
+ setUnparsedResponseDictionary:
+ unparsedResponseDictionary
+ setAsynchronousBackgroundRequest:
+ setCachedResponse:
+ isCachedResponse
+ .cxx_destruct
+ errorCode
+ setErrorCode:
- requestContext
- setRequestContext:
- dealloc
- init
- cancel
- status
- setStatus:
- isAsynchronousBackgroundRequest
- _loadRadioURLBagWithCompletionHandler:
- _loadRadioURLBagAndAllowRetry:withCompletionHandler:
- setUnparsedResponseDictionary:
- unparsedResponseDictionary
- setAsynchronousBackgroundRequest:
- setCachedResponse:
- isCachedResponse
- .cxx_destruct
- errorCode
- setErrorCode:
@end
