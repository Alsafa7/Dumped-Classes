@interface EKRelation : NSObject
{
	id _entityName;
	BOOL _toMany;
	BOOL _ownsRelated;
	id _inversePropertyName;
}

+ toMany
+ ownsRelatedObject
+ inversePropertyName
+ initWithEntityName:toMany:inversePropertyName:ownsRelated:
+ dealloc
- toMany
- ownsRelatedObject
- inversePropertyName
- initWithEntityName:toMany:inversePropertyName:ownsRelated:
- dealloc
@end
