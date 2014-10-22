@interface NSSQLModel : NSStoreMapping
{
	id _configuration;
	id _mom;
	id _entitiesByName;
	id _entities;
	pointer _entityDescriptionToSQLMap;
	usigned long long _brokenHashVersion;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
	BOOL _hasVirtualToOnes;
}

+ configurationName
+ initWithManagedObjectModel:configurationName:retainHashHack:
+ entityNamed:
+ initWithManagedObjectModel:configurationName:brokenHashVersion:
+ entityForID:
+ _modelHasPrecomputedKeyOrder
+ _recordHasVirtualToOnes
+ _useLeopardStyleHashing
+ _useSnowLeopardStyleHashing
+ _precomputedKeyOrderForEntity:
+ _addIndexedEntity:
+ _generateModel:error:
+ initWithManagedObjectModel:configurationName:retainHashHack:brokenHashVersion:
+ _entityMapping
+ initWithManagedObjectModel:configurationName:
+ _sqlEntityWithRenamingIdentifier:
+ entityIDForName:
+ _retainHashHack
+ dealloc
+ managedObjectModel
+ entitiesByName
+ finalize
+ entities
- configurationName
- initWithManagedObjectModel:configurationName:retainHashHack:
- entityNamed:
- initWithManagedObjectModel:configurationName:brokenHashVersion:
- entityForID:
- _modelHasPrecomputedKeyOrder
- _recordHasVirtualToOnes
- _useLeopardStyleHashing
- _useSnowLeopardStyleHashing
- _precomputedKeyOrderForEntity:
- _addIndexedEntity:
- _generateModel:error:
- initWithManagedObjectModel:configurationName:retainHashHack:brokenHashVersion:
- _entityMapping
- initWithManagedObjectModel:configurationName:
- _sqlEntityWithRenamingIdentifier:
- entityIDForName:
- _retainHashHack
- dealloc
- managedObjectModel
- entitiesByName
- finalize
- entities
@end
