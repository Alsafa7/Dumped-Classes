@interface NSHTTPCookieStorage : NSObject
{
	id _internal;
}

+ _cookieStorage
+ _setPrivateBrowsingEnabled:
+ _saveCookies
+ _initWithCFHTTPCookieStorage:
+ _readAcceptCookiesPreference
+ cookieAcceptPolicy
+ cookies
+ deleteCookie:
+ cookieRequestHeaderFieldsForURL:
+ setCookiesFromResponseHeader:forURL:policyBaseURL:
+ cookiesForURL:
+ setCookies:forURL:mainDocumentURL:
+ setCookieAcceptPolicy:
+ sortedCookiesUsingDescriptors:
+ dealloc
+ init
+ description
+ setCookie:
- _cookieStorage
- _setPrivateBrowsingEnabled:
- _saveCookies
- _initWithCFHTTPCookieStorage:
- _readAcceptCookiesPreference
- cookieAcceptPolicy
- cookies
- deleteCookie:
- cookieRequestHeaderFieldsForURL:
- setCookiesFromResponseHeader:forURL:policyBaseURL:
- cookiesForURL:
- setCookies:forURL:mainDocumentURL:
- setCookieAcceptPolicy:
- sortedCookiesUsingDescriptors:
- dealloc
- init
- description
- setCookie:
@end
