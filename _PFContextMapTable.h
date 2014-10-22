@interface _PFContextMapTable : NSObject
{
	usigned long long _slotLimit;
	pointer _objectsByTemporaryID;
	pointer _objectsByPermanentObjectID;
	pointer _objectsBy64bitPKID;
	pointer _capacitiesFor64bitPKMappings;
	struct _flags;
}

+ _dispose
+ initWithWeaksReferences:
+ setForUseWithModel:
+ getAllObjects:
+ setCapacityHint:forSlot:
+ clearTemporaryIDs
+ dealloc
+ finalize
- _dispose
- initWithWeaksReferences:
- setForUseWithModel:
- getAllObjects:
- setCapacityHint:forSlot:
- clearTemporaryIDs
- dealloc
- finalize
@end
