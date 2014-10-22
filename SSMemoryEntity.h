@interface SSMemoryEntity : NSObject
{
	long long _databaseID;
	id _propertyValues;
	id _externalPropertyValues;
}

+ databaseID
+ dealloc
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ valueForProperty:
+ setValue:forProperty:
+ setValues:forProperties:count:
+ setValuesWithDictionary:
+ setExternalValuesWithDictionary:
+ setDatabaseID:
+ reloadFromDatabaseEntity:properties:
+ setValues:forExternalProperties:count:
+ propertyValues
+ externalPropertyValues
+ initWithDatabaseEntity:properties:
+ setValue:forExternalProperty:
+ valueForExternalProperty:
- databaseID
- dealloc
- init
- isEqual:
- hash
- description
- copyWithZone:
- valueForProperty:
- setValue:forProperty:
- setValues:forProperties:count:
- setValuesWithDictionary:
- setExternalValuesWithDictionary:
- setDatabaseID:
- reloadFromDatabaseEntity:properties:
- setValues:forExternalProperties:count:
- propertyValues
- externalPropertyValues
- initWithDatabaseEntity:properties:
- setValue:forExternalProperty:
- valueForExternalProperty:
@end
