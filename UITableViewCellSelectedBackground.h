@interface UITableViewCellSelectedBackground : UIView
{
	long long _selectionStyle;
	id _multiselectBackgroundColor;
	id _selectionTintColor;
	BOOL _multiselect;
}

+ dealloc
+ drawRect:
+ setSelectionTintColor:
+ setMultiselect:
+ isMultiselect
+ setSelectionStyle:
+ selectionStyle
+ multiselectBackgroundColor
+ setMultiselectBackgroundColor:
+ selectionTintColor
- dealloc
- drawRect:
- setSelectionTintColor:
- setMultiselect:
- isMultiselect
- setSelectionStyle:
- selectionStyle
- multiselectBackgroundColor
- setMultiselectBackgroundColor:
- selectionTintColor
@end
