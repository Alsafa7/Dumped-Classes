@interface MPConcreteMediaItemCollection : MPMediaItemCollection
{
	long long _identifier;
	id _itemsQuery;
	long long _grouping;
	id _representativeItem;
	id _propertiesCache;
}

+ itemsQuery
+ representativeItem
+ mediaLibrary
+ initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:
+ setValue:forProperty:withCompletionBlock:
+ enumerateValuesForProperties:usingBlock:
+ valuesForProperties:
+ cachedPropertyValues
+ invalidateCachedProperties
+ _initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:propertiesCache:
+ initWithIdentifier:itemsQuery:grouping:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ count
+ isEqual:
+ hash
+ copyWithZone:
+ items
+ valueForProperty:
+ setValue:forProperty:
+ persistentID
+ .cxx_destruct
- itemsQuery
- representativeItem
- mediaLibrary
- initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:
- setValue:forProperty:withCompletionBlock:
- enumerateValuesForProperties:usingBlock:
- valuesForProperties:
- cachedPropertyValues
- invalidateCachedProperties
- _initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:propertiesCache:
- initWithIdentifier:itemsQuery:grouping:
- dealloc
- initWithCoder:
- encodeWithCoder:
- count
- isEqual:
- hash
- copyWithZone:
- items
- valueForProperty:
- setValue:forProperty:
- persistentID
- .cxx_destruct
@end
