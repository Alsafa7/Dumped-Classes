@interface GKLocalPlayer : GKPlayer
{
	BOOL _authenticated;
	BOOL _authenticating;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _appUnrecognized;
	BOOL _newToGameCenter;
	id _authenticateHandler;
	id _acceptedInvite;
	id _authenticationCompletionHandler;
	id _validateAccountCompletionHandler;
	id _loginAlertView;
	id _currentAlert;
	id _lastUsernameAttempted;
	id _lastAccountNameAuthenticated;
	id _currentFriendRequestInvocation;
	usigned long long _failedLogins;
	id _authenticateAlertDictionary;
	long long _environment;
	id _lastAuthPlayerID;
	id _lastAuthDate;
	id _rootViewController;
	id _activeViewController;
	id _eventEmitter;
	id _signInViewController;
}

+ showAlertForTag:
+ showCancelledAlertForPlayer:
+ showCreateAccountRestrictedAlert
+ showEditAccountRestrictedAlert
+ showSignInAccountRestrictedAlert
+ alertAndSendFriendRequest:destination:
+ alertUserInStoreDemoModeEnabled
+ alertView:didDismissWithButtonIndex:
+ showAuthenticateViewControllerForGameCenter
+ callAuthHandlerWithError:
+ finishAuthenticationWithError:
+ handleUnderlyingErrorForAuthenticateError:
+ cancelAuthentication
+ showAuthorizeViewController
+ showAuthenticateViewController
+ shouldReuseControllerForMode:
+ presentError:forMode:
+ removeActiveViewControllerAnimated:completionHandler:
+ showViewController:wrapInNavController:
+ showAccountControllerForMode:
+ _showWelcomeBanner
+ _authenticate
+ _showViewControllerForLegacyApps:
+ validateAccountWithCompletionHandler:
+ signOutWithCompletionHandler:
+ _authenticateWithCompletionHandler:
+ applicationDidEnterBackground:
+ applicationWillEnterForeground:
+ deletePhoto
+ setPhoto:withCompletionHandler:
+ registerListener:
+ unregisterListener:
+ unregisterAllListeners
+ initWithCoder:
+ encodeWithCoder:
+ loadDefaultLeaderboardIdentifierWithCompletionHandler:
+ setDefaultLeaderboardIdentifier:completionHandler:
+ reset:
+ setEventEmitter:
+ daemonFetchGameInvite:
+ daemonCancelledGameInvite:
+ daemonInviteeRespondedToGameInvite:
+ daemonFetchTurnBasedEvent:
+ setStatus:withCompletionHandler:
+ _addEmail:withCompletionHandler:
+ bundleIDIsCompatibleWithCurrentGame:handler:
+ updateFromLocalPlayer:
+ loadFriendsWithCompletionHandler:
+ loadGameRecommendationsWithCompletionHandler:
+ canChangePhoto
+ showSettings
+ authenticateWithCompletionHandler:
+ addEmail:withCompletionHandler:
+ loadFriendRequests:
+ sendFriendRequest:toAliases:players:emailAddresses:twitterScreenNames:facebookIDs:rid:block:
+ hasEmailAddress:
+ setDefaultLeaderboardCategoryID:completionHandler:
+ loadDefaultLeaderboardCategoryIDWithCompletionHandler:
+ generateIdentityVerificationSignatureWithCompletionHandler:
+ authenticationCompletionHandler
+ setAuthenticationCompletionHandler:
+ lastUsernameAttempted
+ setLastUsernameAttempted:
+ lastAccountNameAuthenticated
+ setLastAccountNameAuthenticated:
+ failedLogins
+ setFailedLogins:
+ authenticateAlertDictionary
+ isAppUnrecognized
+ setAppUnrecognized:
+ displayNameWithOptions:
+ loadFriendRecommendationsWithCompletionHandler:
+ acceptedInvite
+ setAcceptedInvite:
+ setNewToGameCenter:
+ isAuthenticated
+ isAuthenticating
+ eventEmitter
+ friends
+ loadProfileWithCompletionHandler:
+ removeFriend:block:
+ lastAuthDate
+ lastAuthPlayerID
+ isNewToGameCenter
+ authenticateHandler
+ enteringForeground
+ setDidAuthenticate:
+ setAuthenticating:
+ setValidatingAccount:
+ setLastAuthPlayerID:
+ signInViewController
+ setActiveViewController:
+ activeViewController
+ setSignInViewController:
+ currentAlert
+ setCurrentAlert:
+ setLoginAlertView:
+ validatingAccount
+ validateAccountCompletionHandler
+ setValidateAccountCompletionHandler:
+ setEnteringForeground:
+ setAuthenticateAlertDictionary:
+ setupMultiplayerNotifications
+ setLastAuthDate:
+ didAuthenticate
+ setAuthenticateHandler:
+ currentFriendRequestInvocation
+ setCurrentFriendRequestInvocation:
+ loginAlertView
+ dealloc
+ init
+ setRootViewController:
+ environment
+ rootViewController
+ setStatus:
+ setAuthenticated:
- showAlertForTag:
- showCancelledAlertForPlayer:
- showCreateAccountRestrictedAlert
- showEditAccountRestrictedAlert
- showSignInAccountRestrictedAlert
- alertAndSendFriendRequest:destination:
- alertUserInStoreDemoModeEnabled
- alertView:didDismissWithButtonIndex:
- showAuthenticateViewControllerForGameCenter
- callAuthHandlerWithError:
- finishAuthenticationWithError:
- handleUnderlyingErrorForAuthenticateError:
- cancelAuthentication
- showAuthorizeViewController
- showAuthenticateViewController
- shouldReuseControllerForMode:
- presentError:forMode:
- removeActiveViewControllerAnimated:completionHandler:
- showViewController:wrapInNavController:
- showAccountControllerForMode:
- _showWelcomeBanner
- _authenticate
- _showViewControllerForLegacyApps:
- validateAccountWithCompletionHandler:
- signOutWithCompletionHandler:
- _authenticateWithCompletionHandler:
- applicationDidEnterBackground:
- applicationWillEnterForeground:
- deletePhoto
- setPhoto:withCompletionHandler:
- registerListener:
- unregisterListener:
- unregisterAllListeners
- initWithCoder:
- encodeWithCoder:
- loadDefaultLeaderboardIdentifierWithCompletionHandler:
- setDefaultLeaderboardIdentifier:completionHandler:
- reset:
- setEventEmitter:
- daemonFetchGameInvite:
- daemonCancelledGameInvite:
- daemonInviteeRespondedToGameInvite:
- daemonFetchTurnBasedEvent:
- setStatus:withCompletionHandler:
- _addEmail:withCompletionHandler:
- bundleIDIsCompatibleWithCurrentGame:handler:
- updateFromLocalPlayer:
- loadFriendsWithCompletionHandler:
- loadGameRecommendationsWithCompletionHandler:
- canChangePhoto
- showSettings
- authenticateWithCompletionHandler:
- addEmail:withCompletionHandler:
- loadFriendRequests:
- sendFriendRequest:toAliases:players:emailAddresses:twitterScreenNames:facebookIDs:rid:block:
- hasEmailAddress:
- setDefaultLeaderboardCategoryID:completionHandler:
- loadDefaultLeaderboardCategoryIDWithCompletionHandler:
- generateIdentityVerificationSignatureWithCompletionHandler:
- authenticationCompletionHandler
- setAuthenticationCompletionHandler:
- lastUsernameAttempted
- setLastUsernameAttempted:
- lastAccountNameAuthenticated
- setLastAccountNameAuthenticated:
- failedLogins
- setFailedLogins:
- authenticateAlertDictionary
- isAppUnrecognized
- setAppUnrecognized:
- displayNameWithOptions:
- loadFriendRecommendationsWithCompletionHandler:
- acceptedInvite
- setAcceptedInvite:
- setNewToGameCenter:
- isAuthenticated
- isAuthenticating
- eventEmitter
- friends
- loadProfileWithCompletionHandler:
- removeFriend:block:
- lastAuthDate
- lastAuthPlayerID
- isNewToGameCenter
- authenticateHandler
- enteringForeground
- setDidAuthenticate:
- setAuthenticating:
- setValidatingAccount:
- setLastAuthPlayerID:
- signInViewController
- setActiveViewController:
- activeViewController
- setSignInViewController:
- currentAlert
- setCurrentAlert:
- setLoginAlertView:
- validatingAccount
- validateAccountCompletionHandler
- setValidateAccountCompletionHandler:
- setEnteringForeground:
- setAuthenticateAlertDictionary:
- setupMultiplayerNotifications
- setLastAuthDate:
- didAuthenticate
- setAuthenticateHandler:
- currentFriendRequestInvocation
- setCurrentFriendRequestInvocation:
- loginAlertView
- dealloc
- init
- setRootViewController:
- environment
- rootViewController
- setStatus:
- setAuthenticated:
@end
