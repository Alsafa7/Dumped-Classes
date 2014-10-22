@interface ACBulletinManager : NSObject
{
	id _observer;
	id _currentBulletins;
	id _delegate;
}

+ _setupObserver
+ _bulletinsDidChange
+ _displayNameForSectionID:
+ currentBulletins
+ bulletinForIdentifier:
+ markBulletinWithIdentifier:asRead:
+ dealloc
+ setDelegate:
+ init
+ delegate
+ observer:addBulletin:forFeed:
+ observer:modifyBulletin:
+ observer:removeBulletin:
+ observer:purgeReferencesToBulletinID:
+ observer:noteInvalidatedBulletinIDs:
+ .cxx_destruct
- _setupObserver
- _bulletinsDidChange
- _displayNameForSectionID:
- currentBulletins
- bulletinForIdentifier:
- markBulletinWithIdentifier:asRead:
- dealloc
- setDelegate:
- init
- delegate
- observer:addBulletin:forFeed:
- observer:modifyBulletin:
- observer:removeBulletin:
- observer:purgeReferencesToBulletinID:
- observer:noteInvalidatedBulletinIDs:
- .cxx_destruct
@end
