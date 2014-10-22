@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer
{
	id _currentEditingCell;
}

+ currentEditingCell
+ setCurrentEditingCell:
+ dealloc
+ touchesEnded:withEvent:
- currentEditingCell
- setCurrentEditingCell:
- dealloc
- touchesEnded:withEvent:
@end
