@interface NSExternalRefCountedData : NSObject
{
	int _cd_rc;
	int _externalReferenceCount;
	struct _externalRefFlags;
	pointer _toManyMap;
	double _birth;
}

+ _initializeRelationshipCaches
+ initWithOptions:andTimestamp:
+ incrementRefCount
+ decrementRefCount
+ externalReferenceCount
+ incrementExternalReferenceCount:
+ copyRelationshipCachesFrom:
+ releaseRelationshipCaches
+ updateMissingRelationshipCachesFromOriginal:
+ relatedObjectIDsForProperty:
+ timestampForProperty:
+ setRelatedObjectIDs:forProperty:options:andTimestamp:
+ ancillaryOrderKeysForProperty:
+ setAncillaryOrderKeys:forProperty:options:andTimestamp:
+ release
+ retain
+ dealloc
+ retainCount
+ timestamp
+ setTimestamp:
+ _tryRetain
+ _isDeallocating
+ options
+ objectID
- _initializeRelationshipCaches
- initWithOptions:andTimestamp:
- incrementRefCount
- decrementRefCount
- externalReferenceCount
- incrementExternalReferenceCount:
- copyRelationshipCachesFrom:
- releaseRelationshipCaches
- updateMissingRelationshipCachesFromOriginal:
- relatedObjectIDsForProperty:
- timestampForProperty:
- setRelatedObjectIDs:forProperty:options:andTimestamp:
- ancillaryOrderKeysForProperty:
- setAncillaryOrderKeys:forProperty:options:andTimestamp:
- release
- retain
- dealloc
- retainCount
- timestamp
- setTimestamp:
- _tryRetain
- _isDeallocating
- options
- objectID
@end
