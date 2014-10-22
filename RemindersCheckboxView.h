@interface RemindersCheckboxView : UIView
{
	id _button;
	BOOL _checked;
	BOOL _overdue;
	BOOL _enabled;
	BOOL _useDarkBGAppearance;
	id _delegate;
	id _buttonColor;
}

+ setUseDarkBGAppearance:
+ setOverdue:
+ buttonPressed
+ buttonDown
+ _updateImage
+ useDarkBGAppearance
+ flatCompletedImage
+ flatUncompletedImageForColor:
+ isOverdue
+ initWithFrame:
+ setDelegate:
+ setChecked:
+ delegate
+ isEnabled
+ setEnabled:
+ isChecked
+ buttonColor
+ setButtonColor:
+ .cxx_destruct
- setUseDarkBGAppearance:
- setOverdue:
- buttonPressed
- buttonDown
- _updateImage
- useDarkBGAppearance
- flatCompletedImage
- flatUncompletedImageForColor:
- isOverdue
- initWithFrame:
- setDelegate:
- setChecked:
- delegate
- isEnabled
- setEnabled:
- isChecked
- buttonColor
- setButtonColor:
- .cxx_destruct
@end
