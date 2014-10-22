@interface UIKBSplitImageView : UIView
{
	id _fullView;
	id _splitLeft;
	id _splitRight;
}

+ initWithFrame:
+ dealloc
+ setAlpha:
+ _shouldInheritScreenScaleAsContentScaleFactor
+ setImage:splitLeft:splitRight:keyplane:
+ insertSubviewAtBottom:
+ setImage:cachedWidth:keyplane:
- initWithFrame:
- dealloc
- setAlpha:
- _shouldInheritScreenScaleAsContentScaleFactor
- setImage:splitLeft:splitRight:keyplane:
- insertSubviewAtBottom:
- setImage:cachedWidth:keyplane:
@end
