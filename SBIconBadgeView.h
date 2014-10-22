@interface SBIconBadgeView : UIView
{
	id _text;
	id _incomingTextView;
	BOOL _animating;
	id _queuedAnimation;
	BOOL _displayingAccessory;
	id _backgroundImage;
	id _backgroundView;
	id _textImage;
	id _textView;
}

+ _clearText
+ _configureAnimatedForText:highlighted:withPreparation:animation:completion:
+ _resizeForTextImage:
+ _crossfadeToTextImage:withPreparation:animation:completion:
+ _zoomInWithTextImage:preparation:animation:completion:
+ _zoomOutWithPreparation:animation:completion:
+ darkeningImageView:settableImageForImage:
+ configureAnimatedForIcon:location:highlighted:withPreparation:animation:completion:
+ configureForIcon:location:highlighted:
+ accessoryOriginForIconBounds:
+ displayingAccessory
+ setAccessoryBrightness:
+ dealloc
+ init
+ layoutSubviews
+ prepareForReuse
- _clearText
- _configureAnimatedForText:highlighted:withPreparation:animation:completion:
- _resizeForTextImage:
- _crossfadeToTextImage:withPreparation:animation:completion:
- _zoomInWithTextImage:preparation:animation:completion:
- _zoomOutWithPreparation:animation:completion:
- darkeningImageView:settableImageForImage:
- configureAnimatedForIcon:location:highlighted:withPreparation:animation:completion:
- configureForIcon:location:highlighted:
- accessoryOriginForIconBounds:
- displayingAccessory
- setAccessoryBrightness:
- dealloc
- init
- layoutSubviews
- prepareForReuse
@end
