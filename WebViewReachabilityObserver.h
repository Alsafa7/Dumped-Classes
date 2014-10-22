@interface WebViewReachabilityObserver : NSObject
{
	id _delegate;
}

+ setDelegate:
+ init
+ networkReachabilityChanged:
+ removeReachabilityObserver
- setDelegate:
- init
- networkReachabilityChanged:
- removeReachabilityObserver
@end
