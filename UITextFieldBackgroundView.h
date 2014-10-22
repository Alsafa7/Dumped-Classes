@interface UITextFieldBackgroundView : UIView
{
	BOOL _active;
	BOOL _enabled;
	float _progress;
	id _fillColor;
}

+ dealloc
+ setFrame:
+ setBounds:
+ setProgress:
+ setFillColor:
+ setActive:
+ _updateImages
+ setEnabled:animated:
+ initWithFrame:active:
+ fillColor
- dealloc
- setFrame:
- setBounds:
- setProgress:
- setFillColor:
- setActive:
- _updateImages
- setEnabled:animated:
- initWithFrame:active:
- fillColor
@end
