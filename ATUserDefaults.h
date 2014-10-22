@interface ATUserDefaults : NSObject
{
	id _defaults;
}

+ dealloc
+ init
+ hasCompletedDataMigration
+ _updateDefaults
+ updateHostInfo:disabledAssetTypes:
+ updateLastSyncWithHostLibrary:
+ removeHost:
+ hostInfoForIdentifier:
+ allHosts
+ setHasCompletedDataMigration:
+ setDiskUsageInfo:
+ diskUsageInfo
- dealloc
- init
- hasCompletedDataMigration
- _updateDefaults
- updateHostInfo:disabledAssetTypes:
- updateLastSyncWithHostLibrary:
- removeHost:
- hostInfoForIdentifier:
- allHosts
- setHasCompletedDataMigration:
- setDiskUsageInfo:
- diskUsageInfo
@end
