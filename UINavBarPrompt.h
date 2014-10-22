@interface UINavBarPrompt : UIView
{
	id _label;
	id _navBar;
}

+ dealloc
+ layoutSubviews
+ prompt
+ setPrompt:
+ clearWeakReference:
+ initWithPrompt:navBar:
+ promptBounds
+ _labelFrame
+ _updateLabelTextColorAndFontReturningShadowOffset
+ _updateLabelTextColorAndFontReturningShadowOffset_legacy
- dealloc
- layoutSubviews
- prompt
- setPrompt:
- clearWeakReference:
- initWithPrompt:navBar:
- promptBounds
- _labelFrame
- _updateLabelTextColorAndFontReturningShadowOffset
- _updateLabelTextColorAndFontReturningShadowOffset_legacy
@end
