@interface UIWebViewWebViewDelegate : NSObject
{
	id uiWebView;
}

+ webView:decidePolicyForNavigationAction:request:frame:decisionListener:
+ webView:didFinishLoadForFrame:
+ webView:didFailLoadWithError:forFrame:
+ webView:didChangeLocationWithinPageForFrame:
+ webView:didCommitLoadForFrame:
+ initWithUIWebView:
+ _clearUIWebView
+ webView:decidePolicyForMIMEType:request:frame:decisionListener:
+ webView:decidePolicyForGeolocationRequestFromOrigin:frame:listener:
+ webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:
+ webView:unableToImplementPolicyWithError:frame:
+ webView:frame:exceededDatabaseQuotaForSecurityOrigin:database:
+ webView:exceededApplicationCacheOriginQuotaForSecurityOrigin:totalSpaceNeeded:
+ webView:printFrameView:
+ webViewSupportedOrientationsUpdated:
+ webView:didStartProvisionalLoadForFrame:
+ webView:didReceiveTitle:forFrame:
+ webView:connectionPropertiesForResource:dataSource:
+ webView:resource:willSendRequest:redirectResponse:fromDataSource:
+ webView:didClearWindowObject:forFrame:
+ webView:didReceiveServerRedirectForProvisionalLoadForFrame:
+ webView:didFailProvisionalLoadWithError:forFrame:
+ webView:didFirstLayoutInFrame:
+ webViewClose:
+ webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
+ webView:identifierForInitialRequest:fromDataSource:
+ webView:resource:didFinishLoadingFromDataSource:
+ webView:resource:didFailLoadingWithError:fromDataSource:
+ webView:resource:didReceiveAuthenticationChallenge:fromDataSource:
+ webView:resource:didCancelAuthenticationChallenge:fromDataSource:
+ webView:resource:canAuthenticateAgainstProtectionSpace:forDataSource:
+ webView:createWebViewWithRequest:
- webView:decidePolicyForNavigationAction:request:frame:decisionListener:
- webView:didFinishLoadForFrame:
- webView:didFailLoadWithError:forFrame:
- webView:didChangeLocationWithinPageForFrame:
- webView:didCommitLoadForFrame:
- initWithUIWebView:
- _clearUIWebView
- webView:decidePolicyForMIMEType:request:frame:decisionListener:
- webView:decidePolicyForGeolocationRequestFromOrigin:frame:listener:
- webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:
- webView:unableToImplementPolicyWithError:frame:
- webView:frame:exceededDatabaseQuotaForSecurityOrigin:database:
- webView:exceededApplicationCacheOriginQuotaForSecurityOrigin:totalSpaceNeeded:
- webView:printFrameView:
- webViewSupportedOrientationsUpdated:
- webView:didStartProvisionalLoadForFrame:
- webView:didReceiveTitle:forFrame:
- webView:connectionPropertiesForResource:dataSource:
- webView:resource:willSendRequest:redirectResponse:fromDataSource:
- webView:didClearWindowObject:forFrame:
- webView:didReceiveServerRedirectForProvisionalLoadForFrame:
- webView:didFailProvisionalLoadWithError:forFrame:
- webView:didFirstLayoutInFrame:
- webViewClose:
- webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
- webView:identifierForInitialRequest:fromDataSource:
- webView:resource:didFinishLoadingFromDataSource:
- webView:resource:didFailLoadingWithError:fromDataSource:
- webView:resource:didReceiveAuthenticationChallenge:fromDataSource:
- webView:resource:didCancelAuthenticationChallenge:fromDataSource:
- webView:resource:canAuthenticateAgainstProtectionSpace:forDataSource:
- webView:createWebViewWithRequest:
@end
