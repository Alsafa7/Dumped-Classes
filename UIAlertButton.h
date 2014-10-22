@interface UIAlertButton : UIButton
{
	double _imageOffset;
	BOOL _isNewStyle;
	id _overlayView;
}

+ dealloc
+ layoutSubviews
+ setTitle:
+ image
+ setEnabled:
+ initWithTitle:
+ title
+ setHighlighted:
+ setImage:forState:
+ setIsNewStyle:
+ setImageOffset:
+ setHighlightImage:
+ _transitionBackgroundViewToHighlighted:
+ highlightImage
+ imageOffset
+ isNewStyle
+ overlayView
- dealloc
- layoutSubviews
- setTitle:
- image
- setEnabled:
- initWithTitle:
- title
- setHighlighted:
- setImage:forState:
- setIsNewStyle:
- setImageOffset:
- setHighlightImage:
- _transitionBackgroundViewToHighlighted:
- highlightImage
- imageOffset
- isNewStyle
- overlayView
@end
