@interface GameCenterTest : UIApplication
{
	id _optionsPerTest;
	id _actionsPerTest;
}

+ completeIfPPTesting:
+ failIfPPTesting:
+ setPPTest:action:
+ optionsForPPTest:
+ shouldStartTest:
+ _test:switchToTab:collectionViewController:
+ PPTest_logout:
+ PPTest_games_loading:
+ PPTest_friends_loading:
+ PPTest_games_scrolling:
+ PPTest_friends_scrolling:
+ PPTest_login:
+ PPTest_friends_detail:
+ PPTest_games_detail:
+ optionsPerTest
+ setOptionsPerTest:
+ actionsPerTest
+ setActionsPerTest:
+ runTest:options:
+ observeValueForKeyPath:ofObject:change:context:
- completeIfPPTesting:
- failIfPPTesting:
- setPPTest:action:
- optionsForPPTest:
- shouldStartTest:
- _test:switchToTab:collectionViewController:
- PPTest_logout:
- PPTest_games_loading:
- PPTest_friends_loading:
- PPTest_games_scrolling:
- PPTest_friends_scrolling:
- PPTest_login:
- PPTest_friends_detail:
- PPTest_games_detail:
- optionsPerTest
- setOptionsPerTest:
- actionsPerTest
- setActionsPerTest:
- runTest:options:
- observeValueForKeyPath:ofObject:change:context:
@end
