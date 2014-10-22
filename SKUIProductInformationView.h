@interface SKUIProductInformationView : UIView
{
	id _colorScheme;
	struct _contentInset;
	id _informationLines;
	id _keyLabels;
	id _separatorView;
	id _titleLabel;
	id _valueLabels;
}

+ initWithFrame:
+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ sizeThatFits:
+ contentInset
+ setContentInset:
+ title
+ colorScheme
+ setColorScheme:
+ setHidesSeparatorView:
+ setInformationLines:
+ _keyWidth
+ hidesSeparatorView
+ informationLines
+ .cxx_destruct
- initWithFrame:
- setBackgroundColor:
- layoutSubviews
- setTitle:
- sizeThatFits:
- contentInset
- setContentInset:
- title
- colorScheme
- setColorScheme:
- setHidesSeparatorView:
- setInformationLines:
- _keyWidth
- hidesSeparatorView
- informationLines
- .cxx_destruct
@end
