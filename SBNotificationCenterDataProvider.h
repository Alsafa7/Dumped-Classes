@interface SBNotificationCenterDataProvider : NSObject
{
	id _sectionInfo;
}

+ initWithSectionInfo:
+ dealloc
+ sectionIdentifier
+ bulletinsWithRequestParameters:lastCleared:
+ defaultSectionInfo
+ sortDescriptors
- initWithSectionInfo:
- dealloc
- sectionIdentifier
- bulletinsWithRequestParameters:lastCleared:
- defaultSectionInfo
- sortDescriptors
@end
