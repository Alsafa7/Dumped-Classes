@interface SBAlertView : UIView
{
	id _alert;
	bit[1] _shouldAnimateIn;
}

+ layoutForInterfaceOrientation:
+ alertDisplayWillBecomeVisible
+ alertDisplayBecameVisible
+ isReadyToBeRemovedFromView
+ isAnimatingOut
+ shouldAddClippingViewDuringRotation
+ alertWindowViewControllerResizedFromContentFrame:toContentFrame:
+ setAlert:
+ alert
+ initWithFrame:
+ willRotateToInterfaceOrientation:duration:
+ willAnimateRotationToInterfaceOrientation:duration:
+ didRotateFromInterfaceOrientation:
+ dismiss
+ isSupportedInterfaceOrientation:
+ shouldAnimateIn
+ setShouldAnimateIn:
- layoutForInterfaceOrientation:
- alertDisplayWillBecomeVisible
- alertDisplayBecameVisible
- isReadyToBeRemovedFromView
- isAnimatingOut
- shouldAddClippingViewDuringRotation
- alertWindowViewControllerResizedFromContentFrame:toContentFrame:
- setAlert:
- alert
- initWithFrame:
- willRotateToInterfaceOrientation:duration:
- willAnimateRotationToInterfaceOrientation:duration:
- didRotateFromInterfaceOrientation:
- dismiss
- isSupportedInterfaceOrientation:
- shouldAnimateIn
- setShouldAnimateIn:
@end
