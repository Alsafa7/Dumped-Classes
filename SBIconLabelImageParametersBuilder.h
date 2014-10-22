@interface SBIconLabelImageParametersBuilder : NSObject
{
	int _iconLocation;
	id _icon;
	id _iconView;
	id _iconViewDelegate;
	Class _iconViewClass;
	long long _style;
}

+ buildParameters
+ setIconViewClass:
+ setIconViewDelegate:
+ _hasValidInputs
+ iconViewDelegate
+ iconViewClass
+ iconView
+ setIconView:
+ icon
+ dealloc
+ setStyle:
+ style
+ _font
+ _maxSize
+ setIcon:
+ setIconLocation:
+ iconLocation
- buildParameters
- setIconViewClass:
- setIconViewDelegate:
- _hasValidInputs
- iconViewDelegate
- iconViewClass
- iconView
- setIconView:
- icon
- dealloc
- setStyle:
- style
- _font
- _maxSize
- setIcon:
- setIconLocation:
- iconLocation
@end
