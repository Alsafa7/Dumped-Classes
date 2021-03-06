@interface _UILegibilityView : UIView
{
	BOOL _hidesImage;
	id _settings;
	id _image;
	id _shadowImage;
	double _strength;
	id _imageView;
	id _shadowImageView;
	id _imageColorFilter;
	id _shadowImageColorFilter;
	long long _options;
}

+ dealloc
+ setImage:
+ layoutSubviews
+ image
+ style
+ shadowImage
+ setShadowImage:
+ imageView
+ initWithSettings:strength:image:shadowImage:
+ setImage:shadowImage:
+ setImageView:
+ setSettings:
+ settings
+ setOptions:
+ options
+ initWithSettings:strength:image:
+ initWithStyle:image:
+ strength
+ setStrength:
+ initWithStyle:image:shadowImage:
+ initWithSettings:strength:image:shadowImage:options:
+ setSettings:image:shadowImage:
+ shadowImageView
+ setShadowImageView:
+ usesColorFilters
+ imageColorFilter
+ setImageColorFilter:
+ drawingColor
+ shadowImageColorFilter
+ setShadowImageColorFilter:
+ updateImage
+ usesSecondaryColor
+ sizeThatFits
+ setHidesImage:
+ setStyle:image:shadowImage:
+ updateForChangedSettings:
+ hidesImage
- dealloc
- setImage:
- layoutSubviews
- image
- style
- shadowImage
- setShadowImage:
- imageView
- initWithSettings:strength:image:shadowImage:
- setImage:shadowImage:
- setImageView:
- setSettings:
- settings
- setOptions:
- options
- initWithSettings:strength:image:
- initWithStyle:image:
- strength
- setStrength:
- initWithStyle:image:shadowImage:
- initWithSettings:strength:image:shadowImage:options:
- setSettings:image:shadowImage:
- shadowImageView
- setShadowImageView:
- usesColorFilters
- imageColorFilter
- setImageColorFilter:
- drawingColor
- shadowImageColorFilter
- setShadowImageColorFilter:
- updateImage
- usesSecondaryColor
- sizeThatFits
- setHidesImage:
- setStyle:image:shadowImage:
- updateForChangedSettings:
- hidesImage
@end
