@interface NSSQLRelationship : NSSQLProperty
{
	id _destinationEntity;
	id _inverse;
}

+ destinationEntity
+ correlationTableName
+ foreignKey
+ inverseRelationship
+ initWithEntity:propertyDescription:
+ copyValuesForReadOnlyFetch:
+ relationshipDescription
+ sourceEntity
+ _setInverseRelationship:
+ initForReadOnlyFetchWithEntity:propertyDescription:
+ _setForeignOrderKey:
+ dealloc
+ isOrdered
- destinationEntity
- correlationTableName
- foreignKey
- inverseRelationship
- initWithEntity:propertyDescription:
- copyValuesForReadOnlyFetch:
- relationshipDescription
- sourceEntity
- _setInverseRelationship:
- initForReadOnlyFetchWithEntity:propertyDescription:
- _setForeignOrderKey:
- dealloc
- isOrdered
@end
