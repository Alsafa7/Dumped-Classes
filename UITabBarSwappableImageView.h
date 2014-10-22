@interface UITabBarSwappableImageView : UIImageView
{
	id _value;
	id _alternate;
	double _scale;
	BOOL _showAlternate;
	BOOL _flipped;
	int _currentAnimation;
	id _tabBar;
	int _buttonTag;
}

+ dealloc
+ setImage:
+ animationDidStop:finished:
+ showAlternateImage:
+ setCurrentImage
+ initWithImage:alternateImage:
+ animateImage:withTabBar:withTag:
+ setAlternateImage:
- dealloc
- setImage:
- animationDidStop:finished:
- showAlternateImage:
- setCurrentImage
- initWithImage:alternateImage:
- animateImage:withTabBar:withTag:
- setAlternateImage:
@end
