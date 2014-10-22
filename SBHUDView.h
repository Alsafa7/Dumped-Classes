@interface SBHUDView : UIView
{
	int _level;
	id _title;
	id _subtitle;
	id _image;
	BOOL _showsProgress;
	float _progress;
	id _blockView;
	id _backdropView;
	id _backdropMaskImageView;
}

+ showsProgress
+ setShowsProgress:
+ initWithHUDViewLevel:
+ _blockColorForValue:
+ _updateBlockView:value:blockSize:point:
+ displaysLabel
+ _updateBackdropMask
+ _updateBlockView
+ cancelDismissal
+ dismissWithCompletion:
+ dealloc
+ setImage:
+ layoutSubviews
+ setTitle:
+ image
+ setLevel:
+ level
+ setProgress:
+ title
+ setSubtitle:
+ subtitle
+ progress
- showsProgress
- setShowsProgress:
- initWithHUDViewLevel:
- _blockColorForValue:
- _updateBlockView:value:blockSize:point:
- displaysLabel
- _updateBackdropMask
- _updateBlockView
- cancelDismissal
- dismissWithCompletion:
- dealloc
- setImage:
- layoutSubviews
- setTitle:
- image
- setLevel:
- level
- setProgress:
- title
- setSubtitle:
- subtitle
- progress
@end
