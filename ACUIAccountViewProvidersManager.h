@interface ACUIAccountViewProvidersManager : NSObject
{
	id _accountTypeToPluginNameMap;
	id _pluginCache;
}

+ init
+ viewControllerClassForCreatingAccountWithType:
+ configurationInfoForCreatingAccountWithType:
+ _accountViewProviderPluginForAccountTypeID:
+ viewControllerClassForViewingAccount:
+ configurationInfoForViewingAccount:
+ _loadAccountViewProviderPluginWithName:
+ .cxx_destruct
- init
- viewControllerClassForCreatingAccountWithType:
- configurationInfoForCreatingAccountWithType:
- _accountViewProviderPluginForAccountTypeID:
- viewControllerClassForViewingAccount:
- configurationInfoForViewingAccount:
- _loadAccountViewProviderPluginWithName:
- .cxx_destruct
@end
