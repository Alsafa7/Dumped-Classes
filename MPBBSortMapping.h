@interface MPBBSortMapping : NSObject
{
	id _recordIDsToSuppress;
	id _bulletinRecordIDToSortIdentifier;
	id _domain;
}

+ initForDomain:
+ flushCacheKeepingRecordIDs:
+ suppressBulletinForRecordID:
+ recordIDsToSuppress
+ setRecordIDsToSuppress:
+ _loadSortMappingFromPreferences
+ _saveSortMappingToPreferences
+ suppressBulletinsWithSortIdentifierLessThanOrEqualTo:
+ isBulletinSuppressedForRecordID:
+ bulletinRecordIDToSortIdentifier
+ setBulletinRecordIDToSortIdentifier:
+ _suppressBulletinForRecordID:saving:
+ dealloc
+ domain
- initForDomain:
- flushCacheKeepingRecordIDs:
- suppressBulletinForRecordID:
- recordIDsToSuppress
- setRecordIDsToSuppress:
- _loadSortMappingFromPreferences
- _saveSortMappingToPreferences
- suppressBulletinsWithSortIdentifierLessThanOrEqualTo:
- isBulletinSuppressedForRecordID:
- bulletinRecordIDToSortIdentifier
- setBulletinRecordIDToSortIdentifier:
- _suppressBulletinForRecordID:saving:
- dealloc
- domain
@end
