@interface MPConcreteMediaPlaylist : MPMediaPlaylist
{
	id _accessQueue;
	id _properties;
	id _itemsQuery;
	pointer _clusterPlaylist;
}

+ removeAllItems
+ itemsQuery
+ representativeItem
+ mediaLibrary
+ setValue:forProperty:withCompletionBlock:
+ valuesForProperties:
+ initWithProperties:itemsQuery:
+ populateWithSeedItem:queue:completionBlock:
+ _updateLibraryForPlaylistEdit:
+ addItem:completionBlock:
+ addItems:completionBlock:
+ removeItems:atFilteredIndexes:completionBlock:
+ moveItemFromIndex:toIndex:completionBlock:
+ populateWithSeedItem:completionBlock:
+ beginGeneratingGeniusClusterItemsWithSeedItems:error:
+ geniusClusterItemsWithCount:error:
+ endGeneratingGeniusClusterItems
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ count
+ isEqual:
+ hash
+ copyWithZone:
+ items
+ mediaTypes
+ valueForProperty:
+ setValue:forProperty:
+ existsInLibrary
+ .cxx_destruct
- removeAllItems
- itemsQuery
- representativeItem
- mediaLibrary
- setValue:forProperty:withCompletionBlock:
- valuesForProperties:
- initWithProperties:itemsQuery:
- populateWithSeedItem:queue:completionBlock:
- _updateLibraryForPlaylistEdit:
- addItem:completionBlock:
- addItems:completionBlock:
- removeItems:atFilteredIndexes:completionBlock:
- moveItemFromIndex:toIndex:completionBlock:
- populateWithSeedItem:completionBlock:
- beginGeneratingGeniusClusterItemsWithSeedItems:error:
- geniusClusterItemsWithCount:error:
- endGeneratingGeniusClusterItems
- dealloc
- initWithCoder:
- encodeWithCoder:
- count
- isEqual:
- hash
- copyWithZone:
- items
- mediaTypes
- valueForProperty:
- setValue:forProperty:
- existsInLibrary
- .cxx_destruct
@end
