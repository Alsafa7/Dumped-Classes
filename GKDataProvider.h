@interface GKDataProvider : GKBulletinController
{
	unsigned int _defaultSoundID;
	unsigned int _customSoundID;
}

+ customSoundID
+ defaultSoundID
+ setCustomSoundID:
+ createSoundForPath:
+ setDefaultSoundID:
+ bulletinRequestFromBulletin:
+ respondWithBulletin:
+ withdrawBulletin:
+ presentBulletin:
+ dealloc
+ init
+ sectionIdentifier
+ syncsBulletinDismissal
+ sectionParameters
+ dataProviderDidLoad
+ bulletinsFilteredBy:count:lastCleared:
+ clearedInfoForBulletins:lastClearedInfo:
+ defaultSectionInfo
+ sortDescriptors
- customSoundID
- defaultSoundID
- setCustomSoundID:
- createSoundForPath:
- setDefaultSoundID:
- bulletinRequestFromBulletin:
- respondWithBulletin:
- withdrawBulletin:
- presentBulletin:
- dealloc
- init
- sectionIdentifier
- syncsBulletinDismissal
- sectionParameters
- dataProviderDidLoad
- bulletinsFilteredBy:count:lastCleared:
- clearedInfoForBulletins:lastClearedInfo:
- defaultSectionInfo
- sortDescriptors
@end
