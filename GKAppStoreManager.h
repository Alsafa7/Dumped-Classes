@interface GKAppStoreManager : NSObject
{

}

+ presentStoreSheetForGame:fromViewController:completionHandler:
+ launchAppStoreWithGameCenterGames
+ productViewControllerDidFinish:
+ loadTellAFriendMessageForGameWithAdamID:withCompletionHandler:
+ accountIsLoggedIntoAStore
+ beginObservingKeyBagStatusFor:withCallback:
+ stopObservingKeyBagStatusFor:
+ beginObservingStoreFrontChangesFor:withSelector:
+ stopObservingStoreFrontChangesFor:
+ uninstallApplicationWithBundleIdentifier:
+ unrestrictedInstalledBundleIDs
+ lookupStoreItemsForAdamIDs:withCompletionHandler:
+ allowProductionForApplication:
+ allowProductionForXPCConnection:
- presentStoreSheetForGame:fromViewController:completionHandler:
- launchAppStoreWithGameCenterGames
- productViewControllerDidFinish:
- loadTellAFriendMessageForGameWithAdamID:withCompletionHandler:
- accountIsLoggedIntoAStore
- beginObservingKeyBagStatusFor:withCallback:
- stopObservingKeyBagStatusFor:
- beginObservingStoreFrontChangesFor:withSelector:
- stopObservingStoreFrontChangesFor:
- uninstallApplicationWithBundleIdentifier:
- unrestrictedInstalledBundleIDs
- lookupStoreItemsForAdamIDs:withCompletionHandler:
- allowProductionForApplication:
- allowProductionForXPCConnection:
@end
