@interface DateRangePane : PSEditingPane
{
	id _table;
	id _datePicker;
	id _fromCell;
	id _toCell;
	pointer _timeFormatter;
	int _selectedIndex;
}

+ datePicker
+ setDatePicker:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ layoutSubviews
+ tableView:didSelectRowAtIndexPath:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ selectedIndex
+ setSelectedIndex:
+ update
- datePicker
- setDatePicker:
- initWithFrame:
- dealloc
- setDelegate:
- layoutSubviews
- tableView:didSelectRowAtIndexPath:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- selectedIndex
- setSelectedIndex:
- update
@end
