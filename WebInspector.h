@interface WebInspector : NSObject
{
	id _webView;
	id _frontend;
}

+ showWindow:
+ setWebFrame:
+ close:
+ dealloc
+ show:
+ initWithWebView:
+ detach:
+ showWindow
+ isDebuggingJavaScript
+ isProfilingJavaScript
+ isTimelineProfilingEnabled
+ setTimelineProfilingEnabled:
+ webViewClosed
+ showConsole:
+ showTimeline:
+ toggleDebuggingJavaScript:
+ startDebuggingJavaScript:
+ stopDebuggingJavaScript:
+ toggleProfilingJavaScript:
+ startProfilingJavaScript:
+ stopProfilingJavaScript:
+ isJavaScriptProfilingEnabled
+ setJavaScriptProfilingEnabled:
+ attach:
+ evaluateInFrontend:callId:script:
+ setFrontend:
+ releaseFrontend
- showWindow:
- setWebFrame:
- close:
- dealloc
- show:
- initWithWebView:
- detach:
- showWindow
- isDebuggingJavaScript
- isProfilingJavaScript
- isTimelineProfilingEnabled
- setTimelineProfilingEnabled:
- webViewClosed
- showConsole:
- showTimeline:
- toggleDebuggingJavaScript:
- startDebuggingJavaScript:
- stopDebuggingJavaScript:
- toggleProfilingJavaScript:
- startProfilingJavaScript:
- stopProfilingJavaScript:
- isJavaScriptProfilingEnabled
- setJavaScriptProfilingEnabled:
- attach:
- evaluateInFrontend:callId:script:
- setFrontend:
- releaseFrontend
@end
