@interface SUSectionButton : NSObject
{
	id _accessibilityTitle;
	id _displayTitle;
	id _image;
	struct _imageInsets;
	id _imageURL;
	float _imageURLScale;
	long long _tag;
}

+ displayTitle
+ dealloc
+ setImage:
+ copyWithZone:
+ image
+ setTag:
+ tag
+ setImageInsets:
+ imageInsets
+ setImageURL:
+ imageURL
+ accessibilityTitle
+ initWithSectionButtonDictionary:
+ applyToBarButtonItem:
+ imageURLScale
+ setAccessibilityTitle:
+ setDisplayTitle:
+ setImageURLScale:
- displayTitle
- dealloc
- setImage:
- copyWithZone:
- image
- setTag:
- tag
- setImageInsets:
- imageInsets
- setImageURL:
- imageURL
- accessibilityTitle
- initWithSectionButtonDictionary:
- applyToBarButtonItem:
- imageURLScale
- setAccessibilityTitle:
- setDisplayTitle:
- setImageURLScale:
@end
