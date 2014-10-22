@interface ML3Entity : NSObject
{
	id _library;
	long long _persistentID;
}

+ isEqual:
+ hash
+ description
+ copyWithZone:
+ valueForProperty:
+ library
+ setLibrary:
+ setValue:forProperty:
+ persistentID
+ initWithPersistentID:inLibrary:
+ getValues:forProperties:count:
+ initWithDictionary:inLibrary:cachedNameOrders:
+ setValues:forProperties:
+ didChangeValueForProperties:
+ copyInLibrary:
+ existsInLibrary
+ matchesPredicate:
+ setValues:forProperties:count:
+ setValues:forProperties:async:withCompletionBlock:
+ setValuesForPropertiesWithDictionary:
+ deleteFromLibrary
+ incrementRevision
+ .cxx_destruct
- isEqual:
- hash
- description
- copyWithZone:
- valueForProperty:
- library
- setLibrary:
- setValue:forProperty:
- persistentID
- initWithPersistentID:inLibrary:
- getValues:forProperties:count:
- initWithDictionary:inLibrary:cachedNameOrders:
- setValues:forProperties:
- didChangeValueForProperties:
- copyInLibrary:
- existsInLibrary
- matchesPredicate:
- setValues:forProperties:count:
- setValues:forProperties:async:withCompletionBlock:
- setValuesForPropertiesWithDictionary:
- deleteFromLibrary
- incrementRevision
- .cxx_destruct
@end
