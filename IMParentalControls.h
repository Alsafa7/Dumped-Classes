@interface IMParentalControls : NSObject
{
	BOOL _shouldPostNotifications;
	BOOL _active;
	BOOL _disableAV;
	BOOL _forceChatLogging;
	id _parentalControls;
}

+ dealloc
+ init
+ active
+ okToConnectAccount:
+ setShouldPostNotifications:
+ _updateParentalSettings
+ _managedPrefsNotification:
+ _serviceWithName:
+ disableAV
+ forceChatLogging
+ disableService:
+ whitelistForService:
+ forceWhitelistForService:
+ accountIsEnabled:
+ disableAccount:
+ whitelistForAccount:
+ forceWhitelistForAccount:
+ accountHasWhitelist:
+ shouldPostNotifications
+ _parentalControls
+ _disableAV
+ _forceChatLogging
- dealloc
- init
- active
- okToConnectAccount:
- setShouldPostNotifications:
- _updateParentalSettings
- _managedPrefsNotification:
- _serviceWithName:
- disableAV
- forceChatLogging
- disableService:
- whitelistForService:
- forceWhitelistForService:
- accountIsEnabled:
- disableAccount:
- whitelistForAccount:
- forceWhitelistForAccount:
- accountHasWhitelist:
- shouldPostNotifications
- _parentalControls
- _disableAV
- _forceChatLogging
@end
