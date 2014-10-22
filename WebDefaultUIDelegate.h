@interface WebDefaultUIDelegate : NSObject
{

}

+ webView:exceededApplicationCacheOriginQuotaForSecurityOrigin:totalSpaceNeeded:
+ webView:printFrameView:
+ webViewSupportedOrientationsUpdated:
+ webViewClose:
+ webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
+ webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
+ webViewFocus:
+ webViewUnfocus:
+ webView:createWebViewWithRequest:windowFeatures:
+ webViewShow:
+ webView:setToolbarsVisible:
+ webViewAreToolbarsVisible:
+ webView:setStatusBarVisible:
+ webViewIsStatusBarVisible:
+ webView:setResizable:
+ webView:setStatusText:
+ webView:runOpenPanelForFileButtonWithResultListener:
+ webViewFirstResponder:
+ webView:makeFirstResponder:
+ webView:shouldReplaceUploadFile:usingGeneratedFilename:
+ webView:generateReplacementFile:
+ webView:setFrame:
+ webViewFrame:
+ webView:createWebViewWithRequest:userGesture:
+ webViewStatusText:
+ webView:mouseDidMoveOverElement:modifierFlags:
+ webViewIsResizable:
+ webView:didDrawRect:
+ webView:didScrollDocumentInFrameView:
- webView:exceededApplicationCacheOriginQuotaForSecurityOrigin:totalSpaceNeeded:
- webView:printFrameView:
- webViewSupportedOrientationsUpdated:
- webViewClose:
- webView:runJavaScriptAlertPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:
- webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:
- webViewFocus:
- webViewUnfocus:
- webView:createWebViewWithRequest:windowFeatures:
- webViewShow:
- webView:setToolbarsVisible:
- webViewAreToolbarsVisible:
- webView:setStatusBarVisible:
- webViewIsStatusBarVisible:
- webView:setResizable:
- webView:setStatusText:
- webView:runOpenPanelForFileButtonWithResultListener:
- webViewFirstResponder:
- webView:makeFirstResponder:
- webView:shouldReplaceUploadFile:usingGeneratedFilename:
- webView:generateReplacementFile:
- webView:setFrame:
- webViewFrame:
- webView:createWebViewWithRequest:userGesture:
- webViewStatusText:
- webView:mouseDidMoveOverElement:modifierFlags:
- webViewIsResizable:
- webView:didDrawRect:
- webView:didScrollDocumentInFrameView:
@end
