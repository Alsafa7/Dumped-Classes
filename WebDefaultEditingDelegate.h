@interface WebDefaultEditingDelegate : NSObject
{

}

+ webView:shouldDeleteDOMRange:
+ webView:shouldInsertText:replacingDOMRange:givenAction:
+ webViewDidChange:
+ undoManagerForWebView:
+ supportedPasteboardTypesForCurrentSelection
+ documentFragmentForPasteboardItemAtIndex:
+ webView:shouldBeginEditingInDOMRange:
+ webView:shouldEndEditingInDOMRange:
+ webView:shouldInsertNode:replacingDOMRange:givenAction:
+ webView:shouldChangeSelectedDOMRange:toDOMRange:affinity:stillSelecting:
+ webView:shouldApplyStyle:toElementsInDOMRange:
+ webView:shouldMoveRangeAfterDelete:replacingRange:
+ webView:shouldChangeTypingStyle:toStyle:
+ webView:doCommandBySelector:
+ webViewDidBeginEditing:
+ webViewDidEndEditing:
+ webViewDidChangeTypingStyle:
+ webViewDidChangeSelection:
- webView:shouldDeleteDOMRange:
- webView:shouldInsertText:replacingDOMRange:givenAction:
- webViewDidChange:
- undoManagerForWebView:
- supportedPasteboardTypesForCurrentSelection
- documentFragmentForPasteboardItemAtIndex:
- webView:shouldBeginEditingInDOMRange:
- webView:shouldEndEditingInDOMRange:
- webView:shouldInsertNode:replacingDOMRange:givenAction:
- webView:shouldChangeSelectedDOMRange:toDOMRange:affinity:stillSelecting:
- webView:shouldApplyStyle:toElementsInDOMRange:
- webView:shouldMoveRangeAfterDelete:replacingRange:
- webView:shouldChangeTypingStyle:toStyle:
- webView:doCommandBySelector:
- webViewDidBeginEditing:
- webViewDidEndEditing:
- webViewDidChangeTypingStyle:
- webViewDidChangeSelection:
@end
