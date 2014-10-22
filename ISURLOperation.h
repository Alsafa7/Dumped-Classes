@interface ISURLOperation : ISOperation
{
	id _activeURLRequest;
	id _authenticationContext;
	id _connection;
	id _dataBuffer;
	id _dataProvider;
	long long _networkRetryCount;
	id _redirectURLs;
	id _requestProperties;
	id _response;
	BOOL _shouldSetCookies;
	BOOL _usesPrivateCookieStore;
	id _performanceMetrics;
	BOOL _loadsHTTPFailures;
	BOOL _uploadProgressRequested;
}

+ _updateProgress
+ setResponse:
+ connection:willSendRequest:redirectResponse:
+ connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:
+ connection:needNewBodyStream:
+ setRequest:
+ setRequestProperties:
+ dealloc
+ init
+ _run
+ run
+ response
+ request
+ connection:didFailWithError:
+ connection:didReceiveData:
+ connectionDidFinishLoading:
+ connection:didReceiveResponse:
+ setDataProvider:
+ dataProvider
+ handleResponse:
+ _stopIfCancelled
+ connection:willSendRequestForAuthenticationChallenge:
+ _copyAuthenticationContext
+ _activeURL
+ _sanitizedURLForURL:
+ _requestProperties
+ _copyQueryStringDictionaryForRedirect:
+ _setActiveURLRequest:
+ _usesPrivateCookieStore
+ _accountIdentifier
+ _copyAcceptLanguageString
+ _sanitizedDescriptionForObject:
+ _errorWithDefaultStringsForError:
+ _stopConnection
+ _handleReceivedData:
+ _handleReceivedResponse:
+ _sanitizedStringForString:
+ shouldFollowRedirectWithRequest:returningError:
+ _shouldSetCookies
+ _handleRedirectRequest:response:
+ isUploadProgressRequested
+ _performDefaultHandlingForAuthenticationChallenge:
+ _isTrustExtendedValidation:
+ _handleFinishedLoading
+ _decodedDataForData:
+ _logResponseBody:
+ _sendOutputToDelegate:
+ _errorWithDomain:code:
+ handleRedirectFromDataProvider:error:
+ _retry
+ _sendResponseToDelegate:
+ _loadsHTTPFailures
+ _sendContentLengthToDelegate:
+ _validateContentLength:error:
+ _sendRequestToDelegate:
+ _logRequest:
+ _runRequestWithURL:
+ _copyConnectionProperties
+ tracksPerformanceMetrics
+ _setLoadsHTTPFailures:
+ _setShouldSetCookies:
+ _setUsesPrivateCookieStore:
+ setUploadProgressRequested:
+ authenticationContext
+ setAuthenticationContext:
+ setTracksPerformanceMetrics:
+ requestProperties
+ performanceMetrics
+ newRequestWithURL:
- _updateProgress
- setResponse:
- connection:willSendRequest:redirectResponse:
- connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:
- connection:needNewBodyStream:
- setRequest:
- setRequestProperties:
- dealloc
- init
- _run
- run
- response
- request
- connection:didFailWithError:
- connection:didReceiveData:
- connectionDidFinishLoading:
- connection:didReceiveResponse:
- setDataProvider:
- dataProvider
- handleResponse:
- _stopIfCancelled
- connection:willSendRequestForAuthenticationChallenge:
- _copyAuthenticationContext
- _activeURL
- _sanitizedURLForURL:
- _requestProperties
- _copyQueryStringDictionaryForRedirect:
- _setActiveURLRequest:
- _usesPrivateCookieStore
- _accountIdentifier
- _copyAcceptLanguageString
- _sanitizedDescriptionForObject:
- _errorWithDefaultStringsForError:
- _stopConnection
- _handleReceivedData:
- _handleReceivedResponse:
- _sanitizedStringForString:
- shouldFollowRedirectWithRequest:returningError:
- _shouldSetCookies
- _handleRedirectRequest:response:
- isUploadProgressRequested
- _performDefaultHandlingForAuthenticationChallenge:
- _isTrustExtendedValidation:
- _handleFinishedLoading
- _decodedDataForData:
- _logResponseBody:
- _sendOutputToDelegate:
- _errorWithDomain:code:
- handleRedirectFromDataProvider:error:
- _retry
- _sendResponseToDelegate:
- _loadsHTTPFailures
- _sendContentLengthToDelegate:
- _validateContentLength:error:
- _sendRequestToDelegate:
- _logRequest:
- _runRequestWithURL:
- _copyConnectionProperties
- tracksPerformanceMetrics
- _setLoadsHTTPFailures:
- _setShouldSetCookies:
- _setUsesPrivateCookieStore:
- setUploadProgressRequested:
- authenticationContext
- setAuthenticationContext:
- setTracksPerformanceMetrics:
- requestProperties
- performanceMetrics
- newRequestWithURL:
@end
