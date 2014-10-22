@interface SBStarkScreenManager : NSObject
{
	id _backgroundProviderManager;
	id _screenToControllerMap;
	id _activeScreenController;
	id _statusBarStateProvider;
	id _spuriousScreenUndimmingAssertion;
	id _deviceLockDisableAssertion;
	id _delegate;
}

+ activeScreenController
+ screenManager:shouldBindConnectionHandlerToScreen:
+ screenManager:didTriggerConnectionHandlerEvent:forScreen:
+ isStarkActive
+ backgroundProviderManager
+ statusBarStateProvider
+ _promptUnlockIfNecessary
+ _setActiveController:
+ dealloc
+ setDelegate:
+ init
+ delegate
- activeScreenController
- screenManager:shouldBindConnectionHandlerToScreen:
- screenManager:didTriggerConnectionHandlerEvent:forScreen:
- isStarkActive
- backgroundProviderManager
- statusBarStateProvider
- _promptUnlockIfNecessary
- _setActiveController:
- dealloc
- setDelegate:
- init
- delegate
@end
