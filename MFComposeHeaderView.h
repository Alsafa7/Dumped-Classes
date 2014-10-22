@interface MFComposeHeaderView : UIView
{
	id _label;
	id _navTitle;
	id _labelView;
	id _delegate;
	id _separator;
	id _labelAlignToTopConstraint;
	BOOL _drawsLetterpress;
}

+ _automationID
+ labelTopPadding
+ handleTouchesEnded
+ setNavTitle:
+ setLabelHighlighted:
+ maxLabelX
+ addCenteredLayoutConstraintForView:
+ refreshPreferredContentSize
+ initWithFrame:
+ dealloc
+ setDelegate:
+ setFrame:
+ layoutSubviews
+ touchesEnded:withEvent:
+ _canBecomeFirstResponder
+ updateConstraints
+ setLabel:
+ setDrawsLetterpress:
+ drawsLetterpress
+ navTitle
+ labelColor
- _automationID
- labelTopPadding
- handleTouchesEnded
- setNavTitle:
- setLabelHighlighted:
- maxLabelX
- addCenteredLayoutConstraintForView:
- refreshPreferredContentSize
- initWithFrame:
- dealloc
- setDelegate:
- setFrame:
- layoutSubviews
- touchesEnded:withEvent:
- _canBecomeFirstResponder
- updateConstraints
- setLabel:
- setDrawsLetterpress:
- drawsLetterpress
- navTitle
- labelColor
@end
