@interface SBCCButtonLayoutView : SBControlCenterSectionView
{
	id _buttons;
	double _interButtonPadding;
	struct _contentEdgeInsets;
}

+ removeButton:
+ interButtonPadding
+ setInterButtonPadding:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ setContentEdgeInsets:
+ contentEdgeInsets
+ buttons
+ addButton:
- removeButton:
- interButtonPadding
- setInterButtonPadding:
- initWithFrame:
- dealloc
- layoutSubviews
- setContentEdgeInsets:
- contentEdgeInsets
- buttons
- addButton:
@end
