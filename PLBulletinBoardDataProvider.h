@interface PLBulletinBoardDataProvider : NSObject
{
	id _bulletins;
	id _bulletinThumbnailData;
	id _serialQueue;
	long long _lastDisplayedRecordID;
	unsigned int _defaultSoundID;
}

+ defaultSoundID
+ _createSoundForPath:
+ _updateImageDataCache:
+ _imageDataForRecordID:
+ _applicationBadgeCountChanged
+ _bulletinsChanged
+ _undisplayedBulletinsFromBulletins:
+ _bulletinFromDictionary:isOriginal:
+ _discardedBulletinsFromCurrentBulletins:
+ _updateLastDisplayedBulletinRecordID:
+ setDefaultSoundID:
+ setBulletins:
+ bulletins
+ dealloc
+ init
+ sectionIdentifier
+ sectionParameters
+ dataProviderDidLoad
+ bulletinsFilteredBy:count:lastCleared:
+ clearedInfoForBulletins:lastClearedInfo:
+ attachmentPNGDataForRecordID:sizeConstraints:
+ attachmentAspectRatioForRecordID:
+ defaultSectionInfo
+ sortDescriptors
- defaultSoundID
- _createSoundForPath:
- _updateImageDataCache:
- _imageDataForRecordID:
- _applicationBadgeCountChanged
- _bulletinsChanged
- _undisplayedBulletinsFromBulletins:
- _bulletinFromDictionary:isOriginal:
- _discardedBulletinsFromCurrentBulletins:
- _updateLastDisplayedBulletinRecordID:
- setDefaultSoundID:
- setBulletins:
- bulletins
- dealloc
- init
- sectionIdentifier
- sectionParameters
- dataProviderDidLoad
- bulletinsFilteredBy:count:lastCleared:
- clearedInfoForBulletins:lastClearedInfo:
- attachmentPNGDataForRecordID:sizeConstraints:
- attachmentAspectRatioForRecordID:
- defaultSectionInfo
- sortDescriptors
@end
