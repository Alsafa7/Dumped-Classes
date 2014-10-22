@interface UIToolbar : UIView
{
	id _delegate;
	id _items;
	id _barTintColor;
	struct _toolbarFlags;
	pointer _groups;
	id _buttonItems;
	long long _currentButtonGroup;
	long long _pressedTag;
	double _extraEdgeInsets;
	id _appearanceStorage;
	id _adaptiveBackdrop;
	id _backgroundView;
	id _shadowView;
	BOOL _isAdaptiveToolbarDisabled;
	BOOL _wantsLetterpressContent;
	long long _barPosition;
}

+ _autolayoutSpacingAtEdge:inContainer:
+ _autolayoutSpacingAtEdge:nextToNeighbor:
+ _hasCustomAutolayoutNeighborSpacing
+ isElementAccessibilityExposedToInterfaceBuilder
+ scriptingInfoWithChildren
+ _updateScriptingInfo:view:
+ _buttonName:withType:
+ _finishButtonAnimation:forButton:
+ _updateItemsForNewFrame:
+ _edgeMarginForBorderedItem:isText:
+ _showButtons:withCount:group:withDuration:adjustPositions:skipTag:
+ _currentButtons
+ _buttonDownDelayed:
+ _adjustButtonPressed:
+ _buttonDown:
+ _buttonUp:
+ _buttonCancel:
+ _buttonWithDescription:
+ _descriptionForTag:
+ _backgroundView
+ _setVisualAltitude:
+ _setVisualAltitudeBias:
+ _setBackgroundView:
+ _updateBackgroundImage
+ _currentCustomBackground
+ _currentCustomBackgroundRespectOversize_legacy:
+ _setLocked:
+ _isInNavigationBar
+ _positionToolbarButtons:ignoringItem:resetFontScaleAdjustment:actuallyRepositionButtons:
+ _positionToolbarButtons:ignoringItem:resetFontScaleAdjustment:
+ _supportsAdaptiveBackground
+ _layoutBackgroundViewConsideringStatusBar
+ _cleanupAdaptiveBackdrop
+ _repositionedItemsFromItems:withBarButtonFrames:withHitRects:buttonIndexes:textButtonIndexes:
+ _isLocked
+ _customToolbarAppearance
+ initWithFrame:
+ setAutoresizingMask:
+ drawRect:
+ setFrame:
+ setBounds:
+ setCenter:
+ _subclassImplementsDrawRect
+ _setBackgroundImage:mini:
+ _setButtonBackgroundImage:mini:forStates:
+ initInView:withFrame:withItemList:
+ _frameOrBoundsChangedWithVisibleSizeChange:wasMinibar:
+ _frameOrCenterChanged
+ initInView:withItemList:
+ createButtonWithDescription:
+ positionButtons:tags:count:group:
+ _buttonBarFinishedAnimating
+ showButtons:withCount:withDuration:
+ registerButtonGroup:withButtons:withCount:
+ showButtonGroup:withDuration:
+ currentButtonGroup
+ getVisibleButtonTags:count:maxItems:
+ setButtonBarTrackingMode:
+ setBadgeValue:forButton:
+ setBadgeGlyph:forButton:
+ setBadgeAnimated:forButton:
+ onStateForButton:
+ setOnStateForButton:forButton:
+ animateWithDuration:forButton:
+ buttonItems
+ setButtonItems:
+ _setForceTopBarAppearance:
+ _frameOfBarButtonItem:
+ dealloc
+ initWithCoder:
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ setDelegate:
+ layoutSubviews
+ _contentHuggingDefault_isUsuallyFixedHeight
+ sizeThatFits:
+ delegate
+ isTranslucent
+ setTranslatesAutoresizingMaskIntoConstraints:
+ setTintColor:
+ invalidateIntrinsicContentSize
+ tintColorDidChange
+ _didMoveFromWindow:toWindow:
+ isMinibar
+ _updateBackgroundColor
+ _effectiveBarTintColor
+ _effectiveBarTintColorDidChangeWithPreviousColor:
+ _shadowView
+ defaultSizeForOrientation:
+ _updateOpacity
+ _wantsLetterpressContent
+ setItems:animated:
+ items
+ setItems:
+ _setBarPosition:
+ addConstraint:
+ removeConstraint:
+ setBarStyle:
+ _customViewChangedForButtonItem:
+ barStyle
+ setTranslucent:
+ setBarTintColor:
+ intrinsicContentSize
+ _barPosition
+ barPosition
+ _setWantsLetterpressContent:
+ _hidesShadow
+ _setHidesShadow:
+ barTintColor
+ _setShadowView:
+ backdropView:willChangeToGraphicsQuality:
+ backdropView:didChangeToGraphicsQuality:
+ backgroundImageForToolbarPosition:barMetrics:
+ setBarStyle:force:
+ _setBarTintColor:force:
+ _didFinishHidingRetainedOldItems:
+ _finishSetItems:finished:context:
+ _updateToolbarButtonsForInteractionTintColorChange
+ _isTopBar_legacy
+ _subviewIndexAboveBackgroundView
+ _setAdaptiveToolbarDisabled:
+ setExtraEdgeInsets:
+ extraEdgeInsets
+ setMode:
+ mode
+ _sendAction:withEvent:
+ animateToolbarItemIndex:duration:target:didFinishSelector:
+ setBackgroundImage:forToolbarPosition:barMetrics:
+ setShadowImage:forToolbarPosition:
+ shadowImageForToolbarPosition:
+ _isAdaptiveToolbarDisabled
- _autolayoutSpacingAtEdge:inContainer:
- _autolayoutSpacingAtEdge:nextToNeighbor:
- _hasCustomAutolayoutNeighborSpacing
- isElementAccessibilityExposedToInterfaceBuilder
- scriptingInfoWithChildren
- _updateScriptingInfo:view:
- _buttonName:withType:
- _finishButtonAnimation:forButton:
- _updateItemsForNewFrame:
- _edgeMarginForBorderedItem:isText:
- _showButtons:withCount:group:withDuration:adjustPositions:skipTag:
- _currentButtons
- _buttonDownDelayed:
- _adjustButtonPressed:
- _buttonDown:
- _buttonUp:
- _buttonCancel:
- _buttonWithDescription:
- _descriptionForTag:
- _backgroundView
- _setVisualAltitude:
- _setVisualAltitudeBias:
- _setBackgroundView:
- _updateBackgroundImage
- _currentCustomBackground
- _currentCustomBackgroundRespectOversize_legacy:
- _setLocked:
- _isInNavigationBar
- _positionToolbarButtons:ignoringItem:resetFontScaleAdjustment:actuallyRepositionButtons:
- _positionToolbarButtons:ignoringItem:resetFontScaleAdjustment:
- _supportsAdaptiveBackground
- _layoutBackgroundViewConsideringStatusBar
- _cleanupAdaptiveBackdrop
- _repositionedItemsFromItems:withBarButtonFrames:withHitRects:buttonIndexes:textButtonIndexes:
- _isLocked
- _customToolbarAppearance
- initWithFrame:
- setAutoresizingMask:
- drawRect:
- setFrame:
- setBounds:
- setCenter:
- _subclassImplementsDrawRect
- _setBackgroundImage:mini:
- _setButtonBackgroundImage:mini:forStates:
- initInView:withFrame:withItemList:
- _frameOrBoundsChangedWithVisibleSizeChange:wasMinibar:
- _frameOrCenterChanged
- initInView:withItemList:
- createButtonWithDescription:
- positionButtons:tags:count:group:
- _buttonBarFinishedAnimating
- showButtons:withCount:withDuration:
- registerButtonGroup:withButtons:withCount:
- showButtonGroup:withDuration:
- currentButtonGroup
- getVisibleButtonTags:count:maxItems:
- setButtonBarTrackingMode:
- setBadgeValue:forButton:
- setBadgeGlyph:forButton:
- setBadgeAnimated:forButton:
- onStateForButton:
- setOnStateForButton:forButton:
- animateWithDuration:forButton:
- buttonItems
- setButtonItems:
- _setForceTopBarAppearance:
- _frameOfBarButtonItem:
- dealloc
- initWithCoder:
- _populateArchivedSubviews:
- encodeWithCoder:
- setDelegate:
- layoutSubviews
- _contentHuggingDefault_isUsuallyFixedHeight
- sizeThatFits:
- delegate
- isTranslucent
- setTranslatesAutoresizingMaskIntoConstraints:
- setTintColor:
- invalidateIntrinsicContentSize
- tintColorDidChange
- _didMoveFromWindow:toWindow:
- isMinibar
- _updateBackgroundColor
- _effectiveBarTintColor
- _effectiveBarTintColorDidChangeWithPreviousColor:
- _shadowView
- defaultSizeForOrientation:
- _updateOpacity
- _wantsLetterpressContent
- setItems:animated:
- items
- setItems:
- _setBarPosition:
- addConstraint:
- removeConstraint:
- setBarStyle:
- _customViewChangedForButtonItem:
- barStyle
- setTranslucent:
- setBarTintColor:
- intrinsicContentSize
- _barPosition
- barPosition
- _setWantsLetterpressContent:
- _hidesShadow
- _setHidesShadow:
- barTintColor
- _setShadowView:
- backdropView:willChangeToGraphicsQuality:
- backdropView:didChangeToGraphicsQuality:
- backgroundImageForToolbarPosition:barMetrics:
- setBarStyle:force:
- _setBarTintColor:force:
- _didFinishHidingRetainedOldItems:
- _finishSetItems:finished:context:
- _updateToolbarButtonsForInteractionTintColorChange
- _isTopBar_legacy
- _subviewIndexAboveBackgroundView
- _setAdaptiveToolbarDisabled:
- setExtraEdgeInsets:
- extraEdgeInsets
- setMode:
- mode
- _sendAction:withEvent:
- animateToolbarItemIndex:duration:target:didFinishSelector:
- setBackgroundImage:forToolbarPosition:barMetrics:
- setShadowImage:forToolbarPosition:
- shadowImageForToolbarPosition:
- _isAdaptiveToolbarDisabled
@end
