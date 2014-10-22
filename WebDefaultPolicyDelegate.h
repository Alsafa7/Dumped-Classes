@interface WebDefaultPolicyDelegate : NSObject
{

}

+ webView:decidePolicyForNavigationAction:request:frame:decisionListener:
+ webView:decidePolicyForMIMEType:request:frame:decisionListener:
+ webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:
+ webView:unableToImplementPolicyWithError:frame:
+ webView:shouldGoToHistoryItem:
- webView:decidePolicyForNavigationAction:request:frame:decisionListener:
- webView:decidePolicyForMIMEType:request:frame:decisionListener:
- webView:decidePolicyForNewWindowAction:request:newFrameName:decisionListener:
- webView:unableToImplementPolicyWithError:frame:
- webView:shouldGoToHistoryItem:
@end
