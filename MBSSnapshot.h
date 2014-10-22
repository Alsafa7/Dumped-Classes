@interface MBSSnapshot : PBCodable
{
	usigned long long _committed;
	usigned long long _lastModified;
	usigned long long _quotaReserved;
	id _attributes;
	unsigned int _snapshotID;
	struct _has;
}

+ isIncompatible
+ committed
+ setSnapshotID:
+ setQuotaReserved:
+ hasCommitted
+ setCommitted:
+ setHasCommitted:
+ hasLastModified
+ setHasLastModified:
+ hasSnapshotID
+ hasQuotaReserved
+ setHasSnapshotID:
+ setHasQuotaReserved:
+ setLastModified:
+ dealloc
+ isEqual:
+ hash
+ description
+ dictionaryRepresentation
+ attributes
+ setAttributes:
+ snapshotID
+ quotaReserved
+ readFrom:
+ writeTo:
+ copyTo:
+ lastModified
+ hasAttributes
- isIncompatible
- committed
- setSnapshotID:
- setQuotaReserved:
- hasCommitted
- setCommitted:
- setHasCommitted:
- hasLastModified
- setHasLastModified:
- hasSnapshotID
- hasQuotaReserved
- setHasSnapshotID:
- setHasQuotaReserved:
- setLastModified:
- dealloc
- isEqual:
- hash
- description
- dictionaryRepresentation
- attributes
- setAttributes:
- snapshotID
- quotaReserved
- readFrom:
- writeTo:
- copyTo:
- lastModified
- hasAttributes
@end
