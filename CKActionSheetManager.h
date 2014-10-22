@interface CKActionSheetManager : NSObject
{
	id _actionSheet;
	id _handler;
	id _presenter;
	BOOL _performBeforeAnimation;
	BOOL _dismissingActionSheetForRotation;
}

+ dealloc
+ init
+ actionSheet:clickedButtonAtIndex:
+ actionSheet:willDismissWithButtonIndex:
+ actionSheet:didDismissWithButtonIndex:
+ setHandler:
+ handler
+ dismissCurrentActionSheet
+ willStartRotating
+ didFinishRotating
+ showActionSheet:withPresenter:withHandler:
+ showActionSheet:withPresenter:performBeforeAnimation:withHandler:
+ actionSheet
+ setActionSheet:
+ setPresenter:
+ setPerformBeforeAnimation:
+ presenter
+ performBeforeAnimation
+ dismissActionSheet:withButtonIndex:
- dealloc
- init
- actionSheet:clickedButtonAtIndex:
- actionSheet:willDismissWithButtonIndex:
- actionSheet:didDismissWithButtonIndex:
- setHandler:
- handler
- dismissCurrentActionSheet
- willStartRotating
- didFinishRotating
- showActionSheet:withPresenter:withHandler:
- showActionSheet:withPresenter:performBeforeAnimation:withHandler:
- actionSheet
- setActionSheet:
- setPresenter:
- setPerformBeforeAnimation:
- presenter
- performBeforeAnimation
- dismissActionSheet:withButtonIndex:
@end
