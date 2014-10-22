@interface TPNumberPad : UIControl
{
	id _buttons;
	BOOL _numberButtonsEnabled;
}

+ buttonDown:
+ buttonUp:
+ dealloc
+ buttonTapped:
+ intrinsicContentSize
+ buttons
+ buttonLongPressed:
+ setNumberButtonsEnabled:
+ initWithButtons:
+ numberButtonsEnabled
+ _addButton:
+ _layoutGrid
+ _backgroundAlphaOfButton:
+ _setBackgroundAlphaOnButton:alpha:
+ buttonCancelled:
+ buttonLongPressedViaGesture:
+ replaceButton:atIndex:
+ buttonBackgroundAlpha
+ setButtonBackgroundAlpha:
+ setButtons:
- buttonDown:
- buttonUp:
- dealloc
- buttonTapped:
- intrinsicContentSize
- buttons
- buttonLongPressed:
- setNumberButtonsEnabled:
- initWithButtons:
- numberButtonsEnabled
- _addButton:
- _layoutGrid
- _backgroundAlphaOfButton:
- _setBackgroundAlphaOnButton:alpha:
- buttonCancelled:
- buttonLongPressedViaGesture:
- replaceButton:atIndex:
- buttonBackgroundAlpha
- setButtonBackgroundAlpha:
- setButtons:
@end
