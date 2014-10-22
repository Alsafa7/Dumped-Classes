@interface _UIModalItemAlertContentView : _UIModalItemContentView
{
	id _textFieldBGView;
	BOOL _alertViewIsSetup;
	id _otherTableView;
	id _2ButtonsSeparators;
	id _tableViewTopSeparator;
	id _labelsScrollView;
	BOOL _itemWantsVerticalButtons;
	BOOL _itemNeedsTwoTableViews;
}

+ initWithFrame:
+ dealloc
+ tableView:willDisplayCell:forRowAtIndexPath:
+ tableView:didSelectRowAtIndexPath:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ layout
+ _reloadButtons
+ setEnableFirstOtherButton:
+ _prepareViewIfNeeded
- initWithFrame:
- dealloc
- tableView:willDisplayCell:forRowAtIndexPath:
- tableView:didSelectRowAtIndexPath:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- layout
- _reloadButtons
- setEnableFirstOtherButton:
- _prepareViewIfNeeded
@end
