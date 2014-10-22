@interface WebNodeHighlighter : NSObject
{
	id _inspectedWebView;
	id _currentHighlight;
}

+ dealloc
+ highlight
+ initWithInspectedWebView:
+ hideHighlight
+ didAttachWebNodeHighlight:
+ willDetachWebNodeHighlight:
- dealloc
- highlight
- initWithInspectedWebView:
- hideHighlight
- didAttachWebNodeHighlight:
- willDetachWebNodeHighlight:
@end
