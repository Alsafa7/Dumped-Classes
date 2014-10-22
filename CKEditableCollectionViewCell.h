@interface CKEditableCollectionViewCell : UICollectionViewCell
{
	BOOL _editing;
	id _contentAlignmentView;
	id _checkmark;
	struct _contentAlignmentInsets;
}

+ initWithFrame:
+ dealloc
+ layoutSubviews
+ description
+ setHighlighted:
+ isEditing
+ setEditing:animated:
+ setSelected:
+ setEditing:
+ contentAlignmentInsets
+ setContentAlignmentInsets:
+ contentAlignmentView
+ setContentAlignmentView:
+ checkmark
+ updateCheckmarkImage
+ setCheckmark:
- initWithFrame:
- dealloc
- layoutSubviews
- description
- setHighlighted:
- isEditing
- setEditing:animated:
- setSelected:
- setEditing:
- contentAlignmentInsets
- setContentAlignmentInsets:
- contentAlignmentView
- setContentAlignmentView:
- checkmark
- updateCheckmarkImage
- setCheckmark:
@end
