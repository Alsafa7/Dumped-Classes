@interface AppLaunchStatsSBSettings : NSObject
{
	id aplsSettingsQueue;
	id callbackBlock;
	id saveAndRestoreContext;
	id settingsBlacklist;
	id aplsSBSettingsDefault;
}

+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ saveContext:
+ loadSettingsBlacklist
+ isManagedConfigurationSettingOn
+ isAppDisabledInSettingsList:
+ init:
+ .cxx_destruct
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- saveContext:
- loadSettingsBlacklist
- isManagedConfigurationSettingOn
- isAppDisabledInSettingsList:
- init:
- .cxx_destruct
@end
