@interface __NSCFURLSessionConfiguration : NSObject
{
	pointer _legacyStorageSystem;
	BOOL _backgroundSession;
	BOOL _allowsCellularAccess;
	BOOL _discretionary;
	BOOL _sessionSendsLaunchEvents;
	BOOL _HTTPShouldUsePipelining;
	BOOL _HTTPShouldSetCookies;
	BOOL __credStorageSet;
	BOOL __urlCacheSet;
	BOOL __cookieStorageSet;
	BOOL _tasks_created_suspended;
	BOOL _skip_download_unlink;
	BOOL __preventsIdleSleep;
	BOOL __usePipeliningHeuristics;
	BOOL __startSynchronously;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	id _identifier;
	usigned long long _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	usigned long long _networkServiceType;
	id _connectionProxyDictionary;
	usigned long long _HTTPCookieAcceptPolicy;
	id _HTTPAdditionalHeaders;
	long long _HTTPMaximumConnectionsPerHost;
	id _protocolClasses;
	id __credStorage;
	id __urlCache;
	id __cookieStorage;
	id _disposition;
	pointer _HSTSPolicy;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	id __cfurlConnectionProperties;
	id __socketStreamProperties;
	id __contentDispHeadEncFallback;
}

+ skip_download_unlink
+ isBackgroundSession
+ tasks_created_suspended
+ setHSTSPolicy:
+ setConnectionCachePurgeTimeout:
+ setConnectionCacheCellPurgeTimeout:
+ setTasks_created_suspended:
+ setSkip_download_unlink:
+ set_cfurlConnectionProperties:
+ set_socketStreamProperties:
+ initWithDisposition:
+ setBackgroundSession:
+ _credStorage
+ set_credStorage:
+ _credStorageSet
+ set_credStorageSet:
+ _urlCache
+ set_urlCache:
+ _urlCacheSet
+ set_urlCacheSet:
+ set_cookieStorage:
+ _cookieStorageSet
+ set_cookieStorageSet:
+ HSTSPolicy
+ connectionCachePurgeTimeout
+ connectionCacheCellPurgeTimeout
+ _cfurlConnectionProperties
+ _socketStreamProperties
+ _preventsIdleSleep
+ set_preventsIdleSleep:
+ _usePipeliningHeuristics
+ set_usePipeliningHeuristics:
+ _startSynchronously
+ set_startSynchronously:
+ _contentDispHeadEncFallback
+ set_contentDispHeadEncFallback:
+ requestCachePolicy
+ setRequestCachePolicy:
+ timeoutIntervalForRequest
+ setTimeoutIntervalForRequest:
+ timeoutIntervalForResource
+ setTimeoutIntervalForResource:
+ networkServiceType
+ setNetworkServiceType:
+ allowsCellularAccess
+ setAllowsCellularAccess:
+ isDiscretionary
+ setDiscretionary:
+ sessionSendsLaunchEvents
+ setSessionSendsLaunchEvents:
+ connectionProxyDictionary
+ setConnectionProxyDictionary:
+ TLSMinimumSupportedProtocol
+ setTLSMinimumSupportedProtocol:
+ TLSMaximumSupportedProtocol
+ setTLSMaximumSupportedProtocol:
+ HTTPShouldUsePipelining
+ setHTTPShouldUsePipelining:
+ HTTPShouldSetCookies
+ setHTTPShouldSetCookies:
+ HTTPCookieAcceptPolicy
+ setHTTPCookieAcceptPolicy:
+ HTTPAdditionalHeaders
+ setHTTPAdditionalHeaders:
+ HTTPMaximumConnectionsPerHost
+ setHTTPMaximumConnectionsPerHost:
+ HTTPCookieStorage
+ setHTTPCookieStorage:
+ URLCredentialStorage
+ setURLCredentialStorage:
+ URLCache
+ setURLCache:
+ protocolClasses
+ setProtocolClasses:
+ _cookieStorage
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ identifier
+ setIdentifier:
+ disposition
+ setDisposition:
- skip_download_unlink
- isBackgroundSession
- tasks_created_suspended
- setHSTSPolicy:
- setConnectionCachePurgeTimeout:
- setConnectionCacheCellPurgeTimeout:
- setTasks_created_suspended:
- setSkip_download_unlink:
- set_cfurlConnectionProperties:
- set_socketStreamProperties:
- initWithDisposition:
- setBackgroundSession:
- _credStorage
- set_credStorage:
- _credStorageSet
- set_credStorageSet:
- _urlCache
- set_urlCache:
- _urlCacheSet
- set_urlCacheSet:
- set_cookieStorage:
- _cookieStorageSet
- set_cookieStorageSet:
- HSTSPolicy
- connectionCachePurgeTimeout
- connectionCacheCellPurgeTimeout
- _cfurlConnectionProperties
- _socketStreamProperties
- _preventsIdleSleep
- set_preventsIdleSleep:
- _usePipeliningHeuristics
- set_usePipeliningHeuristics:
- _startSynchronously
- set_startSynchronously:
- _contentDispHeadEncFallback
- set_contentDispHeadEncFallback:
- requestCachePolicy
- setRequestCachePolicy:
- timeoutIntervalForRequest
- setTimeoutIntervalForRequest:
- timeoutIntervalForResource
- setTimeoutIntervalForResource:
- networkServiceType
- setNetworkServiceType:
- allowsCellularAccess
- setAllowsCellularAccess:
- isDiscretionary
- setDiscretionary:
- sessionSendsLaunchEvents
- setSessionSendsLaunchEvents:
- connectionProxyDictionary
- setConnectionProxyDictionary:
- TLSMinimumSupportedProtocol
- setTLSMinimumSupportedProtocol:
- TLSMaximumSupportedProtocol
- setTLSMaximumSupportedProtocol:
- HTTPShouldUsePipelining
- setHTTPShouldUsePipelining:
- HTTPShouldSetCookies
- setHTTPShouldSetCookies:
- HTTPCookieAcceptPolicy
- setHTTPCookieAcceptPolicy:
- HTTPAdditionalHeaders
- setHTTPAdditionalHeaders:
- HTTPMaximumConnectionsPerHost
- setHTTPMaximumConnectionsPerHost:
- HTTPCookieStorage
- setHTTPCookieStorage:
- URLCredentialStorage
- setURLCredentialStorage:
- URLCache
- setURLCache:
- protocolClasses
- setProtocolClasses:
- _cookieStorage
- dealloc
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- identifier
- setIdentifier:
- disposition
- setDisposition:
@end
