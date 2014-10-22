@interface SSVCookieStorage : NSObject
{
	id _db;
	id _dispatchQueue;
	id _storageLocation;
}

+ dealloc
+ init
+ initWithStorageLocation:
+ _copyPrivateCookiesForURL:userIdentifier:
+ _bindInsertStatement:forCookie:userIdentifier:
+ _columnNameForCookieProperty:
+ _bindStatement:withValues:
+ removeAllCookies
+ removeCookiesWithProperties:
+ storageLocation
+ synchronizeCookies
+ cookieHeadersForURL:userIdentifier:
+ setCookies:forUserIdentifier:
+ setCookiesForHTTPResponse:userIdentifier:
- dealloc
- init
- initWithStorageLocation:
- _copyPrivateCookiesForURL:userIdentifier:
- _bindInsertStatement:forCookie:userIdentifier:
- _columnNameForCookieProperty:
- _bindStatement:withValues:
- removeAllCookies
- removeCookiesWithProperties:
- storageLocation
- synchronizeCookies
- cookieHeadersForURL:userIdentifier:
- setCookies:forUserIdentifier:
- setCookiesForHTTPResponse:userIdentifier:
@end
