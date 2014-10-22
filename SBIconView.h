@interface SBIconView : UIView
{
	id _icon;
	int _iconLocation;
	id _currentImageView;
	id _iconImageView;
	id _crossfadeView;
	id _accessoryView;
	id _closeBox;
	id _closeBoxParallaxSettings;
	struct _wallpaperRelativeCloseBoxCenter;
	id _labelView;
	id _updatedMark;
	id _dropGlow;
	bit[1] _drawsLabel;
	bit[1] _isEditing;
	bit[1] _isPaused;
	bit[1] _isGrabbed;
	bit[1] _isOverlapping;
	bit[1] _refusesRecipientStatus;
	bit[1] _highlighted;
	bit[1] _launchDisabled;
	bit[1] _isJittering;
	bit[1] _allowJitter;
	bit[1] _touchDownInIcon;
	bit[1] _hideLabel;
	unsigned int _hideUpdatedMark;
	struct _unjitterPoint;
	struct _grabPoint;
	id _longPressTimer;
	struct _visibleImageRect;
	id _delegate;
	id _observer;
	id _legibilitySettings;
	double _iconImageAlpha;
	double _iconAccessoryAlpha;
	double _iconLabelAlpha;
	struct _wallpaperRelativeImageCenter;
}

+ setAlpha:
+ activatorFlickDownGestureRecognized:
+ activatorFlickUpGestureRecognized:
+ activatorFlickRightGestureRecognized:
+ activatorFlickLeftGestureRecognized:
+ removeAllIconAnimations
+ isTouchDownInIcon
+ setWallpaperRelativeImageCenter:
+ iconImageCenter
+ canReceiveGrabbedIcon:
+ setIsEditing:animated:
+ setAllowJitter:
+ setIconPosition:
+ setIsGrabbed:
+ setIsOverlapping:
+ prepareDropGlow
+ showDropGlow:
+ removeDropGlow
+ dropGlow
+ isGrabbed
+ iconImageVisibleSize
+ iconAccessoriesDidUpdate:
+ iconLaunchEnabledDidChange:
+ iconImageSnapshot
+ iconImageFrame
+ iconImageAlpha
+ setIconImageAndAccessoryAlpha:
+ setIconLabelAlpha:
+ setRefusesRecipientStatus:
+ isInDock
+ setSuppressesBlurryBackgroundChanges:
+ cancelLongPressTimer
+ _updateJitter
+ _updateIconImageViewAnimated:
+ _updateUpdatedMark
+ _updateProgressAnimated:
+ _updateAccessoryViewWithAnimation:
+ _setIcon:animated:
+ setIconImageAlpha:
+ setIconAccessoryAlpha:
+ _applyIconImageAlpha:
+ _applyIconAccessoryAlpha:
+ _applyIconLabelAlpha:
+ _frameForImageView
+ _frameForLabel
+ _frameForUpdatedMarkWithLabelFrame:
+ _frameForAccessoryView
+ _centerForCloseBox
+ _labelVerticalOffset
+ _centerForCloseBoxRelativeToVisibleImageFrame:
+ _updateAdaptiveColors
+ _labelImageParameters
+ _legibilitySettingsWithParameters:
+ _legibilitySettingsWithPrimaryColor:
+ _createAccessoryViewIfNecessary
+ _updateBrightness
+ prepareToCrossfadeImageWithView:maskCorners:trueCrossfade:anchorPoint:
+ cleanupAfterImageCrossfade
+ setImageCrossfadeFadeFraction:
+ setImageCrossfadeMorphFraction:
+ _delegateTouchEnded:
+ grabDurationForEvent:
+ longPressTimerFired
+ wallpaperRelativeImageCenter
+ _delegateTapAllowed
+ allowsTapWhileEditing
+ _applyEditingStateAnimated:
+ _updateCloseBoxAnimated:
+ _isShowingCloseBox
+ _closeBoxTapped
+ swapInIcon:
+ setLabelHidden:
+ setUpdatedMarkHidden:
+ invalidateLabelLayoutGeometry
+ prepareToCrossfadeImageWithView:maskCorners:trueCrossfade:
+ setTouchDownInIcon:
+ snapshotEdgeInsets
+ prepareForRecycling
+ iconAccessoryAlpha
+ iconLabelAlpha
+ icon
+ dealloc
+ setDelegate:
+ pointInside:withEvent:
+ setFrame:
+ layoutSubviews
+ delegate
+ touchesCancelled:withEvent:
+ _automationID
+ _shouldAnimatePropertyWithKey:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ setHighlighted:
+ isHighlighted
+ _updateLabel
+ isEditing
+ pointMostlyInside:withEvent:
+ setIcon:
+ initWithDefaultSize
+ settings:changedValueForKey:
+ setPaused:
+ location
+ _labelImage
+ setObserver:
+ observer
+ legibilitySettings
+ _iconImageView
+ setLegibilitySettings:
+ setLocation:
+ setIsEditing:
- setAlpha:
- activatorFlickDownGestureRecognized:
- activatorFlickUpGestureRecognized:
- activatorFlickRightGestureRecognized:
- activatorFlickLeftGestureRecognized:
- removeAllIconAnimations
- isTouchDownInIcon
- setWallpaperRelativeImageCenter:
- iconImageCenter
- canReceiveGrabbedIcon:
- setIsEditing:animated:
- setAllowJitter:
- setIconPosition:
- setIsGrabbed:
- setIsOverlapping:
- prepareDropGlow
- showDropGlow:
- removeDropGlow
- dropGlow
- isGrabbed
- iconImageVisibleSize
- iconAccessoriesDidUpdate:
- iconLaunchEnabledDidChange:
- iconImageSnapshot
- iconImageFrame
- iconImageAlpha
- setIconImageAndAccessoryAlpha:
- setIconLabelAlpha:
- setRefusesRecipientStatus:
- isInDock
- setSuppressesBlurryBackgroundChanges:
- cancelLongPressTimer
- _updateJitter
- _updateIconImageViewAnimated:
- _updateUpdatedMark
- _updateProgressAnimated:
- _updateAccessoryViewWithAnimation:
- _setIcon:animated:
- setIconImageAlpha:
- setIconAccessoryAlpha:
- _applyIconImageAlpha:
- _applyIconAccessoryAlpha:
- _applyIconLabelAlpha:
- _frameForImageView
- _frameForLabel
- _frameForUpdatedMarkWithLabelFrame:
- _frameForAccessoryView
- _centerForCloseBox
- _labelVerticalOffset
- _centerForCloseBoxRelativeToVisibleImageFrame:
- _updateAdaptiveColors
- _labelImageParameters
- _legibilitySettingsWithParameters:
- _legibilitySettingsWithPrimaryColor:
- _createAccessoryViewIfNecessary
- _updateBrightness
- prepareToCrossfadeImageWithView:maskCorners:trueCrossfade:anchorPoint:
- cleanupAfterImageCrossfade
- setImageCrossfadeFadeFraction:
- setImageCrossfadeMorphFraction:
- _delegateTouchEnded:
- grabDurationForEvent:
- longPressTimerFired
- wallpaperRelativeImageCenter
- _delegateTapAllowed
- allowsTapWhileEditing
- _applyEditingStateAnimated:
- _updateCloseBoxAnimated:
- _isShowingCloseBox
- _closeBoxTapped
- swapInIcon:
- setLabelHidden:
- setUpdatedMarkHidden:
- invalidateLabelLayoutGeometry
- prepareToCrossfadeImageWithView:maskCorners:trueCrossfade:
- setTouchDownInIcon:
- snapshotEdgeInsets
- prepareForRecycling
- iconAccessoryAlpha
- iconLabelAlpha
- icon
- dealloc
- setDelegate:
- pointInside:withEvent:
- setFrame:
- layoutSubviews
- delegate
- touchesCancelled:withEvent:
- _automationID
- _shouldAnimatePropertyWithKey:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- setHighlighted:
- isHighlighted
- _updateLabel
- isEditing
- pointMostlyInside:withEvent:
- setIcon:
- initWithDefaultSize
- settings:changedValueForKey:
- setPaused:
- location
- _labelImage
- setObserver:
- observer
- legibilitySettings
- _iconImageView
- setLegibilitySettings:
- setLocation:
- setIsEditing:
@end
