@interface GKAggregateMapping : NSObject
{
	id _dataSource;
	long long _sectionCount;
	id _dynamicTag;
	id _globalToLocalSections;
	id _localToGlobalSections;
	id _globalSectionsToTags;
}

+ _gkDescriptionWithChildren:
+ setDynamicTag:
+ globalSectionForLocalSection:
+ updateMappingsStartingWithGlobalSection:
+ localSectionForGlobalSection:
+ globalIndexPathForLocalIndexPath:
+ tagForGlobalSection:
+ localIndexPathForGlobalIndexPath:
+ setSectionCount:
+ globalToLocalSections
+ setGlobalToLocalSections:
+ localToGlobalSections
+ setLocalToGlobalSections:
+ globalSectionsToTags
+ setGlobalSectionsToTags:
+ initWithGlobalToLocalMapping:
+ addMappingFromGlobalSection:toLocalSection:withTag:
+ dynamicTag
+ dealloc
+ setDataSource:
+ init
+ description
+ dataSource
+ copyWithZone:
+ sectionCount
- _gkDescriptionWithChildren:
- setDynamicTag:
- globalSectionForLocalSection:
- updateMappingsStartingWithGlobalSection:
- localSectionForGlobalSection:
- globalIndexPathForLocalIndexPath:
- tagForGlobalSection:
- localIndexPathForGlobalIndexPath:
- setSectionCount:
- globalToLocalSections
- setGlobalToLocalSections:
- localToGlobalSections
- setLocalToGlobalSections:
- globalSectionsToTags
- setGlobalSectionsToTags:
- initWithGlobalToLocalMapping:
- addMappingFromGlobalSection:toLocalSection:withTag:
- dynamicTag
- dealloc
- setDataSource:
- init
- description
- dataSource
- copyWithZone:
- sectionCount
@end
