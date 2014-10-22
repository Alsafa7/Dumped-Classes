@interface MBSettingsContext : NSObject
{
	BOOL _createAppPlaceholders;
	BOOL _shouldPreserveSettings;
	BOOL _shouldRestoreSystemFiles;
	id _mobileInstallation;
	id _domainsByName;
	id _restoreDir;
	id _incompleteRestoreDir;
	double _safeHarborExpiration;
	id _plugins;
}

+ shouldPreserveSettings
+ shouldRestoreSystemFiles
+ setMobileInstallation:
+ setDomainsByName:
+ setRestoreDir:
+ setIncompleteRestoreDir:
+ setSafeHarborExpiration:
+ setCreateAppPlaceholders:
+ setShouldPreserveSettings:
+ domainsByName
+ restoreDir
+ createAppPlaceholders
+ setShouldRestoreSystemFiles:
+ setPlugins:
+ dealloc
+ init
+ copyWithZone:
+ log
+ mobileInstallation
+ safeHarborExpiration
+ incompleteRestoreDir
+ plugins
- shouldPreserveSettings
- shouldRestoreSystemFiles
- setMobileInstallation:
- setDomainsByName:
- setRestoreDir:
- setIncompleteRestoreDir:
- setSafeHarborExpiration:
- setCreateAppPlaceholders:
- setShouldPreserveSettings:
- domainsByName
- restoreDir
- createAppPlaceholders
- setShouldRestoreSystemFiles:
- setPlugins:
- dealloc
- init
- copyWithZone:
- log
- mobileInstallation
- safeHarborExpiration
- incompleteRestoreDir
- plugins
@end
