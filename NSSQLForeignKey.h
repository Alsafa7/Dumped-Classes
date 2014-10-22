@interface NSSQLForeignKey : NSSQLColumn
{
	id _toOne;
}

+ initWithEntity:propertyDescription:
+ copyValuesForReadOnlyFetch:
+ toOneRelationship
+ initForReadOnlyFetchingOfEntity:toOneRelationship:
+ initWithEntity:toOneRelationship:
+ dealloc
- initWithEntity:propertyDescription:
- copyValuesForReadOnlyFetch:
- toOneRelationship
- initForReadOnlyFetchingOfEntity:toOneRelationship:
- initWithEntity:toOneRelationship:
- dealloc
@end
