@interface UITableViewControllerKeyboardSupport : NSObject
{
	id _tableViewController;
	double _adjustmentForKeyboard;
	bit[1] _viewIsDisappearing;
	bit[1] _registeredForNotifications;
}

+ _keyboardWillShow:
+ _keyboardWillHide:
+ setViewIsDisappearing:
+ viewIsDisappearing
+ setRegisteredForNotifications:
+ registeredForNotifications
+ initWithTableViewController:
+ _keyboardDidShow:
+ _keyboardDidHide:
+ _keyboardDidChangeFrame:
+ adjustmentForKeyboard
+ setAdjustmentForKeyboard:
- _keyboardWillShow:
- _keyboardWillHide:
- setViewIsDisappearing:
- viewIsDisappearing
- setRegisteredForNotifications:
- registeredForNotifications
- initWithTableViewController:
- _keyboardDidShow:
- _keyboardDidHide:
- _keyboardDidChangeFrame:
- adjustmentForKeyboard
- setAdjustmentForKeyboard:
@end
