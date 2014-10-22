@interface UITableViewCellEditControl : UIControl
{
	id _cell;
	id _imageView;
	id _minusView;
	id _shadowView;
	bit[2] _style;
	bit[1] _rotated;
	bit[1] _rotating;
	bit[1] _hiding;
	bit[27] _reserved;
}

+ _currentImage
+ _minusView
+ _updateImageView
+ _toggleRotate
+ dealloc
+ setFrame:
+ layoutSubviews
+ isRotating
+ setHighlighted:
+ _multiselectColorChanged
+ setSelected:
+ _toggleRotateAnimationDidStop:finished:
+ setHiding:
+ isHiding
+ isRotated
+ _shadowImage
+ setRotated:
+ setRotated:animated:
+ initWithTableViewCell:editingStyle:
- _currentImage
- _minusView
- _updateImageView
- _toggleRotate
- dealloc
- setFrame:
- layoutSubviews
- isRotating
- setHighlighted:
- _multiselectColorChanged
- setSelected:
- _toggleRotateAnimationDidStop:finished:
- setHiding:
- isHiding
- isRotated
- _shadowImage
- setRotated:
- setRotated:animated:
- initWithTableViewCell:editingStyle:
@end
