@interface _GEONSURLConnectionWaiter : NSObject
{
	id _conn;
	id _callback;
	id _data;
	id _response;
}

+ callback
+ setCallback:
+ dealloc
+ connection:didFailWithError:
+ connection:didReceiveData:
+ connectionDidFinishLoading:
+ connection:didReceiveResponse:
+ setConn:
+ conn
- callback
- setCallback:
- dealloc
- connection:didFailWithError:
- connection:didReceiveData:
- connectionDidFinishLoading:
- connection:didReceiveResponse:
- setConn:
- conn
@end
