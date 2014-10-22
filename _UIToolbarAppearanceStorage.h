@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage
{
	id shadowImage;
	id topShadowImage;
	BOOL hidesShadow;
	id _backgroundImage;
	id _miniBackgroundImage;
	id _topBackgroundImage;
	id _miniTopBackgroundImage;
}

+ dealloc
+ backgroundImage
+ miniBackgroundImage
+ hidesShadow
+ setHidesShadow:
+ shadowImage
+ setShadowImage:
+ topShadowImage
+ topBackgroundImage
+ miniTopBackgroundImage
+ setTopShadowImage:
+ setBackgroundImage:
+ setMiniBackgroundImage:
+ setTopBackgroundImage:
+ setMiniTopBackgroundImage:
- dealloc
- backgroundImage
- miniBackgroundImage
- hidesShadow
- setHidesShadow:
- shadowImage
- setShadowImage:
- topShadowImage
- topBackgroundImage
- miniTopBackgroundImage
- setTopShadowImage:
- setBackgroundImage:
- setMiniBackgroundImage:
- setTopBackgroundImage:
- setMiniTopBackgroundImage:
@end
