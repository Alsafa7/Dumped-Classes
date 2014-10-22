@interface MSClientApplicationController : SUClientApplicationController
{
	id _downloadManager;
	BOOL _registersForPingNotifications;
}

+ downloadManagerDownloadsDidChange:
+ becomeActive
+ dealloc
+ init
+ _updateRemoteNotificationSettings
+ _handleGeniusLookupURL:
+ _handleStoreSearchURL:withSourceApplication:sourceURLString:
+ _handleLibraryLinkURL:
+ registersForPingNotifications
+ setRegistersForPingNotifications:
+ _accountStoreChangedNotification:
+ initWithClientInterface:
+ tabBarController:shouldShowSection:
+ tabBarController:rootViewControllerForSection:
+ tabBarController:viewControllerForContext:
+ purchaseManagerWillBeginUpdates:
+ purchaseManagerDidEndUpdates:
+ purchaseManager:purchaseBatchForItems:
+ purchaseManager:purchaseBatchForPurchases:
+ displayClientURL:withSourceApplication:sourceURLString:
+ initWithClientIdentifier:
- downloadManagerDownloadsDidChange:
- becomeActive
- dealloc
- init
- _updateRemoteNotificationSettings
- _handleGeniusLookupURL:
- _handleStoreSearchURL:withSourceApplication:sourceURLString:
- _handleLibraryLinkURL:
- registersForPingNotifications
- setRegistersForPingNotifications:
- _accountStoreChangedNotification:
- initWithClientInterface:
- tabBarController:shouldShowSection:
- tabBarController:rootViewControllerForSection:
- tabBarController:viewControllerForContext:
- purchaseManagerWillBeginUpdates:
- purchaseManagerDidEndUpdates:
- purchaseManager:purchaseBatchForItems:
- purchaseManager:purchaseBatchForPurchases:
- displayClientURL:withSourceApplication:sourceURLString:
- initWithClientIdentifier:
@end
