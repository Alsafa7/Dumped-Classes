@interface MFMessageURLConnectionDelegate : NSObject
{
	id _responseBody;
	BOOL _done;
	id _error;
	id _response;
}

+ dealloc
+ connection:didFailWithError:
+ connection:didReceiveData:
+ connectionDidFinishLoading:
+ connection:didReceiveResponse:
- dealloc
- connection:didFailWithError:
- connection:didReceiveData:
- connectionDidFinishLoading:
- connection:didReceiveResponse:
@end
