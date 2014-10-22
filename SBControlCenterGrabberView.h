@interface SBControlCenterGrabberView : UIView
{
	id _chevronView;
	id _statusLabel;
	id _statusLabel2;
	BOOL _statusBusy;
	id _statusByReason;
	id _statusReasonQueue;
}

+ controlCenterWillPresent
+ controlCenterDidDismiss
+ controlCenterWillBeginTransition
+ controlCenterDidFinishTransition
+ chevronView
+ _hasPendingStatus
+ _popNextStatus
+ _didPresentStatus
+ _animateNextStatus
+ _dequeueStatus
+ _grabberRect
+ updateStatusText:reason:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ controlAppearanceDidChangeForState:
+ controlConfigurationDidChangeForState:
- controlCenterWillPresent
- controlCenterDidDismiss
- controlCenterWillBeginTransition
- controlCenterDidFinishTransition
- chevronView
- _hasPendingStatus
- _popNextStatus
- _didPresentStatus
- _animateNextStatus
- _dequeueStatus
- _grabberRect
- updateStatusText:reason:
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- controlAppearanceDidChangeForState:
- controlConfigurationDidChangeForState:
@end
