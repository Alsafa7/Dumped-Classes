@interface SUClientInterface : NSObject
{
	id _appearance;
	id _clientIdentifier;
	id _darkKeyColor;
	id _delegate;
	id _dispatchQueue;
	BOOL _ignoresExpectedClientsProtocol;
	id _lightKeyColor;
	id _localStoragePath;
	id _purchaseManager;
	id _queueSessionManager;
	id _urlBagKeys;
	id _userAgent;
	id _viewControllerFactory;
	BOOL _wasLaunchedFromLibrary;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ appearance
+ tabBarController
+ setUserAgent:
+ darkKeyColor
+ lightKeyColor
+ viewControllerFactory
+ _hidePreviewOverlayAnimated:
+ _presentDialog:
+ clientIdentifier
+ previewOverlay
+ _exitStoreWithReason:
+ userAgent
+ setClientIdentifier:
+ _ignoresExpectedClientsProtocol
+ _newScriptInterface
+ setPurchaseManager:
+ queueSessionManager
+ setQueueSessionManager:
+ localStoragePath
+ setLocalStoragePath:
+ URLBagKeyForIdentifier:
+ purchaseManager
+ setURLBagKey:forIdentifier:
+ setViewControllerFactory:
+ _dismissViewControllerFromViewController:animated:completion:
+ _dismissModalViewControllerFromViewController:withTransition:
+ _presentViewController:fromViewController:withTransition:
+ _returnToLibrary
+ _setStatusBarHidden:withAnimation:
+ _setStatusBarStyle:animated:
+ wasLaunchedFromLibrary
+ _setIgnoresExpectedClientsProtocol:
+ _showPreviewOverlayAnimated:
+ _mediaPlayerViewControllerWillDismiss:animated:
+ setAppearance:
+ setWasLaunchedFromLibrary:
+ setDarkKeyColor:
+ setLightKeyColor:
- dealloc
- setDelegate:
- init
- delegate
- appearance
- tabBarController
- setUserAgent:
- darkKeyColor
- lightKeyColor
- viewControllerFactory
- _hidePreviewOverlayAnimated:
- _presentDialog:
- clientIdentifier
- previewOverlay
- _exitStoreWithReason:
- userAgent
- setClientIdentifier:
- _ignoresExpectedClientsProtocol
- _newScriptInterface
- setPurchaseManager:
- queueSessionManager
- setQueueSessionManager:
- localStoragePath
- setLocalStoragePath:
- URLBagKeyForIdentifier:
- purchaseManager
- setURLBagKey:forIdentifier:
- setViewControllerFactory:
- _dismissViewControllerFromViewController:animated:completion:
- _dismissModalViewControllerFromViewController:withTransition:
- _presentViewController:fromViewController:withTransition:
- _returnToLibrary
- _setStatusBarHidden:withAnimation:
- _setStatusBarStyle:animated:
- wasLaunchedFromLibrary
- _setIgnoresExpectedClientsProtocol:
- _showPreviewOverlayAnimated:
- _mediaPlayerViewControllerWillDismiss:animated:
- setAppearance:
- setWasLaunchedFromLibrary:
- setDarkKeyColor:
- setLightKeyColor:
@end
