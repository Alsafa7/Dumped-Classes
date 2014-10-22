@interface SKUIIconDataConsumer : SKUIImageDataConsumer
{
	id _backgroundColor;
	id _colorScheme;
	struct _iconSize;
	id _maskImage;
	id _strokeImage;
	double _cornerRadius;
}

+ setBackgroundColor:
+ backgroundColor
+ copyWithZone:
+ cornerRadius
+ setCornerRadius:
+ colorScheme
+ setColorScheme:
+ imageForImage:
+ imageForColor:
+ _setImagesUsingName:
+ iconSize
+ setIconSize:
+ .cxx_destruct
- setBackgroundColor:
- backgroundColor
- copyWithZone:
- cornerRadius
- setCornerRadius:
- colorScheme
- setColorScheme:
- imageForImage:
- imageForColor:
- _setImagesUsingName:
- iconSize
- setIconSize:
- .cxx_destruct
@end
