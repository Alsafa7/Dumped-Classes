@interface _UILazyMapTable : NSObject
{
	id _mappingBlock;
	id _keysToClientTables;
	id _keysToValues;
	id _valuesToKeys;
}

+ dealloc
+ count
+ description
+ initWithMappingBlock:
+ cachedObjectEnumerable
+ registerClient:ofObjectForKey:
+ hasCachedObjectForKey:
+ unregisterClient:ofObjectForKey:
+ cachedObjects
+ keys
+ keyEnumerable
+ objectForKey:
- dealloc
- count
- description
- initWithMappingBlock:
- cachedObjectEnumerable
- registerClient:ofObjectForKey:
- hasCachedObjectForKey:
- unregisterClient:ofObjectForKey:
- cachedObjects
- keys
- keyEnumerable
- objectForKey:
@end
