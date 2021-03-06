@interface SKUIProductPageOverlayController : NSObject
{
	id _clientContext;
	id _delegate;
	id _initialItem;
	id _overlayViewController;
	id _parentViewController;
}

+ productViewControllerDidFinish:
+ dealloc
+ setDelegate:
+ delegate
+ view
+ parentViewController
+ dismiss
+ URLs
+ iPadProductPage:openItem:
+ iPadProductPage:openURL:viewControllerBlock:
+ iPadProductPageCannotOpen:
+ clientContext
+ initWithParentViewController:
+ showWithInitialURLs:
+ showWithInitialProductPage:metricsPageEvent:
+ showWithInitialItem:
+ numberOfVisibleOverlays
+ _showWithInitialViewController:
+ _showOverlayViewController
+ _finishDismissAndNotifyDelegate:withViewController:
+ _backstopViewAction:
+ showWithInitialItemIdentifier:
+ showWithInitialURL:
+ showWithInitialURLRequest:
+ .cxx_destruct
+ setClientContext:
- productViewControllerDidFinish:
- dealloc
- setDelegate:
- delegate
- view
- parentViewController
- dismiss
- URLs
- iPadProductPage:openItem:
- iPadProductPage:openURL:viewControllerBlock:
- iPadProductPageCannotOpen:
- clientContext
- initWithParentViewController:
- showWithInitialURLs:
- showWithInitialProductPage:metricsPageEvent:
- showWithInitialItem:
- numberOfVisibleOverlays
- _showWithInitialViewController:
- _showOverlayViewController
- _finishDismissAndNotifyDelegate:withViewController:
- _backstopViewAction:
- showWithInitialItemIdentifier:
- showWithInitialURL:
- showWithInitialURLRequest:
- .cxx_destruct
- setClientContext:
@end
