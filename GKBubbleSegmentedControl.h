@interface GKBubbleSegmentedControl : UIControl
{
	BOOL _layoutDueToSegmentChange;
	id _bubbleControls;
	double _overlap;
	long long _selectedSegmentIndex;
}

+ didSelectBubble:
+ setBubbleControls:animated:
+ setBubbleControls:
+ bubbleControls
+ layoutDueToSegmentChange
+ setLayoutDueToSegmentChange:
+ dealloc
+ init
+ layoutSubviews
+ setBounds:
+ setSelectedSegmentIndex:
+ selectedSegmentIndex
+ setOverlap:
+ overlap
- didSelectBubble:
- setBubbleControls:animated:
- setBubbleControls:
- bubbleControls
- layoutDueToSegmentChange
- setLayoutDueToSegmentChange:
- dealloc
- init
- layoutSubviews
- setBounds:
- setSelectedSegmentIndex:
- selectedSegmentIndex
- setOverlap:
- overlap
@end
