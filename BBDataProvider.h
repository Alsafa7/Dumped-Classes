@interface BBDataProvider : NSObject
{
	id _identity;
}

+ sortKey
+ identity
+ dealloc
+ description
+ invalidate
+ sectionIdentifier
+ syncsBulletinDismissal
+ canClearAllBulletins
+ clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:lastClearedInfo:completion:
+ clearedInfoForBulletins:lastClearedInfo:completion:
+ sectionParameters
+ attachmentPNGDataForRecordID:sizeConstraints:completion:
+ attachmentAspectRatioForRecordID:completion:
+ deliverMessageWithName:userInfo:
+ bulletinsWithRequestParameters:lastCleared:completion:
+ updateClearedInfoWithClearedInfo:handler:completion:
+ updateSectionInfoWithSectionInfo:handler:completion:
+ sectionDisplayName
+ sectionIcon
+ deliverResponse:forBulletinRequest:
+ isPushDataProvider
+ dataProviderDidLoad
+ defaultSectionInfo
+ defaultSubsectionInfos
+ displayNameForSubsectionID:
+ migrateSectionInfo:oldSectionInfo:
+ noteSectionInfoDidChange:
+ initialized
+ startWatchdog
+ reloadIdentityWithCompletion:
+ canPerformMigration
+ setIdentity:
+ sortDescriptors
- sortKey
- identity
- dealloc
- description
- invalidate
- sectionIdentifier
- syncsBulletinDismissal
- canClearAllBulletins
- clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:lastClearedInfo:completion:
- clearedInfoForBulletins:lastClearedInfo:completion:
- sectionParameters
- attachmentPNGDataForRecordID:sizeConstraints:completion:
- attachmentAspectRatioForRecordID:completion:
- deliverMessageWithName:userInfo:
- bulletinsWithRequestParameters:lastCleared:completion:
- updateClearedInfoWithClearedInfo:handler:completion:
- updateSectionInfoWithSectionInfo:handler:completion:
- sectionDisplayName
- sectionIcon
- deliverResponse:forBulletinRequest:
- isPushDataProvider
- dataProviderDidLoad
- defaultSectionInfo
- defaultSubsectionInfos
- displayNameForSubsectionID:
- migrateSectionInfo:oldSectionInfo:
- noteSectionInfoDidChange:
- initialized
- startWatchdog
- reloadIdentityWithCompletion:
- canPerformMigration
- setIdentity:
- sortDescriptors
@end
