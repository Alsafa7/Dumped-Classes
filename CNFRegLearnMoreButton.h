@interface CNFRegLearnMoreButton : UIButton
{
	long long _style;
	id _buttonText;
	BOOL _alwaysUnderline;
	BOOL _usesImage;
}

+ initWithFrame:
+ dealloc
+ drawRect:
+ sizeThatFits:
+ setStyle:
+ style
+ setHighlighted:
+ initWithFrame:style:
+ setSelected:
+ titleRectForContentRect:
+ imageRectForContentRect:
+ setButtonText:
+ setUsesImage:
+ setAlwaysUnderline:
+ _setupLearnMoreTextForCurrentStyle
+ _setupArrowImageForCurrentStyle
+ initWithFrame:style:text:
+ usesImage
+ alwaysUnderline
+ buttonText
- initWithFrame:
- dealloc
- drawRect:
- sizeThatFits:
- setStyle:
- style
- setHighlighted:
- initWithFrame:style:
- setSelected:
- titleRectForContentRect:
- imageRectForContentRect:
- setButtonText:
- setUsesImage:
- setAlwaysUnderline:
- _setupLearnMoreTextForCurrentStyle
- _setupArrowImageForCurrentStyle
- initWithFrame:style:text:
- usesImage
- alwaysUnderline
- buttonText
@end
