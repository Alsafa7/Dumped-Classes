@interface EKObjectID : NSObject
{
	BOOL _temporary;
	int _entityType;
	int _rowID;
}

+ CADObjectID
+ rowID
+ isTemporary
+ initWithEntityType:rowID:temporary:
+ entityType
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ dictionaryRepresentation
+ entityName
+ URIRepresentation
+ initWithDictionaryRepresentation:
+ stringRepresentation
- CADObjectID
- rowID
- isTemporary
- initWithEntityType:rowID:temporary:
- entityType
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- dictionaryRepresentation
- entityName
- URIRepresentation
- initWithDictionaryRepresentation:
- stringRepresentation
@end
