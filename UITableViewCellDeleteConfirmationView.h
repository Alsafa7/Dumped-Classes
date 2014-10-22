@interface UITableViewCellDeleteConfirmationView : UIView
{
	double _visibleWidth;
	double _cornerRadius;
	int _sectionLocation;
	id _deleteView;
	id _accessoryView;
}

+ dealloc
+ didMoveToWindow
+ cornerRadius
+ setCornerRadius:
+ sectionLocation
+ setSectionLocation:
+ initWithFrame:deleteView:accessoryView:
+ setVisibleWidth:
+ accessoryView
+ updateMaskView:
+ visibleWidth
+ deleteView
- dealloc
- didMoveToWindow
- cornerRadius
- setCornerRadius:
- sectionLocation
- setSectionLocation:
- initWithFrame:deleteView:accessoryView:
- setVisibleWidth:
- accessoryView
- updateMaskView:
- visibleWidth
- deleteView
@end
