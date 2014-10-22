@interface UITableViewUpdateGap : NSObject
{
	id _firstUpdateItem;
	id _lastUpdateItem;
	id _deleteItems;
	id _insertItems;
	struct _gapFlags;
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
+ hasAutomaticAnimationItems
+ firstUpdateItem
+ lastUpdateItem
+ deleteItems
+ insertItems
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
- hasAutomaticAnimationItems
- firstUpdateItem
- lastUpdateItem
- deleteItems
- insertItems
@end
