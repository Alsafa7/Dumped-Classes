@interface UITableViewCellEditingData : NSObject
{
	id _cell;
	long long _editingStyle;
	id _editControl;
	id _reorderControl;
	id _deleteConfirmationControl;
	id _reorderSeparatorView;
}

+ dealloc
+ editControl:
+ deleteConfirmationControl:
+ initWithTableViewCell:editingStyle:
+ reorderControl:
+ reorderSeparatorView:
+ isDataRequired
- dealloc
- editControl:
- deleteConfirmationControl:
- initWithTableViewCell:editingStyle:
- reorderControl:
- reorderSeparatorView:
- isDataRequired
@end
