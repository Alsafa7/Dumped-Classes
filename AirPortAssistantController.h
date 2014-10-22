@interface AirPortAssistantController : NSObject
{
	id _delegate;
	id _viewController;
	id _context;
	id _configuredSSID;
}

+ dealloc
+ setDelegate:
+ delegate
+ context
+ setContext:
+ setViewController:
+ viewController
+ assistantCompleteWithResult:
+ setConfiguredSSID:
+ configuredSSID
- dealloc
- setDelegate:
- delegate
- context
- setContext:
- setViewController:
- viewController
- assistantCompleteWithResult:
- setConfiguredSSID:
- configuredSSID
@end
