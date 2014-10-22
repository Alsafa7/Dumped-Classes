@interface _UITabBarAppearanceStorage : NSObject
{
	id _dividerImages;
	id backgroundImage;
	id shadowImage;
	id selectionIndicatorImage;
	id barTintColor;
	id selectedImageTintColor;
	id tabItemAppearanceStorage;
}

+ dealloc
+ backgroundImage
+ shadowImage
+ setShadowImage:
+ setBarTintColor:
+ barTintColor
+ setBackgroundImage:
+ setTabItemAppearanceStorage:
+ tabItemAppearanceStorage
+ _tabItemAppearanceStorage
+ _setDividerImage:forLeftButtonState:rightButtonState:
+ _dividerImageForLeftButtonState:rightButtonState:
+ dividerImagesForCoding
+ selectionIndicatorImage
+ setSelectionIndicatorImage:
+ selectedImageTintColor
+ setSelectedImageTintColor:
- dealloc
- backgroundImage
- shadowImage
- setShadowImage:
- setBarTintColor:
- barTintColor
- setBackgroundImage:
- setTabItemAppearanceStorage:
- tabItemAppearanceStorage
- _tabItemAppearanceStorage
- _setDividerImage:forLeftButtonState:rightButtonState:
- _dividerImageForLeftButtonState:rightButtonState:
- dividerImagesForCoding
- selectionIndicatorImage
- setSelectionIndicatorImage:
- selectedImageTintColor
- setSelectedImageTintColor:
@end
