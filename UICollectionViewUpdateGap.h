@interface UICollectionViewUpdateGap : NSObject
{
	id _firstUpdateItem;
	id _lastUpdateItem;
	id _deleteItems;
	id _insertItems;
	struct _beginningRect;
	struct _endingRect;
}

+ dealloc
+ init
+ description
+ setFirstUpdateItem:
+ setLastUpdateItem:
+ addUpdateItem:
+ isDeleteBasedGap
+ hasInserts
+ updateItems
+ isSectionBasedGap
+ firstUpdateItem
+ lastUpdateItem
+ deleteItems
+ insertItems
+ beginningRect
+ setBeginningRect:
+ endingRect
+ setEndingRect:
- dealloc
- init
- description
- setFirstUpdateItem:
- setLastUpdateItem:
- addUpdateItem:
- isDeleteBasedGap
- hasInserts
- updateItems
- isSectionBasedGap
- firstUpdateItem
- lastUpdateItem
- deleteItems
- insertItems
- beginningRect
- setBeginningRect:
- endingRect
- setEndingRect:
@end
