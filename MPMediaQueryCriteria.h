@interface MPMediaQueryCriteria : NSObject
{
	id _filterPredicates;
	usigned long long _entityOrder;
	long long _groupingType;
	id _orderingProperties;
	id _itemPropertiesToFetch;
	id _collectionPropertiesToFetch;
	BOOL _useSections;
	BOOL _ignoreSystemFilterPredicates;
}

+ ML3ItemsQueryInLibrary:
+ ML3CollectionsQueryInLibrary:
+ ML3OrderingPropertiesForMPOrderingProperties:
+ ML3ItemsQueryInLibrary:orderingProperties:nameBlankProperty:
+ ML3OrderingPropertiesForGroupingType:
+ filterPredicates
+ groupingType
+ setFilterPredicates:
+ setGroupingType:
+ addFilterPredicate:
+ specifiesPlaylistItems
+ removeFilterPredicate:
+ itemPropertiesToFetch
+ setItemPropertiesToFetch:
+ collectionPropertiesToFetch
+ setCollectionPropertiesToFetch:
+ excludesEntitiesWithBlankNames
+ predicateForProperty:
+ orderingProperties
+ setOrderingProperties:
+ entityOrder
+ removePredicatesForProperty:
+ addFilterPredicates:
+ setEntityOrder:
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ ignoreSystemFilterPredicates
+ setIgnoreSystemFilterPredicates:
+ .cxx_destruct
- ML3ItemsQueryInLibrary:
- ML3CollectionsQueryInLibrary:
- ML3OrderingPropertiesForMPOrderingProperties:
- ML3ItemsQueryInLibrary:orderingProperties:nameBlankProperty:
- ML3OrderingPropertiesForGroupingType:
- filterPredicates
- groupingType
- setFilterPredicates:
- setGroupingType:
- addFilterPredicate:
- specifiesPlaylistItems
- removeFilterPredicate:
- itemPropertiesToFetch
- setItemPropertiesToFetch:
- collectionPropertiesToFetch
- setCollectionPropertiesToFetch:
- excludesEntitiesWithBlankNames
- predicateForProperty:
- orderingProperties
- setOrderingProperties:
- entityOrder
- removePredicatesForProperty:
- addFilterPredicates:
- setEntityOrder:
- init
- isEqual:
- hash
- description
- copyWithZone:
- ignoreSystemFilterPredicates
- setIgnoreSystemFilterPredicates:
- .cxx_destruct
@end
