@interface _UISwitchInternalViewNeueStyle1 : UIView
{
	id _switchWellView;
	id _leftSwitchWellView;
	id _switchWellContainerView;
	id _leftSwitchWellContainerView;
	id _switchWellImageViewContainer;
	id _switchWellOffImageView;
	id _switchWellOnImageView;
	id _knobView;
	id _onTintColor;
	id _tintColor;
	BOOL _on;
	BOOL _pressed;
	BOOL _isAlwaysAccessible;
	BOOL _useAlternateColor;
	BOOL _pressedIsHandledByGestureRecognizer;
	id _thumbTintColor;
	id _onImage;
	id _offImage;
}

+ initWithFrame:
+ dealloc
+ tintColor
+ setTintColor:
+ _setPressed:
+ setThumbTintColor:
+ thumbTintColor
+ _setOn:animated:force:
+ _defaultOnTintColor
+ _cleanUpAfterAnimating
+ _setProgress:animated:withDuration:force:sendAction:
+ _setProgress:
+ _prepareForInteraction
+ setSendAction:
+ _setPressed:on:animated:shouldAnimateLabels:completion:
+ onTintColor
+ setOnTintColor:
+ onImage
+ setOnImage:
+ offImage
+ setOffImage:
+ on
+ setOn:
+ useAlternateColor
+ setUseAlternateColor:
+ _invalidateControl
+ _accessibilitySettingChanged
+ _invalidateWell
+ _invalidateKnob
+ _invalidateOnOffImages
+ _wellBorderWidthPressed:on:
+ _orderSubviews
+ _transitionWellViewToPressed:animated:
+ _transitionWellViewToOn:animated:
+ _transitionKnobToPressed:on:animated:
+ _effectiveThumbImage
+ _transitionKnobToPressed:animated:
+ _transitionKnobToOn:animated:
+ _effectiveOffImage
+ _effectiveOnImage
+ _offImagePosition
+ _onImagePosition
+ _effectiveOffImageTintColor
+ _effectiveOnImageTintColor
+ _maskLayerForImageViews
+ _transitionImagesToPressed:on:animated:
+ _knobBoundsPressed:
+ _knobPositionOn:pressed:forBounds:
+ _switchWellContainerBoundsOn:pressed:
+ _switchWellContainerPositionOn:pressed:
+ _leftSwitchWellContainerBoundsOn:pressed:
+ _leftSwitchWellContainerPositionOn:pressed:
+ _switchWellPositionOn:pressed:
+ _switchSpringAnimationWithKeyPath:fromValue:toValue:pressed:
+ _switchTrackAnimationWithFromValue:toValue:on:
+ _wellColorOn:
+ _switchTrackColorAnimationWithFromValue:toValue:
+ _effectiveOnTintColor
+ _effectiveTintColor
+ _shouldDrawAccessibly
+ _accessibleOnImage
+ _accessibleOffImage
+ _shouldUseLightTintOverColor:
+ _frameForLeftAlignmentOfView:
+ _labelOpacityAnimation
+ _effectiveOffTextColor
+ isAlwaysAccessible
+ setIsAlwaysAccessible:
+ _setPressed:animated:
+ pressedIsHandledByGestureRecognizer
+ setPressedIsHandledByGestureRecognizer:
- initWithFrame:
- dealloc
- tintColor
- setTintColor:
- _setPressed:
- setThumbTintColor:
- thumbTintColor
- _setOn:animated:force:
- _defaultOnTintColor
- _cleanUpAfterAnimating
- _setProgress:animated:withDuration:force:sendAction:
- _setProgress:
- _prepareForInteraction
- setSendAction:
- _setPressed:on:animated:shouldAnimateLabels:completion:
- onTintColor
- setOnTintColor:
- onImage
- setOnImage:
- offImage
- setOffImage:
- on
- setOn:
- useAlternateColor
- setUseAlternateColor:
- _invalidateControl
- _accessibilitySettingChanged
- _invalidateWell
- _invalidateKnob
- _invalidateOnOffImages
- _wellBorderWidthPressed:on:
- _orderSubviews
- _transitionWellViewToPressed:animated:
- _transitionWellViewToOn:animated:
- _transitionKnobToPressed:on:animated:
- _effectiveThumbImage
- _transitionKnobToPressed:animated:
- _transitionKnobToOn:animated:
- _effectiveOffImage
- _effectiveOnImage
- _offImagePosition
- _onImagePosition
- _effectiveOffImageTintColor
- _effectiveOnImageTintColor
- _maskLayerForImageViews
- _transitionImagesToPressed:on:animated:
- _knobBoundsPressed:
- _knobPositionOn:pressed:forBounds:
- _switchWellContainerBoundsOn:pressed:
- _switchWellContainerPositionOn:pressed:
- _leftSwitchWellContainerBoundsOn:pressed:
- _leftSwitchWellContainerPositionOn:pressed:
- _switchWellPositionOn:pressed:
- _switchSpringAnimationWithKeyPath:fromValue:toValue:pressed:
- _switchTrackAnimationWithFromValue:toValue:on:
- _wellColorOn:
- _switchTrackColorAnimationWithFromValue:toValue:
- _effectiveOnTintColor
- _effectiveTintColor
- _shouldDrawAccessibly
- _accessibleOnImage
- _accessibleOffImage
- _shouldUseLightTintOverColor:
- _frameForLeftAlignmentOfView:
- _labelOpacityAnimation
- _effectiveOffTextColor
- isAlwaysAccessible
- setIsAlwaysAccessible:
- _setPressed:animated:
- pressedIsHandledByGestureRecognizer
- setPressedIsHandledByGestureRecognizer:
@end
