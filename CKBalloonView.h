@interface CKBalloonView : CKBalloonImageView
{
	id _control;
	char _orientation;
	BOOL _hasTail;
	BOOL _filled;
	BOOL _showingMenu;
	BOOL _canUseOpaqueMask;
	BOOL _hasOverlay;
	BOOL _wantsSkinnyMask;
	id _delegate;
	id _doubleTapGestureRecognizer;
	id _longPressGestureRecognizer;
	id _displayUpdater;
	id _overlay;
	struct _textAlignmentInsets;
}

+ configureForMessagePart:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ layoutSubviews
+ description
+ sizeThatFits:
+ delegate
+ canPerformAction:withSender:
+ orientation
+ resignFirstResponder
+ methodSignatureForSelector:
+ becomeFirstResponder
+ canBecomeFirstResponder
+ prepareForReuse
+ forwardInvocation:
+ setOrientation:
+ overlay
+ setOverlay:
+ delegateActionForAction:
+ prepareForDisplay
+ setDisplayUpdater:
+ setHasTail:
+ tap:forEvent:
+ doubleTap:forEvent:
+ longPress:forEvent:
+ touchDown:forEvent:
+ touchCancelForControl:
+ setFilled:
+ setNeedsPrepareForDisplay
+ sizeThatFits:textAlignmentInsets:
+ setTextAlignmentInsets:
+ displayUpdater
+ hasTail
+ wantsSkinnyMask
+ overlayColor
+ setCanUseOpaqueMask:
+ setHasOverlay:
+ setHasOverlay:autoDismiss:
+ _dismissOverlay
+ prepareForDisplayIfNeeded
+ isShowingMenu
+ showMenu
+ doDoubleTapOrLongPress
+ willShowMenu:
+ willHideMenu:
+ setShowingMenu:
+ setWantsSkinnyMask:
+ textAlignmentInsets
+ doubleTapGestureRecognizer
+ canUseOpaqueMask
+ hasOverlay
+ isFilled
+ longPressGestureRecognizer
- configureForMessagePart:
- initWithFrame:
- dealloc
- setDelegate:
- layoutSubviews
- description
- sizeThatFits:
- delegate
- canPerformAction:withSender:
- orientation
- resignFirstResponder
- methodSignatureForSelector:
- becomeFirstResponder
- canBecomeFirstResponder
- prepareForReuse
- forwardInvocation:
- setOrientation:
- overlay
- setOverlay:
- delegateActionForAction:
- prepareForDisplay
- setDisplayUpdater:
- setHasTail:
- tap:forEvent:
- doubleTap:forEvent:
- longPress:forEvent:
- touchDown:forEvent:
- touchCancelForControl:
- setFilled:
- setNeedsPrepareForDisplay
- sizeThatFits:textAlignmentInsets:
- setTextAlignmentInsets:
- displayUpdater
- hasTail
- wantsSkinnyMask
- overlayColor
- setCanUseOpaqueMask:
- setHasOverlay:
- setHasOverlay:autoDismiss:
- _dismissOverlay
- prepareForDisplayIfNeeded
- isShowingMenu
- showMenu
- doDoubleTapOrLongPress
- willShowMenu:
- willHideMenu:
- setShowingMenu:
- setWantsSkinnyMask:
- textAlignmentInsets
- doubleTapGestureRecognizer
- canUseOpaqueMask
- hasOverlay
- isFilled
- longPressGestureRecognizer
@end
