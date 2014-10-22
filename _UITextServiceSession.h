@interface _UITextServiceSession : NSObject
{
	long long _type;
	id _modalViewController;
	id _popoverController;
	BOOL _isTextEffectsWindow;
	BOOL _dismissed;
	id _dismissedHandler;
}

+ init
+ initWithType:
+ sessionDidDismiss
+ dealloc
+ dismissTextServiceAnimated:
+ setDismissedHandler:
+ popoverControllerDidDismissPopover:
+ _endSession
+ isDisplaying
+ dismissedHandler
- init
- initWithType:
- sessionDidDismiss
- dealloc
- dismissTextServiceAnimated:
- setDismissedHandler:
- popoverControllerDidDismissPopover:
- _endSession
- isDisplaying
- dismissedHandler
@end
