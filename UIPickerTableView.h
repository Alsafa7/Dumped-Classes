@interface UIPickerTableView : UITableView
{
	struct _selectionBarRect;
	long long _selectionBarRow;
	id _checkedRows;
	double _lastClickedOffset;
	long long _lastSelectedRow;
	BOOL _usesModernStyle;
	id _textColor;
	struct _visibleRect;
	struct _pickerTableFlags;
}

@end
