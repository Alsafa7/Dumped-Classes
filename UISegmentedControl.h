@interface UISegmentedControl : UIControl
{
	id _segments;
	long long _selectedSegment;
	long long _highlightedSegment;
	id _removedSegment;
	long long _barStyle;
	id _appearanceStorage;
	id _backgroundBarView;
	double _enabledAlpha;
	struct _segmentedControlFlags;
	BOOL __hasTranslucentOptionsBackground;
}

+ scriptingInfoWithChildren
+ setDelegate:
+ selectSegment:
+ setSelectedSegment:
+ initWithFrame:withStyle:withItems:
+ setAlwaysNotifiesDelegateOfSegmentClicks:
+ setImagePadding:forSegment:
+ addSegmentWithTitle:
+ insertSegment:withTitle:animated:
+ insertSegment:withImage:animated:
+ removeSegment:animated:
+ setTitle:forSegment:
+ titleForSegment:
+ setImage:forSegment:
+ imageForSegment:
+ setWidth:forSegment:
+ widthForSegment:
+ setContentOffset:forSegment:
+ contentOffsetForSegment:
+ setEnabled:forSegment:
+ isEnabledForSegment:
+ selectedSegment
+ infoViewForSegment:
+ initWithFrame:
+ dealloc
+ bounds
+ initWithCoder:
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ setAlpha:
+ _intrinsicSizeWithinSize:
+ setFrame:
+ layoutSubviews
+ frame
+ setBounds:
+ _contentHuggingDefault_isUsuallyFixedHeight
+ sizeThatFits:
+ _basicAnimationForView:withKeyPath:
+ gestureRecognizerShouldBegin:
+ touchesCancelled:withEvent:
+ alignmentRectInsets
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ useBlockyMagnificationInClassic
+ _tintColorArchivingKey
+ setTintColor:
+ sizeToFit
+ _didMoveFromWindow:toWindow:
+ setEnabled:
+ updateForMiniBarState:
+ setTitleTextAttributes:forState:
+ setControlSize:
+ setBarStyle:
+ barStyle
+ _backgroundVerticalPositionAdjustmentForBarMetrics:
+ controlSize
+ setBackgroundImage:forState:barMetrics:
+ _setTitleTextAttributes:forState:
+ _setBackgroundVerticalPositionAdjustment:forBarMetrics:
+ _setBackgroundImage:forState:barMetrics:
+ shouldTrack
+ pointMostlyInside:withEvent:
+ _optionsBackgroundImage
+ _isInMiniBar
+ _isInTranslucentToolbar
+ _barHeight
+ isMomentary
+ setMomentary:
+ viewForBaselineLayout
+ _commonSegmentedControlInit
+ _createAndAddSegmentAtIndex:position:withInfo:
+ setSegmentedControlStyle:
+ _setSelectedSegmentIndex:notify:animate:
+ _setEnabled:forcePropagateToSegments:
+ removeAllSegments
+ _setCurrentBackgroundImage:
+ _updateOptionsBackground
+ _updateDividerImageForSegmentAtIndex:
+ _setNeedsAppearanceUpdate
+ _setControlSize:andInvalidate:
+ _insertSegment:withInfo:animated:
+ setSelectedSegmentIndex:
+ _removeSegmentAnimationFinished:finished:context:
+ setRemovedSegment:
+ _setSelectedSegmentIndex:notify:
+ _shouldSelectSegmentAtIndex:
+ _setSelected:forSegmentAtIndex:
+ _resetForAppearanceChange
+ _setHighlightedSegmentHighlighted:
+ highlightSegment:
+ _clearSelectedSegment
+ _tapSegmentAtPoint:
+ _setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:
+ _createSegmentAtIndex:position:withInfo:
+ apportionsSegmentWidthsByContent
+ setApportionsSegmentWidthsByContent:
+ initWithItems:
+ _optionsShadowHidden
+ _setOptionsShadowHidden:
+ _setSegmentedControlAppearance:
+ _setAppearanceIsTiled:leftCapWidth:rightCapWidth:
+ segmentedControlStyle
+ segmentControlStyle
+ setSegmentControlStyle:
+ _setAutosizeText:
+ _setTranslucentOptionsBackground:
+ setTransparentBackground:
+ transparentBackground
+ _usesNewAnimations
+ _setUsesNewAnimations:
+ insertSegmentWithTitle:atIndex:animated:
+ insertSegmentWithImage:atIndex:animated:
+ _insertSegmentWithAttributedTitle:atIndex:animated:
+ removeSegmentAtIndex:animated:
+ setTitle:forSegmentAtIndex:
+ titleForSegmentAtIndex:
+ _setAttributedTitle:forSegmentAtIndex:
+ _attributedTitleForSegmentAtIndex:
+ setImage:forSegmentAtIndex:
+ imageForSegmentAtIndex:
+ setWidth:forSegmentAtIndex:
+ widthForSegmentAtIndex:
+ setContentOffset:forSegmentAtIndex:
+ contentOffsetForSegmentAtIndex:
+ setEnabled:forSegmentAtIndex:
+ isEnabledForSegmentAtIndex:
+ numberOfSegments
+ selectedSegmentIndex
+ _animateContentChangeWithAnimations:completion:
+ removedSegment
+ _setOptionsBackgroundImage:
+ backgroundImageForState:barMetrics:
+ setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:
+ dividerImageForLeftSegmentState:rightSegmentState:barMetrics:
+ titleTextAttributesForState:
+ setContentPositionAdjustment:forSegmentType:barMetrics:
+ contentPositionAdjustmentForSegmentType:barMetrics:
+ _badgeValueForSegmentAtIndex:
+ _setBadgeValue:forSegmentAtIndex:
+ _hasTranslucentOptionsBackground
- scriptingInfoWithChildren
- setDelegate:
- selectSegment:
- setSelectedSegment:
- initWithFrame:withStyle:withItems:
- setAlwaysNotifiesDelegateOfSegmentClicks:
- setImagePadding:forSegment:
- addSegmentWithTitle:
- insertSegment:withTitle:animated:
- insertSegment:withImage:animated:
- removeSegment:animated:
- setTitle:forSegment:
- titleForSegment:
- setImage:forSegment:
- imageForSegment:
- setWidth:forSegment:
- widthForSegment:
- setContentOffset:forSegment:
- contentOffsetForSegment:
- setEnabled:forSegment:
- isEnabledForSegment:
- selectedSegment
- infoViewForSegment:
- initWithFrame:
- dealloc
- bounds
- initWithCoder:
- _populateArchivedSubviews:
- encodeWithCoder:
- setAlpha:
- _intrinsicSizeWithinSize:
- setFrame:
- layoutSubviews
- frame
- setBounds:
- _contentHuggingDefault_isUsuallyFixedHeight
- sizeThatFits:
- _basicAnimationForView:withKeyPath:
- gestureRecognizerShouldBegin:
- touchesCancelled:withEvent:
- alignmentRectInsets
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- useBlockyMagnificationInClassic
- _tintColorArchivingKey
- setTintColor:
- sizeToFit
- _didMoveFromWindow:toWindow:
- setEnabled:
- updateForMiniBarState:
- setTitleTextAttributes:forState:
- setControlSize:
- setBarStyle:
- barStyle
- _backgroundVerticalPositionAdjustmentForBarMetrics:
- controlSize
- setBackgroundImage:forState:barMetrics:
- _setTitleTextAttributes:forState:
- _setBackgroundVerticalPositionAdjustment:forBarMetrics:
- _setBackgroundImage:forState:barMetrics:
- shouldTrack
- pointMostlyInside:withEvent:
- _optionsBackgroundImage
- _isInMiniBar
- _isInTranslucentToolbar
- _barHeight
- isMomentary
- setMomentary:
- viewForBaselineLayout
- _commonSegmentedControlInit
- _createAndAddSegmentAtIndex:position:withInfo:
- setSegmentedControlStyle:
- _setSelectedSegmentIndex:notify:animate:
- _setEnabled:forcePropagateToSegments:
- removeAllSegments
- _setCurrentBackgroundImage:
- _updateOptionsBackground
- _updateDividerImageForSegmentAtIndex:
- _setNeedsAppearanceUpdate
- _setControlSize:andInvalidate:
- _insertSegment:withInfo:animated:
- setSelectedSegmentIndex:
- _removeSegmentAnimationFinished:finished:context:
- setRemovedSegment:
- _setSelectedSegmentIndex:notify:
- _shouldSelectSegmentAtIndex:
- _setSelected:forSegmentAtIndex:
- _resetForAppearanceChange
- _setHighlightedSegmentHighlighted:
- highlightSegment:
- _clearSelectedSegment
- _tapSegmentAtPoint:
- _setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:
- _createSegmentAtIndex:position:withInfo:
- apportionsSegmentWidthsByContent
- setApportionsSegmentWidthsByContent:
- initWithItems:
- _optionsShadowHidden
- _setOptionsShadowHidden:
- _setSegmentedControlAppearance:
- _setAppearanceIsTiled:leftCapWidth:rightCapWidth:
- segmentedControlStyle
- segmentControlStyle
- setSegmentControlStyle:
- _setAutosizeText:
- _setTranslucentOptionsBackground:
- setTransparentBackground:
- transparentBackground
- _usesNewAnimations
- _setUsesNewAnimations:
- insertSegmentWithTitle:atIndex:animated:
- insertSegmentWithImage:atIndex:animated:
- _insertSegmentWithAttributedTitle:atIndex:animated:
- removeSegmentAtIndex:animated:
- setTitle:forSegmentAtIndex:
- titleForSegmentAtIndex:
- _setAttributedTitle:forSegmentAtIndex:
- _attributedTitleForSegmentAtIndex:
- setImage:forSegmentAtIndex:
- imageForSegmentAtIndex:
- setWidth:forSegmentAtIndex:
- widthForSegmentAtIndex:
- setContentOffset:forSegmentAtIndex:
- contentOffsetForSegmentAtIndex:
- setEnabled:forSegmentAtIndex:
- isEnabledForSegmentAtIndex:
- numberOfSegments
- selectedSegmentIndex
- _animateContentChangeWithAnimations:completion:
- removedSegment
- _setOptionsBackgroundImage:
- backgroundImageForState:barMetrics:
- setDividerImage:forLeftSegmentState:rightSegmentState:barMetrics:
- dividerImageForLeftSegmentState:rightSegmentState:barMetrics:
- titleTextAttributesForState:
- setContentPositionAdjustment:forSegmentType:barMetrics:
- contentPositionAdjustmentForSegmentType:barMetrics:
- _badgeValueForSegmentAtIndex:
- _setBadgeValue:forSegmentAtIndex:
- _hasTranslucentOptionsBackground
@end