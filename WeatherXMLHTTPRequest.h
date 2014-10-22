@interface WeatherXMLHTTPRequest : NSObject
{
	id _request;
	id _connection;
	id _rawData;
}

+ dealloc
+ init
+ cancel
+ loadRequest:
+ isLoading
+ connection:didFailWithError:
+ connection:didReceiveData:
+ connectionDidFinishLoading:
+ connection
+ failWithError:
+ aggregateDictionaryDomain
+ willProcessDocument
+ processDocument:
+ didProcessDocument
+ _forceRawDataDump:
- dealloc
- init
- cancel
- loadRequest:
- isLoading
- connection:didFailWithError:
- connection:didReceiveData:
- connectionDidFinishLoading:
- connection
- failWithError:
- aggregateDictionaryDomain
- willProcessDocument
- processDocument:
- didProcessDocument
- _forceRawDataDump:
@end
