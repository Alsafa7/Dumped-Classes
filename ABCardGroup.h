@interface ABCardGroup : NSObject
{
	id _items;
	id _actions;
	id _actionItems;
	BOOL _useSplitActions;
	BOOL _addSpacerFromPreviousGroup;
	id _contact;
	id _title;
}

+ displayItems
+ initWithContact:
+ _loadActionItems
+ removeActionWithTitle:
+ addAction:withTitle:
+ addActionWithTitle:target:selector:destructive:
+ addSpacerFromPreviousGroup
+ useSplitActions
+ editingItems
+ actionItems
+ addActionWithTitle:target:selector:
+ removeActionWithTarget:selector:
+ contact
+ setContact:
+ setUseSplitActions:
+ setAddSpacerFromPreviousGroup:
+ dealloc
+ description
+ copyWithZone:
+ title
+ actions
- displayItems
- initWithContact:
- _loadActionItems
- removeActionWithTitle:
- addAction:withTitle:
- addActionWithTitle:target:selector:destructive:
- addSpacerFromPreviousGroup
- useSplitActions
- editingItems
- actionItems
- addActionWithTitle:target:selector:
- removeActionWithTarget:selector:
- contact
- setContact:
- setUseSplitActions:
- setAddSpacerFromPreviousGroup:
- dealloc
- description
- copyWithZone:
- title
- actions
@end
