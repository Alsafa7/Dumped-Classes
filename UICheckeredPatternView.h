@interface UICheckeredPatternView : UIView
{
	id m_patternColor;
	id m_checkerColor;
	double m_scale;
}

+ initWithFrame:
+ dealloc
+ didMoveToWindow
+ _canDrawContent
+ updatePatternColor
+ checkerColor
+ setCheckerColor:
- initWithFrame:
- dealloc
- didMoveToWindow
- _canDrawContent
- updatePatternColor
- checkerColor
- setCheckerColor:
@end
