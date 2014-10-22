@interface SUBarButtonItem : UIBarButtonItem
{
	id _accessoryView;
	struct _accessoryViewInsets;
	id _confirmationAppearance;
	id _lastNavigationItem;
	id _preConfirmationTitle;
	id _touchCaptureView;
}

+ setLoading:
+ isShowingConfirmation
+ dealloc
+ createViewForNavigationItem:
+ isLoading
+ setAccessoryView:
+ accessoryView
+ setAccessoryViewInsets:
+ accessoryViewInsets
+ configureFromScriptButton:
+ hideConfirmationWithAppearance:animated:
+ showConfirmationWithTitle:appearance:animated:
+ _touchCaptureAction:
+ _removeTouchCaptureView
+ _setTitle:isConfirmation:appearance:animated:
+ _navigationButton
+ _updateViewForAccessoryChange
+ _addTouchCaptureViewForNavigationButton:
- setLoading:
- isShowingConfirmation
- dealloc
- createViewForNavigationItem:
- isLoading
- setAccessoryView:
- accessoryView
- setAccessoryViewInsets:
- accessoryViewInsets
- configureFromScriptButton:
- hideConfirmationWithAppearance:animated:
- showConfirmationWithTitle:appearance:animated:
- _touchCaptureAction:
- _removeTouchCaptureView
- _setTitle:isConfirmation:appearance:animated:
- _navigationButton
- _updateViewForAccessoryChange
- _addTouchCaptureViewForNavigationButton:
@end
