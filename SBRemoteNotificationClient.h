@interface SBRemoteNotificationClient : NSObject
{
	id _bundleIdentifier;
	id _environment;
	usigned long long _appEnabledTypes;
	usigned long long _settingsEnabledTypes;
	usigned long long _settingsPresentedTypes;
	id _lastKnownDeviceToken;
	id _missingDate;
	long long _dayOfLastNewsstandPush;
	usigned long long _dailyCountOfNewsstandPushes;
	BOOL _hasShownSystemwideEnableAlert;
	id _lastUserInfo;
	id _tokenToUserInfos;
}

+ tokenToUserInfos
+ effectivelyEnabledTypes
+ setUserInfo:forToken:
+ getUserInfoForToken:
+ appEnabledTypes
+ setAppEnabledTypes:
+ settingsEnabledTypes
+ setSettingsEnabledTypes:
+ settingsPresentedTypes
+ setSettingsPresentedTypes:
+ lastKnownDeviceToken
+ setLastKnownDeviceToken:
+ missingDate
+ setMissingDate:
+ dayOfLastNewsstandPush
+ setDayOfLastNewsstandPush:
+ dailyCountOfNewsstandPushes
+ setDailyCountOfNewsstandPushes:
+ hasShownSystemwideEnableAlert
+ setHasShownSystemwideEnableAlert:
+ lastUserInfo
+ setLastUserInfo:
+ setEnvironment:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ bundleIdentifier
+ environment
+ initWithBundleIdentifier:
- tokenToUserInfos
- effectivelyEnabledTypes
- setUserInfo:forToken:
- getUserInfoForToken:
- appEnabledTypes
- setAppEnabledTypes:
- settingsEnabledTypes
- setSettingsEnabledTypes:
- settingsPresentedTypes
- setSettingsPresentedTypes:
- lastKnownDeviceToken
- setLastKnownDeviceToken:
- missingDate
- setMissingDate:
- dayOfLastNewsstandPush
- setDayOfLastNewsstandPush:
- dailyCountOfNewsstandPushes
- setDailyCountOfNewsstandPushes:
- hasShownSystemwideEnableAlert
- setHasShownSystemwideEnableAlert:
- lastUserInfo
- setLastUserInfo:
- setEnvironment:
- dealloc
- initWithCoder:
- encodeWithCoder:
- bundleIdentifier
- environment
- initWithBundleIdentifier:
@end
