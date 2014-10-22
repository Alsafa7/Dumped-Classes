@interface UIClientRotationContext : NSObject
{
	id _headerView;
	id _footerView;
	id _contentView;
	id _snapshotTargetView;
	id _rotatingSnapshotView;
	id _footerStartSnapshotView;
	id _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _snapshotTargetWasHidden;
	BOOL _orderKeyboardInAfterRotating;
	BOOL _skipFooterRotation;
	BOOL _skipHeaderRotation;
	long long _fromOrientation;
	long long _toOrientation;
	double _duration;
	id _headerSnapshotViewStart;
	id _footerSnapshotViewStart;
	id _contentSnapshotViewStart;
	double _contentTopAdjustmentStart;
	id _rotatingClient;
	struct _rotationSettings;
	double contentBottomInset;
	id _window;
	BOOL _skipClientRotationCallbacks;
	id _backdropViews;
}

+ dealloc
+ duration
+ _positionHeaderView:andFooterView:outsideContentViewForInterfaceOrientation:
+ _slideHeaderView:andFooterView:offScreen:forInterfaceOrientation:
+ initWithClient:toOrientation:duration:andWindow:
+ contentView
+ rotatingClient
+ setSkipClientRotationCallbacks:
+ slideHeaderViewAndFooterViewOffScreen:forInterfaceOrientation:
+ setupRotationOrderingKeyboardInAfterRotation:
+ disableBackdropViewUpdates:
+ rotateSnapshots
+ toOrientation
+ finishFirstHalfRotation
+ fromOrientation
+ skipClientRotationCallbacks
+ finishFullRotateUsingOnePartAnimation:
+ _isHeaderTranslucent
+ _isFooterTranslucent
+ _slideFooterWithStartSnapshot:endSnapshot:duration:
- dealloc
- duration
- _positionHeaderView:andFooterView:outsideContentViewForInterfaceOrientation:
- _slideHeaderView:andFooterView:offScreen:forInterfaceOrientation:
- initWithClient:toOrientation:duration:andWindow:
- contentView
- rotatingClient
- setSkipClientRotationCallbacks:
- slideHeaderViewAndFooterViewOffScreen:forInterfaceOrientation:
- setupRotationOrderingKeyboardInAfterRotation:
- disableBackdropViewUpdates:
- rotateSnapshots
- toOrientation
- finishFirstHalfRotation
- fromOrientation
- skipClientRotationCallbacks
- finishFullRotateUsingOnePartAnimation:
- _isHeaderTranslucent
- _isFooterTranslucent
- _slideFooterWithStartSnapshot:endSnapshot:duration:
@end
