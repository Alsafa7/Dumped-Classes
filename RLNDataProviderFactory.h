@interface RLNDataProviderFactory : NSObject
{
	id _dataProvidersBySectionID;
}

+ _noteInstalledAppsDidChange:
+ _notePushStoreAppsDidChange:
+ reloadDataProviders
+ createDataProviderWithSectionID:
+ _reloadDataProviders:
+ dealloc
+ init
- _noteInstalledAppsDidChange:
- _notePushStoreAppsDidChange:
- reloadDataProviders
- createDataProviderWithSectionID:
- _reloadDataProviders:
- dealloc
- init
@end
