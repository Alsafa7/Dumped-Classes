@interface UIWebViewInternal : NSObject
{
	id scroller;
	id browserView;
	id checkeredPatternView;
	id delegate;
	bit[1] scalesPageToFit;
	bit[1] isLoading;
	bit[1] hasOverriddenOrientationChangeEventHandling;
	bit[1] drawsCheckeredPattern;
	bit[1] webSelectionEnabled;
	bit[1] drawInWebThread;
	bit[1] inRotation;
	id request;
	long long clickedAlertButtonIndex;
	id webViewDelegate;
	id pdfHandler;
}

@end
