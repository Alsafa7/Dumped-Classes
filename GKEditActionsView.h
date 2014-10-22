@interface GKEditActionsView : UIView
{
	double _visibleWidth;
	id _maskLayer;
	id _cell;
	id _editActionConstraints;
	id _actionButtons;
}

+ didTouchEditAction:
+ didTouchMoreEditAction:
+ setActionButtons:
+ setEditActionConstraints:
+ initWithFrame:cell:
+ prepareActionButtons
+ maskLayer
+ setMaskLayer:
+ editActionConstraints
+ actionButtons
+ dealloc
+ actionSheet:clickedButtonAtIndex:
+ actionSheet:willDismissWithButtonIndex:
+ setVisibleWidth:
+ cell
+ setCell:
+ visibleWidth
- didTouchEditAction:
- didTouchMoreEditAction:
- setActionButtons:
- setEditActionConstraints:
- initWithFrame:cell:
- prepareActionButtons
- maskLayer
- setMaskLayer:
- editActionConstraints
- actionButtons
- dealloc
- actionSheet:clickedButtonAtIndex:
- actionSheet:willDismissWithButtonIndex:
- setVisibleWidth:
- cell
- setCell:
- visibleWidth
@end
