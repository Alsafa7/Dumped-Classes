@interface DDActionController : NSObject
{
	id _presentedViewController;
	id _currentPopoverController;
	id _baseView;
	id _currentBaseViewController;
	id _currentAction;
	id _interactionDelegate;
	id _originalWindow;
}

+ performAction:
+ baseView
+ dealloc
+ init
+ currentAction
+ setInteractionDelegate:
+ interactionDelegate
+ actionDidFinish
+ setPopoverController:
+ _cleanup
+ popoverController
+ popoverControllerDidDismissPopover:
+ setBaseView:
+ actionsForURL:result:enclosingResult:context:
+ actionsForURL:result:context:
+ _presentCurrentViewControllerOurselves
+ _dismissCurrentViewControllerOurselves
+ setCurrentAction:
+ _presentController:
+ dismissCurrentController
+ defaultActionForURL:result:context:
+ action:viewControllerReady:
+ failedToPrepareViewControllerForAction:
- performAction:
- baseView
- dealloc
- init
- currentAction
- setInteractionDelegate:
- interactionDelegate
- actionDidFinish
- setPopoverController:
- _cleanup
- popoverController
- popoverControllerDidDismissPopover:
- setBaseView:
- actionsForURL:result:enclosingResult:context:
- actionsForURL:result:context:
- _presentCurrentViewControllerOurselves
- _dismissCurrentViewControllerOurselves
- setCurrentAction:
- _presentController:
- dismissCurrentController
- defaultActionForURL:result:context:
- action:viewControllerReady:
- failedToPrepareViewControllerForAction:
@end
