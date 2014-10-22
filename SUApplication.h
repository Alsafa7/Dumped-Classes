@interface SUApplication : UIApplication
{
	BOOL _terminateOnNextSuspend;
	id _window;
	id _interactionTintColor;
}

+ runTest:options:
+ _runScriptTestWithOptions:
+ runTestInvocation:
+ dealloc
+ init
+ application:openURL:sourceApplication:annotation:
+ applicationDidEnterBackground:
+ applicationWillEnterForeground:
+ application:supportedInterfaceOrientationsForWindow:
+ application:didFinishLaunchingWithOptions:
+ applicationDidFinishLaunching:
+ defaultImageSnapshotExpiration
+ applicationSuspend:settings:
+ setInteractionTintColor:
+ interactionTintColor
+ _applicationDidFinishLaunching:
+ _storeEnabledChangeNotification:
+ _teardownUI
+ _setupUI
+ _exitIfStoreNotAvailable
+ _exitForStoreNotAvailable
- runTest:options:
- _runScriptTestWithOptions:
- runTestInvocation:
- dealloc
- init
- application:openURL:sourceApplication:annotation:
- applicationDidEnterBackground:
- applicationWillEnterForeground:
- application:supportedInterfaceOrientationsForWindow:
- application:didFinishLaunchingWithOptions:
- applicationDidFinishLaunching:
- defaultImageSnapshotExpiration
- applicationSuspend:settings:
- setInteractionTintColor:
- interactionTintColor
- _applicationDidFinishLaunching:
- _storeEnabledChangeNotification:
- _teardownUI
- _setupUI
- _exitIfStoreNotAvailable
- _exitForStoreNotAvailable
@end
