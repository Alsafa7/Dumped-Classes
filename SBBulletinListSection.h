@interface SBBulletinListSection : NSObject
{
	id _sectionID;
	long long _sectionType;
	long long _sectionCategory;
	id _widget;
	id _bulletins;
	id _bulletinIDs;
	id _sortDescriptors;
	id _displayName;
	id _iconImage;
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	usigned long long _messageNumberOfLines;
	BOOL _displaysCriticalBulletins;
	id _lastSortDate;
	id _subsections;
	id _largeIconImage;
	id _sectionInfo;
}

+ isWidgetSection
+ showsMessagePreviewForBulletinID:
+ largeIconImage
+ hasClearableBulletins
+ addBulletin:
+ removeBulletin:
+ isBulletinSection
+ _updateWithSectionInfo:
+ setShowsInLockScreen:forSubsectionID:
+ setShowsMessagePreview:forSubsectionID:
+ lastSortDate
+ _indexForNewBulletin:
+ indexOfBulletinID:
+ _removeBulletin:
+ setLargeIconImage:
+ bulletinAtIndex:
+ bulletinWithBulletinID:
+ _subsectionWithIDCreatingIfNecessary:
+ initWithSectionInfo:
+ updateWithSectionInfo:
+ compareSection:forOrder:
+ indexOfBulletinWithLocalNotification:
+ replaceBulletin:withBulletin:
+ hasBulletinWithID:
+ showsBulletinIDInLockScreen:
+ showsBulletinsInSubsectionIDInLockScreen:
+ showsMessagePreviewForBulletinsInSubsectionID:
+ setWidget:
+ bulletins
+ sectionInfo
+ dealloc
+ description
+ compare:
+ iconImage
+ displayName
+ setSortDescriptors:
+ sectionID
+ setSectionID:
+ subsectionIDs
+ showsMessagePreview
+ setShowsMessagePreview:
+ showsInLockScreen
+ sectionCategory
+ setShowsInLockScreen:
+ setSectionCategory:
+ displaysCriticalBulletins
+ bulletinCount
+ setMessageNumberOfLines:
+ messageNumberOfLines
+ setSectionInfo:
+ setDisplayName:
+ sortDescriptors
+ setIconImage:
+ widget
- isWidgetSection
- showsMessagePreviewForBulletinID:
- largeIconImage
- hasClearableBulletins
- addBulletin:
- removeBulletin:
- isBulletinSection
- _updateWithSectionInfo:
- setShowsInLockScreen:forSubsectionID:
- setShowsMessagePreview:forSubsectionID:
- lastSortDate
- _indexForNewBulletin:
- indexOfBulletinID:
- _removeBulletin:
- setLargeIconImage:
- bulletinAtIndex:
- bulletinWithBulletinID:
- _subsectionWithIDCreatingIfNecessary:
- initWithSectionInfo:
- updateWithSectionInfo:
- compareSection:forOrder:
- indexOfBulletinWithLocalNotification:
- replaceBulletin:withBulletin:
- hasBulletinWithID:
- showsBulletinIDInLockScreen:
- showsBulletinsInSubsectionIDInLockScreen:
- showsMessagePreviewForBulletinsInSubsectionID:
- setWidget:
- bulletins
- sectionInfo
- dealloc
- description
- compare:
- iconImage
- displayName
- setSortDescriptors:
- sectionID
- setSectionID:
- subsectionIDs
- showsMessagePreview
- setShowsMessagePreview:
- showsInLockScreen
- sectionCategory
- setShowsInLockScreen:
- setSectionCategory:
- displaysCriticalBulletins
- bulletinCount
- setMessageNumberOfLines:
- messageNumberOfLines
- setSectionInfo:
- setDisplayName:
- sortDescriptors
- setIconImage:
- widget
@end
