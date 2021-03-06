@interface UISearchBar : UIView
{
	id _searchField;
	id _promptLabel;
	id _cancelButton;
	id _delegate;
	id _controller;
	id _barTintColor;
	id _separator;
	id _cancelButtonText;
	id _scopes;
	long long _selectedScope;
	id _background;
	id _scopeBar;
	id _scopeBarContainerView;
	struct _contentInset;
	id _shadowView;
	id _appearanceStorage;
	id _navigationItem;
	id _scopeBarBackgroundView;
	id _animatedAppearanceBarButtonItem;
	id _backdrop;
	usigned long long _backdropStyle;
	id _maskView;
	id _tapToActivateGestureRecognizer;
	id _cancelBarButtonItem;
	struct _searchBarFlags;
	BOOL __forceCenteredPlaceholderLayout;
	id _statusBarTintColor;
	id _inputAccessoryView;
	long long _barPosition;
	usigned long long _searchBarStyle;
}

+ _autolayoutSpacingAtEdge:inContainer:
+ _autolayoutSpacingAtEdge:nextToNeighbor:
+ _hasCustomAutolayoutNeighborSpacing
+ isElementAccessibilityExposedToInterfaceBuilder
+ _backgroundView
+ resignFirstResponder
+ becomeFirstResponder
+ canBecomeFirstResponder
+ tintColorDidChange
+ isFirstResponder
+ _updateOpacity
+ _isEnabled
+ textFieldShouldBeginEditing:
+ textFieldShouldEndEditing:
+ textField:shouldChangeCharactersInRange:replacementString:
+ reloadInputViews
+ canResignFirstResponder
+ _setupSearchField
+ _setupPromptLabel
+ _setupCancelButton
+ _consideredInBarWithSuperview:
+ _updateSearchFieldArt
+ _updateMagnifyingGlassView
+ _resultsListButtonPressed
+ _bookmarkButtonPressed
+ _destroyCancelButton
+ _isInBar
+ _cancelButtonPressed
+ _scopeBarBackgroundView
+ pretendsIsInBar
+ _searchFieldBeginEditing
+ _searchFieldEditingChanged
+ _searchFieldEndEditing
+ _searchFieldReturnPressed
+ _setupCancelButtonWithAppearance:
+ _setEnabled:animated:
+ _setScopeBarSegmentsEnabled:
+ setPretendsIsInBar:
+ _textFieldShouldScrollToVisibleWhenBecomingFirstResponder:
+ _setCancelButtonText:
+ _setAutoDisableCancelButton:
+ _setEnabled:
+ _updateBackgroundToBackdropStyle:
+ initWithFrame:
+ dealloc
+ initWithCoder:
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ setDelegate:
+ hitTest:withEvent:
+ setFrame:
+ bringSubviewToFront:
+ layoutSubviews
+ sendSubviewToBack:
+ setBounds:
+ _textColor
+ _contentHuggingDefault_isUsuallyFixedHeight
+ sizeThatFits:
+ delegate
+ _statusBarTintColor
+ isTranslucent
+ _commonInit
+ setTintColor:
+ _addSubview:positioned:relativeTo:
+ willMoveToWindow:
+ _didMoveFromWindow:toWindow:
+ willMoveToSuperview:
+ movedToSuperview:
+ text
+ contentInset
+ setContentInset:
+ backgroundImageForBarPosition:barMetrics:
+ backgroundImage
+ prompt
+ setPrompt:
+ setBackgroundImage:forBarMetrics:
+ _effectiveBarTintColor
+ setBackgroundImage:forBarPosition:barMetrics:
+ _setBarPosition:
+ setBarStyle:
+ barStyle
+ setTranslucent:
+ setBarTintColor:
+ intrinsicContentSize
+ _barPosition
+ barPosition
+ backgroundImageForBarMetrics:
+ barTintColor
+ setText:
+ autocapitalizationType
+ setAutocapitalizationType:
+ autocorrectionType
+ setAutocorrectionType:
+ spellCheckingType
+ setSpellCheckingType:
+ keyboardType
+ setKeyboardType:
+ setPlaceholder:
+ cancelButton
+ setCancelButton:
+ _navigationItem
+ inputAccessoryView
+ setBackgroundImage:
+ setDrawsBackground:
+ setInputAccessoryView:
+ shortcutConversionType
+ setShortcutConversionType:
+ setSearchFieldBackgroundImage:forState:
+ searchFieldBackgroundImageForState:
+ scopeBarBackgroundImage
+ setScopeBarBackgroundImage:
+ _setMaskActive:
+ tappedSearchBar:
+ setScopeButtonTitles:
+ _scopeChanged:
+ setUsesEmbeddedAppearance:
+ setSearchBarStyle:
+ _setShowsSeparator:
+ setSearchTextPositionAdjustment:
+ setSearchFieldBackgroundPositionAdjustment:
+ _scopeBarContainer
+ scopeButtonTitles
+ placeholder
+ searchTextPositionAdjustment
+ searchFieldBackgroundPositionAdjustment
+ centerPlaceholder
+ _setShadowVisibleIfNecessary:
+ _shouldDisplayShadow
+ setDrawsBackgroundInPalette:
+ _setMaskBounds:
+ _currentSeparatorImage
+ _updateScopeBarBackground
+ _updatePlaceholderColor
+ _updateRightView
+ _imageForSearchBarIcon:state:
+ setShowsCancelButton:animated:
+ _allowCursorToAppear:
+ _displayNavBarCancelButton:animated:
+ _cancelBarButtonItem
+ _containedInNavigationPalette
+ drawsBackgroundInPalette
+ _landscapeScopeBarWidth
+ _setBarTintColor:forceUpdate:
+ _shouldCombineLandscapeBars
+ _defaultHeight
+ _searchFieldWidthShouldBeFlexible
+ _availableBoundsWidth
+ _scopeBarInsets
+ _landscapeSearchFieldWidth
+ _scopeBarIsVisible
+ drawsBackground
+ _layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:
+ _searchFieldHeight
+ _viewForChildViews
+ _navigationBarForShadow
+ _makeShadowView
+ controller
+ _setUpScopeBar
+ _setShowsScopeBar:animateOpacity:
+ _effectiveBarTintColorDidChange:
+ _updateNeedForBackdrop
+ _glyphAndTextColor:
+ _imageForSearchBarIcon:state:customImage:
+ _isAtTop
+ setController:
+ searchField
+ _scopeBar
+ didMoveToWindow:
+ setShowsSearchResultsButton:
+ showsSearchResultsButton
+ setSearchResultsButtonSelected:
+ isSearchResultsButtonSelected
+ setShowsBookmarkButton:
+ showsBookmarkButton
+ setShowsCancelButton:
+ showsCancelButton
+ _setShowsCancelButton:
+ setCombinesLandscapeBars:
+ combinesLandscapeBars
+ usesEmbeddedAppearance
+ setSelectedScopeButtonIndex:
+ selectedScopeButtonIndex
+ _setScopeBarHidden:
+ setShowsScopeBar:
+ showsScopeBar
+ _setStatusBarTintColor:
+ _separatorImage
+ _setSeparatorImage:
+ setImage:forSearchBarIcon:state:
+ imageForSearchBarIcon:state:
+ setScopeBarButtonBackgroundImage:forState:
+ scopeBarButtonBackgroundImageForState:
+ setScopeBarButtonDividerImage:forLeftSegmentState:rightSegmentState:
+ scopeBarButtonDividerImageForLeftSegmentState:rightSegmentState:
+ setScopeBarButtonTitleTextAttributes:forState:
+ scopeBarButtonTitleTextAttributesForState:
+ setPositionAdjustment:forSearchBarIcon:
+ positionAdjustmentForSearchBarIcon:
+ _animatedAppearanceBarButtonItem
+ _setBackgroundLayoutNeedsUpdate:
+ _setBackdropStyle:
+ _backdropStyle
+ setCenterPlaceholder:
+ searchBarStyle
+ _forceCenteredPlaceholderLayout
+ set_forceCenteredPlaceholderLayout:
- _autolayoutSpacingAtEdge:inContainer:
- _autolayoutSpacingAtEdge:nextToNeighbor:
- _hasCustomAutolayoutNeighborSpacing
- isElementAccessibilityExposedToInterfaceBuilder
- _backgroundView
- resignFirstResponder
- becomeFirstResponder
- canBecomeFirstResponder
- tintColorDidChange
- isFirstResponder
- _updateOpacity
- _isEnabled
- textFieldShouldBeginEditing:
- textFieldShouldEndEditing:
- textField:shouldChangeCharactersInRange:replacementString:
- reloadInputViews
- canResignFirstResponder
- _setupSearchField
- _setupPromptLabel
- _setupCancelButton
- _consideredInBarWithSuperview:
- _updateSearchFieldArt
- _updateMagnifyingGlassView
- _resultsListButtonPressed
- _bookmarkButtonPressed
- _destroyCancelButton
- _isInBar
- _cancelButtonPressed
- _scopeBarBackgroundView
- pretendsIsInBar
- _searchFieldBeginEditing
- _searchFieldEditingChanged
- _searchFieldEndEditing
- _searchFieldReturnPressed
- _setupCancelButtonWithAppearance:
- _setEnabled:animated:
- _setScopeBarSegmentsEnabled:
- setPretendsIsInBar:
- _textFieldShouldScrollToVisibleWhenBecomingFirstResponder:
- _setCancelButtonText:
- _setAutoDisableCancelButton:
- _setEnabled:
- _updateBackgroundToBackdropStyle:
- initWithFrame:
- dealloc
- initWithCoder:
- _populateArchivedSubviews:
- encodeWithCoder:
- setDelegate:
- hitTest:withEvent:
- setFrame:
- bringSubviewToFront:
- layoutSubviews
- sendSubviewToBack:
- setBounds:
- _textColor
- _contentHuggingDefault_isUsuallyFixedHeight
- sizeThatFits:
- delegate
- _statusBarTintColor
- isTranslucent
- _commonInit
- setTintColor:
- _addSubview:positioned:relativeTo:
- willMoveToWindow:
- _didMoveFromWindow:toWindow:
- willMoveToSuperview:
- movedToSuperview:
- text
- contentInset
- setContentInset:
- backgroundImageForBarPosition:barMetrics:
- backgroundImage
- prompt
- setPrompt:
- setBackgroundImage:forBarMetrics:
- _effectiveBarTintColor
- setBackgroundImage:forBarPosition:barMetrics:
- _setBarPosition:
- setBarStyle:
- barStyle
- setTranslucent:
- setBarTintColor:
- intrinsicContentSize
- _barPosition
- barPosition
- backgroundImageForBarMetrics:
- barTintColor
- setText:
- autocapitalizationType
- setAutocapitalizationType:
- autocorrectionType
- setAutocorrectionType:
- spellCheckingType
- setSpellCheckingType:
- keyboardType
- setKeyboardType:
- setPlaceholder:
- cancelButton
- setCancelButton:
- _navigationItem
- inputAccessoryView
- setBackgroundImage:
- setDrawsBackground:
- setInputAccessoryView:
- shortcutConversionType
- setShortcutConversionType:
- setSearchFieldBackgroundImage:forState:
- searchFieldBackgroundImageForState:
- scopeBarBackgroundImage
- setScopeBarBackgroundImage:
- _setMaskActive:
- tappedSearchBar:
- setScopeButtonTitles:
- _scopeChanged:
- setUsesEmbeddedAppearance:
- setSearchBarStyle:
- _setShowsSeparator:
- setSearchTextPositionAdjustment:
- setSearchFieldBackgroundPositionAdjustment:
- _scopeBarContainer
- scopeButtonTitles
- placeholder
- searchTextPositionAdjustment
- searchFieldBackgroundPositionAdjustment
- centerPlaceholder
- _setShadowVisibleIfNecessary:
- _shouldDisplayShadow
- setDrawsBackgroundInPalette:
- _setMaskBounds:
- _currentSeparatorImage
- _updateScopeBarBackground
- _updatePlaceholderColor
- _updateRightView
- _imageForSearchBarIcon:state:
- setShowsCancelButton:animated:
- _allowCursorToAppear:
- _displayNavBarCancelButton:animated:
- _cancelBarButtonItem
- _containedInNavigationPalette
- drawsBackgroundInPalette
- _landscapeScopeBarWidth
- _setBarTintColor:forceUpdate:
- _shouldCombineLandscapeBars
- _defaultHeight
- _searchFieldWidthShouldBeFlexible
- _availableBoundsWidth
- _scopeBarInsets
- _landscapeSearchFieldWidth
- _scopeBarIsVisible
- drawsBackground
- _layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:
- _searchFieldHeight
- _viewForChildViews
- _navigationBarForShadow
- _makeShadowView
- controller
- _setUpScopeBar
- _setShowsScopeBar:animateOpacity:
- _effectiveBarTintColorDidChange:
- _updateNeedForBackdrop
- _glyphAndTextColor:
- _imageForSearchBarIcon:state:customImage:
- _isAtTop
- setController:
- searchField
- _scopeBar
- didMoveToWindow:
- setShowsSearchResultsButton:
- showsSearchResultsButton
- setSearchResultsButtonSelected:
- isSearchResultsButtonSelected
- setShowsBookmarkButton:
- showsBookmarkButton
- setShowsCancelButton:
- showsCancelButton
- _setShowsCancelButton:
- setCombinesLandscapeBars:
- combinesLandscapeBars
- usesEmbeddedAppearance
- setSelectedScopeButtonIndex:
- selectedScopeButtonIndex
- _setScopeBarHidden:
- setShowsScopeBar:
- showsScopeBar
- _setStatusBarTintColor:
- _separatorImage
- _setSeparatorImage:
- setImage:forSearchBarIcon:state:
- imageForSearchBarIcon:state:
- setScopeBarButtonBackgroundImage:forState:
- scopeBarButtonBackgroundImageForState:
- setScopeBarButtonDividerImage:forLeftSegmentState:rightSegmentState:
- scopeBarButtonDividerImageForLeftSegmentState:rightSegmentState:
- setScopeBarButtonTitleTextAttributes:forState:
- scopeBarButtonTitleTextAttributesForState:
- setPositionAdjustment:forSearchBarIcon:
- positionAdjustmentForSearchBarIcon:
- _animatedAppearanceBarButtonItem
- _setBackgroundLayoutNeedsUpdate:
- _setBackdropStyle:
- _backdropStyle
- setCenterPlaceholder:
- searchBarStyle
- _forceCenteredPlaceholderLayout
- set_forceCenteredPlaceholderLayout:
@end
