@interface _UIRemoteViewControllerConnectionInfo : NSObject
{
	BOOL _prefersStatusBarHidden;
	id _interface;
	id _viewControllerOperatorProxy;
	id _serviceViewControllerProxy;
	id _serviceViewControllerControlMessageProxy;
	id _textEffectsOperatorProxy;
	id _serviceViewControllerSupportedInterfaceOrientations;
	id _serviceAccessibilityServerPortWrapper;
	long long _preferredStatusBarStyle;
	id _hostedWindowHostingHandle;
	id _textEffectsWindowHostingHandle;
	id _textEffectsWindowAboveStatusBarHostingHandle;
}

+ dealloc
+ preferredStatusBarStyle
+ prefersStatusBarHidden
+ interface
+ setInterface:
+ viewControllerOperatorProxy
+ setViewControllerOperatorProxy:
+ serviceViewControllerProxy
+ setServiceViewControllerProxy:
+ serviceViewControllerControlMessageProxy
+ setServiceViewControllerControlMessageProxy:
+ textEffectsOperatorProxy
+ setTextEffectsOperatorProxy:
+ serviceViewControllerSupportedInterfaceOrientations
+ setServiceViewControllerSupportedInterfaceOrientations:
+ serviceAccessibilityServerPortWrapper
+ setServiceAccessibilityServerPortWrapper:
+ setPreferredStatusBarStyle:
+ setPrefersStatusBarHidden:
+ hostedWindowHostingHandle
+ setHostedWindowHostingHandle:
+ textEffectsWindowHostingHandle
+ setTextEffectsWindowHostingHandle:
+ textEffectsWindowAboveStatusBarHostingHandle
+ setTextEffectsWindowAboveStatusBarHostingHandle:
- dealloc
- preferredStatusBarStyle
- prefersStatusBarHidden
- interface
- setInterface:
- viewControllerOperatorProxy
- setViewControllerOperatorProxy:
- serviceViewControllerProxy
- setServiceViewControllerProxy:
- serviceViewControllerControlMessageProxy
- setServiceViewControllerControlMessageProxy:
- textEffectsOperatorProxy
- setTextEffectsOperatorProxy:
- serviceViewControllerSupportedInterfaceOrientations
- setServiceViewControllerSupportedInterfaceOrientations:
- serviceAccessibilityServerPortWrapper
- setServiceAccessibilityServerPortWrapper:
- setPreferredStatusBarStyle:
- setPrefersStatusBarHidden:
- hostedWindowHostingHandle
- setHostedWindowHostingHandle:
- textEffectsWindowHostingHandle
- setTextEffectsWindowHostingHandle:
- textEffectsWindowAboveStatusBarHostingHandle
- setTextEffectsWindowAboveStatusBarHostingHandle:
@end
