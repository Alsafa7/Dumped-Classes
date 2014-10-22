@interface RemindersListColorPickerView : UIView
{
	id _colorControls;
	id _target;
	SEL _selector;
}

+ initWithFrame:customColor:
+ selectColor:
+ configureButton:
+ setAlpha:
+ layoutSubviews
+ buttonTapped:
+ setTarget:action:
+ .cxx_destruct
- initWithFrame:customColor:
- selectColor:
- configureButton:
- setAlpha:
- layoutSubviews
- buttonTapped:
- setTarget:action:
- .cxx_destruct
@end
