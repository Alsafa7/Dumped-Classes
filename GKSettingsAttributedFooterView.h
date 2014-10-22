@interface GKSettingsAttributedFooterView : UIView
{
	id _specifier;
	id _text;
	id _textStyle;
	id _label;
}

+ attributedStringForString:
+ specifier
+ initWithSpecifier:
+ preferredHeightForWidth:
+ dealloc
+ layoutSubviews
+ text
+ setText:
+ label
+ setLabel:
+ textStyle
+ defaultTextStyle
+ setTextStyle:
+ preferredHeightForWidth:inTableView:
- attributedStringForString:
- specifier
- initWithSpecifier:
- preferredHeightForWidth:
- dealloc
- layoutSubviews
- text
- setText:
- label
- setLabel:
- textStyle
- defaultTextStyle
- setTextStyle:
- preferredHeightForWidth:inTableView:
@end
