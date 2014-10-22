@interface NSManagedObject : NSObject
{
	int _cd_rc;
	usigned long long _cd_stateFlags;
	id _cd_rawData;
	id _cd_entity;
	id _cd_managedObjectContext;
	id _cd_objectID;
	usigned long long _cd_extraFlags;
	id _cd_observationInfo;
	pointer _cd_snapshots;
	usigned long long _cd_lockingInfo;
	id _cd_queueReference;
}

@end
