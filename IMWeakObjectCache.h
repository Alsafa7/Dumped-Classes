@interface IMWeakObjectCache : NSObject
{
	id _weakObjectCache;
	struct _tableLock;
}

+ dealloc
+ init
+ copyOrSetObject:forKey:
+ removeObject:key:
+ copyObjectForKey:
+ objectForKey:
- dealloc
- init
- copyOrSetObject:forKey:
- removeObject:key:
- copyObjectForKey:
- objectForKey:
@end
