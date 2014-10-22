@interface UIToolbarTextButton : UIToolbarButton
{
	id _title;
	id _pressedTitle;
	id _possibleTitles;
}

+ dealloc
+ layoutSubviews
+ alignmentRectInsets
+ _scriptingInfo
+ _UIAppearance_setTitleTextAttributes:forState:
+ _setTitleTextAttributes:forState:
+ _setWantsLetterpressTitle
+ _setPressed:
+ initWithTitle:pressedTitle:withFont:withBarStyle:withStyle:withTitleWidth:possibleTitles:withToolbarTintColor:
- dealloc
- layoutSubviews
- alignmentRectInsets
- _scriptingInfo
- _UIAppearance_setTitleTextAttributes:forState:
- _setTitleTextAttributes:forState:
- _setWantsLetterpressTitle
- _setPressed:
- initWithTitle:pressedTitle:withFont:withBarStyle:withStyle:withTitleWidth:possibleTitles:withToolbarTintColor:
@end
