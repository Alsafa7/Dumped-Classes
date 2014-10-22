@interface ASLaunchNotificationsController : NSObject
{
	id _applePackOperation;
	id _applePackPage;
	id _clientContext;
	BOOL _didDisplayThisRunCycle;
	BOOL _loadingApplePack;
	id _operationQueue;
	id _parentViewController;
}

+ displayAvailableNotifications
+ checkForNotifications
+ _hasDisplayedApplePack
+ _loadApplePack
+ _displayApplePack
+ _reloadApplePackPage
+ _setApplePackDisplayed:
+ _loadApplePackWithURLString:
+ _setApplePack:error:
+ dealloc
+ _applicationDidEnterBackground:
+ itemStateCenterRestrictionsChanged:
+ clientContext
+ initWithParentViewController:
+ .cxx_destruct
+ setClientContext:
- displayAvailableNotifications
- checkForNotifications
- _hasDisplayedApplePack
- _loadApplePack
- _displayApplePack
- _reloadApplePackPage
- _setApplePackDisplayed:
- _loadApplePackWithURLString:
- _setApplePack:error:
- dealloc
- _applicationDidEnterBackground:
- itemStateCenterRestrictionsChanged:
- clientContext
- initWithParentViewController:
- .cxx_destruct
- setClientContext:
@end
