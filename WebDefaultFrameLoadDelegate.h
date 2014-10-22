@interface WebDefaultFrameLoadDelegate : NSObject
{

}

+ webView:didFinishLoadForFrame:
+ webView:didFirstVisuallyNonEmptyLayoutInFrame:
+ webView:didFailLoadWithError:forFrame:
+ webView:didChangeLocationWithinPageForFrame:
+ webView:didCommitLoadForFrame:
+ webView:didStartProvisionalLoadForFrame:
+ webView:didReceiveTitle:forFrame:
+ webView:didClearWindowObject:forFrame:
+ webView:didReceiveServerRedirectForProvisionalLoadForFrame:
+ webView:didFailProvisionalLoadWithError:forFrame:
+ webView:didFirstLayoutInFrame:
+ webView:willCloseFrame:
+ webView:didHandleOnloadEventsForFrame:
+ webView:windowScriptObjectAvailable:
+ webView:didCreateJavaScriptContext:forFrame:
+ webView:didDetectXSS:
+ webView:didClearWindowObjectForFrame:inScriptWorld:
+ webView:didFinishDocumentLoadForFrame:
+ webView:didClearInspectorWindowObject:forFrame:
+ webView:didLayout:
+ webView:willPerformClientRedirectToURL:delay:fireDate:forFrame:
+ webView:didCancelClientRedirectForFrame:
+ webView:didPushStateWithinPageForFrame:
+ webView:didReplaceStateWithinPageForFrame:
+ webView:didPopStateWithinPageForFrame:
+ webView:didRemoveFrameFromHierarchy:
+ webViewDidDisplayInsecureContent:
+ webView:didRunInsecureContent:
- webView:didFinishLoadForFrame:
- webView:didFirstVisuallyNonEmptyLayoutInFrame:
- webView:didFailLoadWithError:forFrame:
- webView:didChangeLocationWithinPageForFrame:
- webView:didCommitLoadForFrame:
- webView:didStartProvisionalLoadForFrame:
- webView:didReceiveTitle:forFrame:
- webView:didClearWindowObject:forFrame:
- webView:didReceiveServerRedirectForProvisionalLoadForFrame:
- webView:didFailProvisionalLoadWithError:forFrame:
- webView:didFirstLayoutInFrame:
- webView:willCloseFrame:
- webView:didHandleOnloadEventsForFrame:
- webView:windowScriptObjectAvailable:
- webView:didCreateJavaScriptContext:forFrame:
- webView:didDetectXSS:
- webView:didClearWindowObjectForFrame:inScriptWorld:
- webView:didFinishDocumentLoadForFrame:
- webView:didClearInspectorWindowObject:forFrame:
- webView:didLayout:
- webView:willPerformClientRedirectToURL:delay:fireDate:forFrame:
- webView:didCancelClientRedirectForFrame:
- webView:didPushStateWithinPageForFrame:
- webView:didReplaceStateWithinPageForFrame:
- webView:didPopStateWithinPageForFrame:
- webView:didRemoveFrameFromHierarchy:
- webViewDidDisplayInsecureContent:
- webView:didRunInsecureContent:
@end
