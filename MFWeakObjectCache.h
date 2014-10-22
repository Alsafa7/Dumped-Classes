@interface MFWeakObjectCache : NSObject
{
	id _block;
	id _dictionary;
	id _lock;
}

+ initWithBlock:
+ dealloc
+ removeObjectForKey:
+ objectForKey:wasCached:
+ objectForKey:
- initWithBlock:
- dealloc
- removeObjectForKey:
- objectForKey:wasCached:
- objectForKey:
@end
