@interface WebDefaultResourceLoadDelegate : NSObject
{

}

+ webView:connectionPropertiesForResource:dataSource:
+ webView:resource:willSendRequest:redirectResponse:fromDataSource:
+ webView:identifierForInitialRequest:fromDataSource:
+ webView:resource:didFinishLoadingFromDataSource:
+ webView:resource:didFailLoadingWithError:fromDataSource:
+ webView:resource:didReceiveAuthenticationChallenge:fromDataSource:
+ webView:resource:didCancelAuthenticationChallenge:fromDataSource:
+ webView:resource:canAuthenticateAgainstProtectionSpace:forDataSource:
+ webView:resource:didReceiveContentLength:fromDataSource:
+ webView:plugInFailedWithError:dataSource:
+ webView:didLoadResourceFromMemoryCache:response:length:fromDataSource:
+ webView:resource:shouldUseCredentialStorageForDataSource:
+ webView:resource:willCacheResponse:fromDataSource:
+ webView:resource:didReceiveResponse:fromDataSource:
- webView:connectionPropertiesForResource:dataSource:
- webView:resource:willSendRequest:redirectResponse:fromDataSource:
- webView:identifierForInitialRequest:fromDataSource:
- webView:resource:didFinishLoadingFromDataSource:
- webView:resource:didFailLoadingWithError:fromDataSource:
- webView:resource:didReceiveAuthenticationChallenge:fromDataSource:
- webView:resource:didCancelAuthenticationChallenge:fromDataSource:
- webView:resource:canAuthenticateAgainstProtectionSpace:forDataSource:
- webView:resource:didReceiveContentLength:fromDataSource:
- webView:plugInFailedWithError:dataSource:
- webView:didLoadResourceFromMemoryCache:response:length:fromDataSource:
- webView:resource:shouldUseCredentialStorageForDataSource:
- webView:resource:willCacheResponse:fromDataSource:
- webView:resource:didReceiveResponse:fromDataSource:
@end
