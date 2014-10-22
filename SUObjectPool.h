@interface SUObjectPool : NSObject
{
	id _poolObjects;
	id _vendedObjects;
}

+ dealloc
+ copyPoppedObjectForClass:
+ vendedObjects
+ addObjectsOfClass:count:forClass:
+ addObjects:forClass:
- dealloc
- copyPoppedObjectForClass:
- vendedObjects
- addObjectsOfClass:count:forClass:
- addObjects:forClass:
@end
