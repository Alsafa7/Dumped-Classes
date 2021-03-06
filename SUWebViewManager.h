@interface SUWebViewManager : NSObject
{
	id _authenticationContext;
	id _clientInterface;
	id _delegate;
	id _initialRequestPerformance;
	id _lock;
	long long _modalAlertClickedIndex;
	id _originalFrameLoadDelegate;
	id _originalPolicyDelegate;
	id _originalResourceLoadDelegate;
	id _originalUIDelegate;
	id _scriptInterfaces;
	id _scriptWindowContext;
	id _suppressCookiesHosts;
	long long _usingNetworkCount;
	pointer _webFramesPendingInitialRequest;
	id _webView;
}

+ dealloc
+ setDelegate:
+ respondsToSelector:
+ init
+ delegate
+ _delegate
+ methodSignatureForSelector:
+ alertView:clickedButtonAtIndex:
+ webView
+ forwardInvocation:
+ webView:decidePolicyForNavigationAction:request:frame:decisionListener:
+ webView:didFailLoadWithError:
+ uiWebView:decidePolicyForMIMEType:request:frame:decisionListener:
+ webViewDidStartLoad:
+ webViewDidFinishLoad:
+ uiWebView:identifierForInitialRequest:fromDataSource:
+ uiWebView:resource:didFinishLoadingFromDataSource:
+ uiWebView:resource:didFailLoadingWithError:fromDataSource:
+ webView:didStartProvisionalLoadForFrame:
+ webView:didReceiveTitle:forFrame:
+ webView:didClearWindowObject:forFrame:
+ webView:didFirstLayoutInFrame:
+ webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
+ initWithClientInterface:
+ DOMElementForScriptInterface:element:
+ parentViewControllerForScriptInterface:
+ performanceMetricsForScriptInterface:
+ dispatchEvent:forName:
+ authenticationContext
+ scriptWindowContext
+ setAuthenticationContext:
+ setScriptWindowContext:
+ webView:documentViewDidSetFrame:
+ disconnectFromWebView
+ setInitialRequestPerformance:
+ connectToWebView:
+ dispatchEvent:forName:synchronously:
+ _cancelUsingNetwork
+ setOriginalFrameLoadDelegate:
+ setOriginalPolicyDelegate:
+ setOriginalResourceLoadDelegate:
+ setOriginalUIDelegate:
+ _enumerateScriptInterfacesWithBlock:
+ _endUsingNetwork
+ _beginUsingNetwork
+ _userIdentifier
+ webView:resource:didReceiveResponse:fromDataSource:
+ _newAlertWithMessage:
+ webThreadWebView:resource:willSendRequest:redirectResponse:fromDataSource:
+ webView:didParseSource:fromURL:sourceId:forWebFrame:
+ webView:failedToParseSource:baseLineNumber:fromURL:withError:forWebFrame:
+ webView:exceptionWasRaised:sourceId:line:forWebFrame:
+ initialRequestPerformance
+ originalFrameLoadDelegate
+ originalPolicyDelegate
+ originalResourceLoadDelegate
+ originalUIDelegate
- dealloc
- setDelegate:
- respondsToSelector:
- init
- delegate
- _delegate
- methodSignatureForSelector:
- alertView:clickedButtonAtIndex:
- webView
- forwardInvocation:
- webView:decidePolicyForNavigationAction:request:frame:decisionListener:
- webView:didFailLoadWithError:
- uiWebView:decidePolicyForMIMEType:request:frame:decisionListener:
- webViewDidStartLoad:
- webViewDidFinishLoad:
- uiWebView:identifierForInitialRequest:fromDataSource:
- uiWebView:resource:didFinishLoadingFromDataSource:
- uiWebView:resource:didFailLoadingWithError:fromDataSource:
- webView:didStartProvisionalLoadForFrame:
- webView:didReceiveTitle:forFrame:
- webView:didClearWindowObject:forFrame:
- webView:didFirstLayoutInFrame:
- webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
- initWithClientInterface:
- DOMElementForScriptInterface:element:
- parentViewControllerForScriptInterface:
- performanceMetricsForScriptInterface:
- dispatchEvent:forName:
- authenticationContext
- scriptWindowContext
- setAuthenticationContext:
- setScriptWindowContext:
- webView:documentViewDidSetFrame:
- disconnectFromWebView
- setInitialRequestPerformance:
- connectToWebView:
- dispatchEvent:forName:synchronously:
- _cancelUsingNetwork
- setOriginalFrameLoadDelegate:
- setOriginalPolicyDelegate:
- setOriginalResourceLoadDelegate:
- setOriginalUIDelegate:
- _enumerateScriptInterfacesWithBlock:
- _endUsingNetwork
- _beginUsingNetwork
- _userIdentifier
- webView:resource:didReceiveResponse:fromDataSource:
- _newAlertWithMessage:
- webThreadWebView:resource:willSendRequest:redirectResponse:fromDataSource:
- webView:didParseSource:fromURL:sourceId:forWebFrame:
- webView:failedToParseSource:baseLineNumber:fromURL:withError:forWebFrame:
- webView:exceptionWasRaised:sourceId:line:forWebFrame:
- initialRequestPerformance
- originalFrameLoadDelegate
- originalPolicyDelegate
- originalResourceLoadDelegate
- originalUIDelegate
@end
