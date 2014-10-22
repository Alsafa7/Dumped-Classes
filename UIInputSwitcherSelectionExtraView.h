@interface UIInputSwitcherSelectionExtraView : UIView
{
	double m_pointerOffset;
	int _roundedCorners;
	id _menu;
	struct _keyRect;
}

+ initWithFrame:
+ drawRect:
+ setFrame:
+ menu
+ setMenu:
+ keyRect
+ pointerOffset
+ setPointerOffset:
+ setKeyRect:
+ roundedCorners
+ setRoundedCorners:
- initWithFrame:
- drawRect:
- setFrame:
- menu
- setMenu:
- keyRect
- pointerOffset
- setPointerOffset:
- setKeyRect:
- roundedCorners
- setRoundedCorners:
@end
