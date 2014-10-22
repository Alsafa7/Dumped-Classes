@interface _NSCoreDataTaggedObjectIDFactory : NSObject
{
	int _cd_rc;
	unsigned int _taggedPoolIndex;
	id _fallbackFactories;
}

+ initWithPK64:
+ setObjectStoreIdentifier:
+ allocateBatch:count:
+ managedObjectIDFromUTF8String:length:
+ managedObjectIDFromURIRepresentation:
+ _setStoreInfo1:
+ _storeInfo1
+ _storeDeallocated
+ _fallbackFactory
+ _initCoreWithTaggedIndex:
+ release
+ retain
+ dealloc
+ retainCount
+ allocWithZone:
+ alloc
- initWithPK64:
- setObjectStoreIdentifier:
- allocateBatch:count:
- managedObjectIDFromUTF8String:length:
- managedObjectIDFromURIRepresentation:
- _setStoreInfo1:
- _storeInfo1
- _storeDeallocated
- _fallbackFactory
- _initCoreWithTaggedIndex:
- release
- retain
- dealloc
- retainCount
- allocWithZone:
- alloc
@end
