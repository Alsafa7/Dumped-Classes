@interface MAAppDelegate : NSObject
{
	id _carDisplayController;
	id _lastArchivedPlaybackQueueDate;
	id _musicPlayerServerDelegate;
	id _nowPlayingObserver;
	id _tabBarController;
	id _window;
}

+ _migrateTabBarOrderingIfNeeded
+ _storeClientController
+ _screenDidConnectOrDisconnectNotification:
+ _setIAmTheIPod
+ _MAApplication:willFinishLaunchingWithOptions:
+ _endDiscoveringMediaLibrariesIfNecessary
+ _updateMinimumDurationToPlayToCountForHistoryWithCompletionHandler:
+ _pushNowPlayingViewControllerAnimated:
+ _showAddSharedStationFailedAlertWithErrorCode:
+ _postTabsDidChangeNotification
+ scrollViewList:withOptions:andIdentifier:
+ _controllerFromIdentifier:
+ _carDisplayTabs
+ _itemDidChangeNotification:
+ _isExplicitTracksEnabledDidChangeNotification:
+ _radioConfigurationDidChangeNotification:
+ dealloc
+ window
+ application:openURL:sourceApplication:annotation:
+ applicationDidBecomeActive:
+ applicationWillResignActive:
+ applicationDidEnterBackground:
+ applicationWillEnterForeground:
+ application:shouldSaveApplicationState:
+ application:shouldRestoreApplicationState:
+ application:willFinishLaunchingWithOptions:
+ applicationDidFinishLaunching:
+ setWindow:
+ application:willEncodeRestorableStateWithCoder:
+ application:didDecodeRestorableStateWithCoder:
+ tabBarController
+ navigationController:willShowViewController:animated:
+ application:runTest:options:
+ changeRepeatType:
+ changeShuffleType:
+ reloadPlayer:radioStation:options:completion:
+ reloadPlayer:mediaQuery:options:
+ reloadPlayer:geniusMixPlaylist:options:
+ _availableMediaLibrariesDidChangeNotification:
+ music_tabBarController:didSelectViewController:
+ music_tabBarControllerDidChangeOrderedViewControllerIdentifiers:
+ radioNavigationController
+ completeAdditionOfStation:withPrefixItem:keepPlayingCurrentItemIfPossible:animated:
+ addStationWithDictionary:completionHandler:
+ prepareToAddStation
+ makeRadioVisible
+ scrollStationToVisible:withCompletionHandler:
+ createStationViewController:didSelectStation:
+ createStationViewControllerDidFinish:
+ presentAddStation
+ .cxx_destruct
- _migrateTabBarOrderingIfNeeded
- _storeClientController
- _screenDidConnectOrDisconnectNotification:
- _setIAmTheIPod
- _MAApplication:willFinishLaunchingWithOptions:
- _endDiscoveringMediaLibrariesIfNecessary
- _updateMinimumDurationToPlayToCountForHistoryWithCompletionHandler:
- _pushNowPlayingViewControllerAnimated:
- _showAddSharedStationFailedAlertWithErrorCode:
- _postTabsDidChangeNotification
- scrollViewList:withOptions:andIdentifier:
- _controllerFromIdentifier:
- _carDisplayTabs
- _itemDidChangeNotification:
- _isExplicitTracksEnabledDidChangeNotification:
- _radioConfigurationDidChangeNotification:
- dealloc
- window
- application:openURL:sourceApplication:annotation:
- applicationDidBecomeActive:
- applicationWillResignActive:
- applicationDidEnterBackground:
- applicationWillEnterForeground:
- application:shouldSaveApplicationState:
- application:shouldRestoreApplicationState:
- application:willFinishLaunchingWithOptions:
- applicationDidFinishLaunching:
- setWindow:
- application:willEncodeRestorableStateWithCoder:
- application:didDecodeRestorableStateWithCoder:
- tabBarController
- navigationController:willShowViewController:animated:
- application:runTest:options:
- changeRepeatType:
- changeShuffleType:
- reloadPlayer:radioStation:options:completion:
- reloadPlayer:mediaQuery:options:
- reloadPlayer:geniusMixPlaylist:options:
- _availableMediaLibrariesDidChangeNotification:
- music_tabBarController:didSelectViewController:
- music_tabBarControllerDidChangeOrderedViewControllerIdentifiers:
- radioNavigationController
- completeAdditionOfStation:withPrefixItem:keepPlayingCurrentItemIfPossible:animated:
- addStationWithDictionary:completionHandler:
- prepareToAddStation
- makeRadioVisible
- scrollStationToVisible:withCompletionHandler:
- createStationViewController:didSelectStation:
- createStationViewControllerDidFinish:
- presentAddStation
- .cxx_destruct
@end
