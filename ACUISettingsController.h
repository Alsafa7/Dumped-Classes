@interface ACUISettingsController : PSListController
{
	id _accountStore;
	id _accounts;
	id _accountSpecifiers;
	id _accountGroupSpecifier;
	id _addAccountSpecifier;
	id _loadingInProgressSpecifiers;
	id _lazyLoadedSpecifiers;
	id _pluginToSpecifiersMap;
	BOOL _isLazyLoadingPluginSpecifiers;
	id _settingsPluginManager;
}

@end
