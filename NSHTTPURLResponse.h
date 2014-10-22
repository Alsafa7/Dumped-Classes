@interface NSHTTPURLResponse : NSURLResponse
{
	id _httpInternal;
}

+ getSAPSignature
+ _maxAge
+ expirationDate
+ maxExpectedContentLength
+ _iTunesStore_valueForHTTPHeader:
+ _getCacheControlMaxAge:
+ _dateFromExpires
+ expirationInterval
+ radio_mescalVerifyData:withCompletionHandler:
+ _initWithCFURLResponse:
+ _peerCertificateChain
+ initWithURL:statusCode:HTTPVersion:headerFields:
+ allHeaderFields
+ initWithURL:statusCode:headerFields:requestTime:
+ _clientCertificateChain
+ _clientCertificateState
+ _setPeerTrust:
+ _peerTrust
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ statusCode
- getSAPSignature
- _maxAge
- expirationDate
- maxExpectedContentLength
- _iTunesStore_valueForHTTPHeader:
- _getCacheControlMaxAge:
- _dateFromExpires
- expirationInterval
- radio_mescalVerifyData:withCompletionHandler:
- _initWithCFURLResponse:
- _peerCertificateChain
- initWithURL:statusCode:HTTPVersion:headerFields:
- allHeaderFields
- initWithURL:statusCode:headerFields:requestTime:
- _clientCertificateChain
- _clientCertificateState
- _setPeerTrust:
- _peerTrust
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- statusCode
@end
