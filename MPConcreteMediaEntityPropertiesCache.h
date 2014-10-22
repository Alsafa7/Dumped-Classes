@interface MPConcreteMediaEntityPropertiesCache : NSObject
{
	Class _dataProviderEntityClass;
	long long _identifier;
	id _properties;
	id _valuePersistenceBlocks;
	id _propertiesQueue;
}

+ dataProviderEntityClass
+ valueForProperty:isCached:
+ cacheValue:forProperty:persistValueInBackgroundBlock:
+ cachePropertyValues:forProperties:persistValueInBackgroundBlock:
+ _onBarrierCacheValues:persistValueInBackgroundBlock:
+ initWithDataProviderEntityClass:identifier:
+ dealloc
+ invalidate
+ identifier
+ delete
+ .cxx_destruct
- dataProviderEntityClass
- valueForProperty:isCached:
- cacheValue:forProperty:persistValueInBackgroundBlock:
- cachePropertyValues:forProperties:persistValueInBackgroundBlock:
- _onBarrierCacheValues:persistValueInBackgroundBlock:
- initWithDataProviderEntityClass:identifier:
- dealloc
- invalidate
- identifier
- delete
- .cxx_destruct
@end
