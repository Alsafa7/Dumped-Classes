@interface _UIWebViewScrollView : UIWebScrollView
{
	id _forwarder;
	BOOL _bouncesSetExplicitly;
	id _browserView;
}

+ initWithFrame:
+ dealloc
+ setDelegate:
+ delegate
+ setContentInset:
+ setBounces:
+ setBouncesHorizontally:
+ setBouncesVertically:
+ _weaklySetBouncesHorizontally:
+ _setWebView:
- initWithFrame:
- dealloc
- setDelegate:
- delegate
- setContentInset:
- setBounces:
- setBouncesHorizontally:
- setBouncesVertically:
- _weaklySetBouncesHorizontally:
- _setWebView:
@end
