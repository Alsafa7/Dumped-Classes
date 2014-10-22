@interface UIAlertView : UIView
{
	id _delegate;
	id _titleLabel;
	id _subtitleLabel;
	id _bodyTextLabel;
	id _taglineTextLabel;
	double _startY;
	struct _center;
	id _context;
	long long _cancelButton;
	long long _defaultButton;
	long long _firstOtherButton;
	id _toolbar;
	id _originalWindow;
	id _dimWindow;
	long long _suspendTag;
	long long _dismissButtonIndex;
	double _bodyTextHeight;
	id _buttons;
	id _textFields;
	id _keyboard;
	id _table;
	id _dimView;
	id _backgroundImageView;
	id _contentViewNeue;
	id _textFieldBackgroundView;
	id _blurWindow;
	id _backdropView;
	id _separatorsViews;
	struct _modalViewFlags;
	id _buttonTitlesNeue;
	id _titleTextNeue;
	id _messageTextNeue;
	id _hostingViewControllerNeue;
	id _windowFOrSBNeueCompatibility;
	id _accessoryView;
	id _accessoryViewController;
	BOOL _textFieldsHidden;
	id _representedModalItem;
}

+ addTextFieldWithValue:label:
+ removeFromSuperview
+ resignFirstResponder
+ _handleKeyUIEvent:
+ becomeFirstResponder
+ context
+ canBecomeFirstResponder
+ _addSubview:positioned:relativeTo:
+ setContext:
+ titleLabel
+ numberOfRows
+ _isAnimating
+ layout
+ _maxHeight
+ defaultButton
+ setDefaultButton:
+ _defaultButton
+ _setAccessoryView:
+ setSubtitle:
+ subtitle
+ dismiss
+ initWithTitle:buttons:defaultButtonIndex:delegate:context:
+ setNumberOfRows:
+ popupAlertAnimated:
+ setTitleMaxLineCount:
+ setRunsModal:
+ textField
+ tableView
+ keyboard
+ _passwordFieldDidChangeForItem:
+ _loginFieldDidChangeForItem:
+ _addButtonWithTitleText:
+ _setDefaultButton:
+ requiresPortraitOrientation
+ setAlertSheetStyle:
+ _createBodyTextLabelIfNeeded
+ _createTaglineTextLabelIfNeeded
+ _createSubtitleLabelIfNeeded
+ _alertSheetTextFieldReturn:
+ textFieldCount
+ _buttonClicked:
+ _currentOrientation
+ buttons
+ _needsKeyboard
+ layoutAnimated:
+ _cancelAnimated:
+ _temporarilyHideAnimated:
+ _canShowAlerts
+ _layoutIfNeeded
+ _growAnimationDidStop:finished:
+ _cleanupAfterPopupAnimation
+ _bubbleAnimationShrinkDidStop:finished:
+ _bubbleAnimationNormalDidStop:finished:
+ _removeAlertWindowOrShowAnOldAlert
+ _popoutAnimationDidStop:finished:
+ _performPopup:
+ _repopup
+ dismissAnimated:
+ _rotatingAnimationDidStop:
+ layoutAnimated:withDuration:
+ _layoutPopupAlertWithOrientation:animated:
+ _appSuspended:
+ popupAlertAnimated:atOffset:
+ _setAlertSheetStyleFromButtonBar:
+ _presentSheetStartingFromYCoordinate:
+ _presentSheetFromView:above:
+ _adjustLabelFontSizes
+ _dimView
+ _alertSheetAnimationDidStop:finished:
+ _setupTitleStyle
+ _titleHorizontalInset
+ _buttonHeight
+ _titleVerticalTopInset
+ _titleVerticalBottomInset
+ _bottomVerticalInset
+ _truncateViewHeight:toFitInFrame:withMinimumHeight:
+ presentSheetFromAboveView:
+ presentSheetFromBehindView:
+ _prepareToBeReplaced
+ groupsTextFields
+ setGroupsTextFields:
+ _createTitleLabelIfNeeded
+ setBodyText:
+ setTaglineText:
+ bodyText
+ titleMaxLineCount
+ setBodyTextMaxLineCount:
+ bodyMaxLineCount
+ _setTextFieldsHidden:
+ setDestructiveButton:
+ destructiveButton
+ addButtonWithTitle:label:
+ _addButtonWithTitle:
+ buttonCount
+ _isSBAlert
+ setTableShouldShowMinimumContent:
+ tableShouldShowMinimumContent
+ _manualKeyboardIsVisible
+ setShowsOverSpringBoardAlerts:
+ showsOverSpringBoardAlerts
+ _repopupNoAnimation
+ _dimsBackground
+ isBodyTextTruncated
+ presentSheetInView:
+ presentSheetToAboveView:
+ setDimView:
+ _slideSheetOut:
+ backgroundSize
+ alertSheetStyle
+ setDimsBackground:
+ dimsBackground
+ setSuspendTag:
+ suspendTag
+ setBlocksInteraction:
+ blocksInteraction
+ runsModal
+ titleRect
+ numberOfLinesInTitle
+ presentSheetFromButtonBar:
+ _prepareForDisplay
+ replaceAlert:
+ _firstOtherButton
+ _addButtonWithTitle:label:buttonClass:
+ addButtonWithTitle:buttonClass:
+ buttonAtIndex:
+ _buttonAtIndex:
+ _alertSheetTextFieldDidStartEditing:
+ _addTextFieldWithValue:label:
+ _textFieldAtIndex:
+ _showKeyboard:animated:
+ _performPopoutAnimationAnimated:coveredBySpringBoardAlert:
+ _setAccessoryViewController:
+ _keyboardHiddingAnimationDidStop:finished:
+ _alertSheetTextFieldDidChange:
+ _updateFrameForDisplay
+ _setupKBWatcher
+ _jiggleStage1AnimationDidStop:finished:
+ _performPopup:animationType:revealedBySpringBoardAlert:
+ _performPopup:animationType:
+ _jiggleStage2AnimationDidStop:finished:
+ _jiggleStage3AnimationDidStop:finished:
+ _jiggleStage4AnimationDidStop:finished:
+ _jiggleStage5AnimationDidStop:finished:
+ _jiggleStage6AnimationDidStop:finished:
+ _cleanupKBWatcher
+ _modalItemForNeueCompatibility
+ popupAlertAnimated:animationType:atOffset:
+ popupAlertAnimated:animationType:
+ _representedModalItem
+ _showByReplacingAlert:animated:
+ _updateButtonTitles
+ setKeyboardShowsOnPopup:
+ _updateKeyboardStateForPreviousResponder:
+ _setDestructiveButton:
+ _destructiveButton
+ _showManualKBIfNecessary
+ _blurMaskImageForBounds:
+ bodyTextLabel
+ taglineTextLabel
+ _alertOrientation
+ willPresentModalItem:
+ didPresentModalItem:
+ modalItem:shouldDismissForButtonAtIndex:
+ modalItem:tappedButtonAtIndex:
+ modalItem:willDismissWithButtonIndex:
+ modalItem:didDismissWithButtonIndex:
+ setForceHorizontalButtonsLayout:
+ forceHorizontalButtonsLayout
+ _nukeOldTextFields
+ _representedModalItemView
+ _showByReplacingPreviousAlertAnimated:
+ alertView:didDismissWithButtonIndex:
+ setComplete:
+ complete
+ initWithFrame:
+ dealloc
+ setDelegate:
+ setTitle:
+ delegate
+ cancelButtonIndex
+ dismissWithClickedButtonIndex:animated:
+ addButtonWithTitle:
+ setCancelButtonIndex:
+ _useUndoStyle:
+ show
+ title
+ message
+ defaultButtonIndex
+ textFieldAtIndex:
+ _keyboardWillShow:
+ _keyboardWillHide:
+ setMessage:
+ isVisible
+ numberOfButtons
+ setDefaultButtonIndex:
+ setAlertViewStyle:
+ _keyboardDidHide:
+ buttonTitleAtIndex:
+ initWithTitle:message:delegate:defaultButton:cancelButton:otherButtons:
+ _setFirstOtherButtonIndex:
+ firstOtherButtonIndex
+ alertViewStyle
+ _addTextEntryFieldsWithStyle:
+ showWithAnimationType:
+ initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:
+ _shouldUseUndoStyle
+ _useLegacyUI:
+ _willRotateKeyboard
- addTextFieldWithValue:label:
- removeFromSuperview
- resignFirstResponder
- _handleKeyUIEvent:
- becomeFirstResponder
- context
- canBecomeFirstResponder
- _addSubview:positioned:relativeTo:
- setContext:
- titleLabel
- numberOfRows
- _isAnimating
- layout
- _maxHeight
- defaultButton
- setDefaultButton:
- _defaultButton
- _setAccessoryView:
- setSubtitle:
- subtitle
- dismiss
- initWithTitle:buttons:defaultButtonIndex:delegate:context:
- setNumberOfRows:
- popupAlertAnimated:
- setTitleMaxLineCount:
- setRunsModal:
- textField
- tableView
- keyboard
- _passwordFieldDidChangeForItem:
- _loginFieldDidChangeForItem:
- _addButtonWithTitleText:
- _setDefaultButton:
- requiresPortraitOrientation
- setAlertSheetStyle:
- _createBodyTextLabelIfNeeded
- _createTaglineTextLabelIfNeeded
- _createSubtitleLabelIfNeeded
- _alertSheetTextFieldReturn:
- textFieldCount
- _buttonClicked:
- _currentOrientation
- buttons
- _needsKeyboard
- layoutAnimated:
- _cancelAnimated:
- _temporarilyHideAnimated:
- _canShowAlerts
- _layoutIfNeeded
- _growAnimationDidStop:finished:
- _cleanupAfterPopupAnimation
- _bubbleAnimationShrinkDidStop:finished:
- _bubbleAnimationNormalDidStop:finished:
- _removeAlertWindowOrShowAnOldAlert
- _popoutAnimationDidStop:finished:
- _performPopup:
- _repopup
- dismissAnimated:
- _rotatingAnimationDidStop:
- layoutAnimated:withDuration:
- _layoutPopupAlertWithOrientation:animated:
- _appSuspended:
- popupAlertAnimated:atOffset:
- _setAlertSheetStyleFromButtonBar:
- _presentSheetStartingFromYCoordinate:
- _presentSheetFromView:above:
- _adjustLabelFontSizes
- _dimView
- _alertSheetAnimationDidStop:finished:
- _setupTitleStyle
- _titleHorizontalInset
- _buttonHeight
- _titleVerticalTopInset
- _titleVerticalBottomInset
- _bottomVerticalInset
- _truncateViewHeight:toFitInFrame:withMinimumHeight:
- presentSheetFromAboveView:
- presentSheetFromBehindView:
- _prepareToBeReplaced
- groupsTextFields
- setGroupsTextFields:
- _createTitleLabelIfNeeded
- setBodyText:
- setTaglineText:
- bodyText
- titleMaxLineCount
- setBodyTextMaxLineCount:
- bodyMaxLineCount
- _setTextFieldsHidden:
- setDestructiveButton:
- destructiveButton
- addButtonWithTitle:label:
- _addButtonWithTitle:
- buttonCount
- _isSBAlert
- setTableShouldShowMinimumContent:
- tableShouldShowMinimumContent
- _manualKeyboardIsVisible
- setShowsOverSpringBoardAlerts:
- showsOverSpringBoardAlerts
- _repopupNoAnimation
- _dimsBackground
- isBodyTextTruncated
- presentSheetInView:
- presentSheetToAboveView:
- setDimView:
- _slideSheetOut:
- backgroundSize
- alertSheetStyle
- setDimsBackground:
- dimsBackground
- setSuspendTag:
- suspendTag
- setBlocksInteraction:
- blocksInteraction
- runsModal
- titleRect
- numberOfLinesInTitle
- presentSheetFromButtonBar:
- _prepareForDisplay
- replaceAlert:
- _firstOtherButton
- _addButtonWithTitle:label:buttonClass:
- addButtonWithTitle:buttonClass:
- buttonAtIndex:
- _buttonAtIndex:
- _alertSheetTextFieldDidStartEditing:
- _addTextFieldWithValue:label:
- _textFieldAtIndex:
- _showKeyboard:animated:
- _performPopoutAnimationAnimated:coveredBySpringBoardAlert:
- _setAccessoryViewController:
- _keyboardHiddingAnimationDidStop:finished:
- _alertSheetTextFieldDidChange:
- _updateFrameForDisplay
- _setupKBWatcher
- _jiggleStage1AnimationDidStop:finished:
- _performPopup:animationType:revealedBySpringBoardAlert:
- _performPopup:animationType:
- _jiggleStage2AnimationDidStop:finished:
- _jiggleStage3AnimationDidStop:finished:
- _jiggleStage4AnimationDidStop:finished:
- _jiggleStage5AnimationDidStop:finished:
- _jiggleStage6AnimationDidStop:finished:
- _cleanupKBWatcher
- _modalItemForNeueCompatibility
- popupAlertAnimated:animationType:atOffset:
- popupAlertAnimated:animationType:
- _representedModalItem
- _showByReplacingAlert:animated:
- _updateButtonTitles
- setKeyboardShowsOnPopup:
- _updateKeyboardStateForPreviousResponder:
- _setDestructiveButton:
- _destructiveButton
- _showManualKBIfNecessary
- _blurMaskImageForBounds:
- bodyTextLabel
- taglineTextLabel
- _alertOrientation
- willPresentModalItem:
- didPresentModalItem:
- modalItem:shouldDismissForButtonAtIndex:
- modalItem:tappedButtonAtIndex:
- modalItem:willDismissWithButtonIndex:
- modalItem:didDismissWithButtonIndex:
- setForceHorizontalButtonsLayout:
- forceHorizontalButtonsLayout
- _nukeOldTextFields
- _representedModalItemView
- _showByReplacingPreviousAlertAnimated:
- alertView:didDismissWithButtonIndex:
- setComplete:
- complete
- initWithFrame:
- dealloc
- setDelegate:
- setTitle:
- delegate
- cancelButtonIndex
- dismissWithClickedButtonIndex:animated:
- addButtonWithTitle:
- setCancelButtonIndex:
- _useUndoStyle:
- show
- title
- message
- defaultButtonIndex
- textFieldAtIndex:
- _keyboardWillShow:
- _keyboardWillHide:
- setMessage:
- isVisible
- numberOfButtons
- setDefaultButtonIndex:
- setAlertViewStyle:
- _keyboardDidHide:
- buttonTitleAtIndex:
- initWithTitle:message:delegate:defaultButton:cancelButton:otherButtons:
- _setFirstOtherButtonIndex:
- firstOtherButtonIndex
- alertViewStyle
- _addTextEntryFieldsWithStyle:
- showWithAnimationType:
- initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:
- _shouldUseUndoStyle
- _useLegacyUI:
- _willRotateKeyboard
@end
