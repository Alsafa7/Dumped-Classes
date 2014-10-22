@interface CKPopoverManager : NSObject
{
	id _popoverController;
	id _presenter;
	id _handler;
}

+ dealloc
+ setPopoverController:
+ popoverController
+ popoverControllerDidDismissPopover:
+ setHandler:
+ handler
+ dismissCurrentPopoverAnimated:
+ showPopoverWithContentViewController:withPresenter:withHandler:
+ currentContentController
+ didFinishRotating
+ isShowingPopover
+ setPresenter:
+ presenter
+ representCurrentPopover
+ replaceCurrentControllerWithController:
- dealloc
- setPopoverController:
- popoverController
- popoverControllerDidDismissPopover:
- setHandler:
- handler
- dismissCurrentPopoverAnimated:
- showPopoverWithContentViewController:withPresenter:withHandler:
- currentContentController
- didFinishRotating
- isShowingPopover
- setPresenter:
- presenter
- representCurrentPopover
- replaceCurrentControllerWithController:
@end
