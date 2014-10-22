@interface SUScriptButtonNativeObject : SUScriptNativeObject
{
	BOOL _loading;
	id _subtitle;
	id _styleString;
	id _systemItemString;
}

+ setLoading:
+ isShowingConfirmation
+ dealloc
+ isEnabled
+ setEnabled:
+ styleString
+ setSubtitle:
+ subtitle
+ isLoading
+ buttonType
+ setImageInsets:
+ imageInsets
+ buttonAction:
+ initWithSystemItemString:
+ configureFromScriptButtonNativeObject:
+ isBackButton
+ hideConfirmationAnimated:
+ disconnectButtonAction
+ connectButtonAction
+ setStyleFromString:
+ showConfirmationWithTitle:animated:
+ systemItemString
- setLoading:
- isShowingConfirmation
- dealloc
- isEnabled
- setEnabled:
- styleString
- setSubtitle:
- subtitle
- isLoading
- buttonType
- setImageInsets:
- imageInsets
- buttonAction:
- initWithSystemItemString:
- configureFromScriptButtonNativeObject:
- isBackButton
- hideConfirmationAnimated:
- disconnectButtonAction
- connectButtonAction
- setStyleFromString:
- showConfirmationWithTitle:animated:
- systemItemString
@end
