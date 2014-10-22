@interface MPMediaItemCollection : MPMediaEntity
{
	usigned long long _containedMediaTypes;
	id _items;
	usigned long long _itemsCount;
	id _itemsQuery;
	id _representativeItem;
}

+ MPSD_hasDownloadingItem
+ MPSD_hasDownloadableItem
+ groupingType
+ SAMPCollectionRepresentation
+ SAMPCollectionRepresentationWithItems
+ SAMPMediaEntityRepresentation
+ itemsQuery
+ representativeItem
+ initWithItemsQuery:
+ initWithCoder:
+ encodeWithCoder:
+ count
+ init
+ _init
+ items
+ initWithItems:
+ mediaTypes
+ .cxx_destruct
- MPSD_hasDownloadingItem
- MPSD_hasDownloadableItem
- groupingType
- SAMPCollectionRepresentation
- SAMPCollectionRepresentationWithItems
- SAMPMediaEntityRepresentation
- itemsQuery
- representativeItem
- initWithItemsQuery:
- initWithCoder:
- encodeWithCoder:
- count
- init
- _init
- items
- initWithItems:
- mediaTypes
- .cxx_destruct
@end
