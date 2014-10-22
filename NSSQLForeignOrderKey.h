@interface NSSQLForeignOrderKey : NSSQLColumn
{
	id _foreignKey;
}

+ foreignKey
+ initWithEntity:propertyDescription:
+ toOneRelationship
+ initWithEntity:foreignKey:
+ initForReadOnlyFetchingOfEntity:toOneRelationship:
+ setFKForReadOnlyFetch:
+ dealloc
- foreignKey
- initWithEntity:propertyDescription:
- toOneRelationship
- initWithEntity:foreignKey:
- initForReadOnlyFetchingOfEntity:toOneRelationship:
- setFKForReadOnlyFetch:
- dealloc
@end
