@interface UITextField : UIControl
{
	id _textStorage;
	long long _borderStyle;
	double _minimumFontSize;
	id _delegate;
	id _background;
	id _disabledBackground;
	long long _clearButtonMode;
	id _leftView;
	long long _leftViewMode;
	id _rightView;
	long long _rightViewMode;
	id _traits;
	id _nonAtomTraits;
	double _fullFontSize;
	struct _padding;
	struct _selectionRangeWhenNotEditing;
	int _scrollXOffset;
	int _scrollYOffset;
	float _progress;
	id _clearButton;
	struct _clearButtonOffset;
	struct _leftViewOffset;
	struct _rightViewOffset;
	id _backgroundView;
	id _disabledBackgroundView;
	id _systemBackgroundView;
	id _displayLabel;
	id _placeholderLabel;
	id _suffixLabel;
	id _prefixLabel;
	id _iconView;
	id _label;
	double _labelOffset;
	id _interactionAssistant;
	id _inputView;
	id _inputAccessoryView;
	id _atomBackgroundView;
	struct _textFieldFlags;
	BOOL _deferringBecomeFirstResponder;
	BOOL _avoidBecomeFirstResponder;
	BOOL _setSelectionRangeAfterFieldEditorIsAttached;
	BOOL _originFromBaselineLayoutIsInvalid;
	id _baselineLayoutConstraint;
	id _baselineLayoutLabel;
	id _defaultTextAttributes;
}

+ encodeRestorableStateWithCoder:
+ decodeRestorableStateWithCoder:
+ _scriptingInfo
+ _isPasscodeStyle
+ _passcodeStyleAlpha
+ _updateForPasscodeAppearance
+ _setPasscodeStyleAlpha:
+ isAccessibilityElementByDefault
+ isElementAccessibilityExposedToInterfaceBuilder
+ configureFromScriptTextField:
+ isReallyFirstResponder
+ initWithFrame:
+ dealloc
+ drawRect:
+ setBackgroundColor:
+ initWithCoder:
+ backgroundColor
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ setDelegate:
+ hitTest:withEvent:
+ _intrinsicSizeWithinSize:
+ respondsToSelector:
+ setFrame:
+ layoutSubviews
+ setBounds:
+ sizeThatFits:
+ delegate
+ _backgroundView
+ canPerformAction:withSender:
+ _physicalButtonsBegan:withEvent:
+ undoManager
+ resignFirstResponder
+ methodSignatureForSelector:
+ touchesCancelled:withEvent:
+ increaseSize:
+ decreaseSize:
+ becomeFirstResponder
+ _physicalButtonsEnded:withEvent:
+ isEditable
+ setShadowColor:
+ setShadowOffset:
+ touchesEnded:withEvent:
+ setCenter:
+ _windowBecameKey
+ _encodeBackgroundColorWithCoder:
+ _canDrawContent
+ canBecomeFirstResponder
+ tintColorDidChange
+ _needsOriginRecheckForConstraintsLayout
+ setEnabled:
+ text
+ setProgress:
+ setFont:
+ font
+ shadowOffset
+ setAttributedText:
+ shadowColor
+ setContentVerticalAlignment:
+ setTextColor:
+ setText:
+ attributedText
+ _updateLabel
+ setAdjustsFontSizeToFitWidth:
+ adjustsFontSizeToFitWidth
+ setTextAlignment:
+ isEditing
+ textLabel
+ _fieldEditor
+ _shouldObscureInput
+ _originForTextFieldLabel:
+ interactionAssistant
+ selectionView
+ keyboardInput:shouldInsertText:isMarkedText:
+ keyboardInput:shouldReplaceTextInRange:replacementText:
+ keyboardInputShouldDelete:
+ keyboardInputChanged:
+ keyboardInputChangedSelection:
+ fieldEditorDidChange:
+ fieldEditor:willChangeSelectionFromCharacterRange:toCharacterRange:
+ fieldEditor:shouldInsertText:replacingRange:
+ _sanitizeText:
+ selectAllFromFieldEditor:
+ textInputTraits
+ textColor
+ _selectionClipRect
+ cancelAutoscroll
+ editingRectForBounds:
+ textInputView
+ willDetachFieldEditor:
+ setTypingAttributes:
+ setDefaultAttributes:
+ takeTraitsFrom:
+ editRect
+ willAttachFieldEditor:
+ attachFieldEditor:
+ textAlignment
+ typingAttributes
+ beginningOfDocument
+ endOfDocument
+ textRangeFromPosition:toPosition:
+ textInRange:
+ inputDelegate
+ caretRectForPosition:
+ _scrollRangeToVisible:animated:
+ drawsAsAtom
+ atomStyle
+ hasText
+ clearText
+ insertText:
+ deleteBackward
+ replaceRange:withText:
+ replaceRangeWithTextWithoutClosingTyping:replacementText:
+ selectedTextRange
+ setSelectedTextRange:
+ markedTextRange
+ markedTextStyle
+ setMarkedTextStyle:
+ setMarkedText:selectedRange:
+ unmarkText
+ positionFromPosition:offset:
+ positionFromPosition:inDirection:offset:
+ comparePosition:toPosition:
+ offsetFromPosition:toPosition:
+ positionWithinRange:farthestInDirection:
+ characterRangeByExtendingPosition:inDirection:
+ setInputDelegate:
+ tokenizer
+ baseWritingDirectionForPosition:inDirection:
+ setBaseWritingDirection:forRange:
+ firstRectForRange:
+ selectionRectsForRange:
+ closestPositionToPoint:
+ closestPositionToPoint:withinRange:
+ characterRangeAtPoint:
+ insertDictationResult:withCorrectionIdentifier:
+ insertDictationResultPlaceholder
+ frameForDictationResultPlaceholder:
+ removeDictationResultPlaceholder:willInsertResult:
+ rangeWithTextAlternatives:atPosition:
+ metadataDictionariesForDictationResults
+ beginSelectionChange
+ endSelectionChange
+ setSecureTextEntry:
+ forwardingTargetForSelector:
+ textStylingAtPosition:inDirection:
+ setKeyboardAppearance:
+ startAutoscroll:
+ selectAll
+ selectionRange
+ characterOffsetAtPoint:
+ hasMarkedText
+ _inputController
+ setPlaceholder:
+ updateConstraints
+ setAnimating:
+ _becomeFirstResponder
+ _resignFirstResponder
+ canResignFirstResponder
+ inputView
+ inputAccessoryView
+ _requiresKeyboardResetOnReload
+ setAttributes:range:
+ viewForBaselineLayout
+ setLabel:
+ setAllowsEditingTextAttributes:
+ allowsEditingTextAttributes
+ webView
+ _proxyTextInput
+ setInputView:
+ setInputAccessoryView:
+ selectAll:
+ setClearsOnInsertion:
+ layoutTilesNow
+ makeTextWritingDirectionRightToLeft:
+ makeTextWritingDirectionLeftToRight:
+ replace:
+ cut:
+ copy:
+ paste:
+ _define:
+ _addShortcut:
+ toggleBoldface:
+ toggleItalics:
+ toggleUnderline:
+ _showTextStyleOptions:
+ hasSelection
+ constrainedPoint:
+ clearsOnInsertion
+ disableClearsOnInsertion
+ selectedText
+ select:
+ _promptForReplace:
+ supportedPasteboardTypesForCurrentSelection
+ documentFragmentForPasteboardItemAtIndex:
+ automaticallySelectedOverlay
+ _isDisplayingReferenceLibraryViewController
+ drawTextInRect:
+ setMinimumFontSize:
+ minimumFontSize
+ setShadowBlur:
+ shadowBlur
+ _attributedText
+ textRectForBounds:
+ setIcon:
+ setBorderStyle:
+ iconRect
+ rightViewRectForBounds:
+ _placeholderColor
+ _availableTextRectExcludingButtonsForBounds:
+ setPaddingTop:paddingLeft:
+ _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged
+ setLeftView:
+ setRightView:
+ leftView
+ rightView
+ setContinuousSpellCheckingEnabled:
+ _startDictation
+ _stopDictation
+ _dictationLanguage
+ _insertAttributedTextWithoutClosingTyping:
+ _clearButtonClicked:
+ setUndoEnabled:
+ setTextCentersVertically:
+ setTextCentersHorizontally:
+ background
+ setBackground:
+ placeholder
+ _leftViewOffset
+ _setLeftViewOffset:
+ clearButtonOffset
+ setClearButtonOffset:
+ paddingTop
+ setPaddingTop:
+ setRightViewMode:
+ _setRightViewOffset:
+ _partsShouldBeMini
+ leftViewRectForBounds:
+ _systemBackgroundView
+ __resumeBecomeFirstResponder
+ _activateSelectionView
+ _placeholderLabel
+ setDisabledBackground:
+ setLeftViewMode:
+ setClearButtonMode:
+ searchText
+ _setEnabled:animated:
+ setPaddingLeft:
+ _clearButton
+ _updateButtons
+ _clearButtonImageForState:
+ paddingLeft
+ _showsClearButtonWhenNonEmpty:
+ _fieldEditorAttached
+ placeholderRectForBounds:
+ _clearButtonSize
+ clearButtonRectForBounds:
+ _availableTextRectForBounds:forEditing:
+ _hasSuffixField
+ _suffixFrame
+ _showsLeftView
+ _currentTextAlignment
+ paddingRight
+ _updateBackgroundViewsAnimated:
+ _clearBackgroundViews
+ _suffixLabelTextAlignment
+ _placeholderLabelClass
+ _systemBackgroundViewClass
+ clearingBehavior
+ setDrawsAsAtom:
+ setClearingBehavior:
+ _useGesturesForEditableContent
+ _textInputViewForAddingGestureRecognizers
+ _setSuffix:withColor:
+ closestCaretRectInMarkedTextRangeForPoint:
+ offsetInMarkedTextForSelection:
+ setPaddingBottom:
+ setPaddingRight:
+ _text
+ paddingBottom
+ setClearsOnBeginEditing:
+ _textSize
+ _selectionMayChange:
+ _drawTextInRect:forLabel:
+ setAtomStyle:
+ _setBaselineLayoutConstraint:
+ createTextLabelWithTextColor:
+ _frameForLabel:inTextRect:
+ createPlaceholderLabelWithFont:andTextAlignment:
+ _updateTextLabel
+ clearsOnBeginEditing
+ _stopObservingFieldEditorScroll
+ _setNeedsStyleRecalc
+ _baselineLayoutConstraintConstant
+ _sizeChanged:
+ _textSizeUsingFullFontSize:
+ _createBaselineLayoutLabelIfNecessary
+ clearButtonMode
+ clearButton
+ _shouldEndEditing
+ scrollTextFieldToVisible
+ _initialScrollDidFinish:
+ setSelectionRange:
+ customOverlayContainer
+ _syncTypingAttributesWithDefaultAttribute:
+ actualMinimumFontSize
+ _copyFont:newSize:maxSize:
+ _updateAtomTextColor
+ clearButtonRect
+ _showsClearButton:
+ _showsRightView
+ setFont:fullFontSize:
+ _heightShouldBeMini
+ borderStyle
+ _hasContent
+ _showsAtomBackground
+ _atomBackgroundViewFrame
+ _showsClearButtonWhenEmpty
+ leftViewMode
+ rightViewMode
+ _baselineLeftViewRectForBounds:
+ _marginTop
+ _setUpBaselineLayoutConstraints
+ _isShowingPlaceholder
+ _updatePlaceholderPosition
+ _updateAtomBackground
+ _updateAutosizeStyleIfNeeded
+ clearsPlaceholderOnBeginEditing
+ _prefixFrame
+ borderRectForBounds:
+ finishedSettingTextOrAttributedText
+ _setAttributedText:onFieldEditorAndSetCaretSelectionAfterText:
+ _invalidateBaselineLayoutConstraints
+ createPlaceholderIfNecessary
+ finishedSettingPlaceholder
+ drawPlaceholderInRect:
+ drawSuffixInRect:
+ drawPrefixInRect:
+ _applicationResuming:
+ _endedEditing
+ drawBorder:
+ _implementsCustomDrawing
+ isUndoEnabled
+ adjustedCaretRectForCaretRect:
+ _isShowingPrefix
+ actualFont
+ _scrollOffset
+ _rightViewOffset
+ _setSystemBackgroundViewActive:
+ _placeholderView
+ _textLabelView
+ defaultTextAttributes
+ setAttributedPlaceholder:
+ attributedPlaceholder
+ _updateSuffix:
+ _setPrefix:
+ setClearsPlaceholderOnBeginEditing:
+ fieldEditorDidChangeSelection:
+ _dictationInterpretations
+ setAutoresizesTextToFit:
+ setTextAutorresizesToFit:
+ setClearButtonStyle:
+ textRect
+ setInactiveHasDimAppearance:
+ _clearSelectionUI
+ _resetSelectionUI
+ setBecomesFirstResponderOnClearButtonTap:
+ setLabelOffset:
+ selectedAttributedText
+ _setBackgroundStrokeColor:
+ _setBackgroundFillColor:
+ _setBackgroundStrokeWidth:
+ _inPopover
+ _baselineLayoutConstraint
+ _baselineLayoutLabel
+ _setBaselineLayoutLabel:
+ disabledBackground
+ setDefaultTextAttributes:
- encodeRestorableStateWithCoder:
- decodeRestorableStateWithCoder:
- _scriptingInfo
- _isPasscodeStyle
- _passcodeStyleAlpha
- _updateForPasscodeAppearance
- _setPasscodeStyleAlpha:
- isAccessibilityElementByDefault
- isElementAccessibilityExposedToInterfaceBuilder
- configureFromScriptTextField:
- isReallyFirstResponder
- initWithFrame:
- dealloc
- drawRect:
- setBackgroundColor:
- initWithCoder:
- backgroundColor
- _populateArchivedSubviews:
- encodeWithCoder:
- setDelegate:
- hitTest:withEvent:
- _intrinsicSizeWithinSize:
- respondsToSelector:
- setFrame:
- layoutSubviews
- setBounds:
- sizeThatFits:
- delegate
- _backgroundView
- canPerformAction:withSender:
- _physicalButtonsBegan:withEvent:
- undoManager
- resignFirstResponder
- methodSignatureForSelector:
- touchesCancelled:withEvent:
- increaseSize:
- decreaseSize:
- becomeFirstResponder
- _physicalButtonsEnded:withEvent:
- isEditable
- setShadowColor:
- setShadowOffset:
- touchesEnded:withEvent:
- setCenter:
- _windowBecameKey
- _encodeBackgroundColorWithCoder:
- _canDrawContent
- canBecomeFirstResponder
- tintColorDidChange
- _needsOriginRecheckForConstraintsLayout
- setEnabled:
- text
- setProgress:
- setFont:
- font
- shadowOffset
- setAttributedText:
- shadowColor
- setContentVerticalAlignment:
- setTextColor:
- setText:
- attributedText
- _updateLabel
- setAdjustsFontSizeToFitWidth:
- adjustsFontSizeToFitWidth
- setTextAlignment:
- isEditing
- textLabel
- _fieldEditor
- _shouldObscureInput
- _originForTextFieldLabel:
- interactionAssistant
- selectionView
- keyboardInput:shouldInsertText:isMarkedText:
- keyboardInput:shouldReplaceTextInRange:replacementText:
- keyboardInputShouldDelete:
- keyboardInputChanged:
- keyboardInputChangedSelection:
- fieldEditorDidChange:
- fieldEditor:willChangeSelectionFromCharacterRange:toCharacterRange:
- fieldEditor:shouldInsertText:replacingRange:
- _sanitizeText:
- selectAllFromFieldEditor:
- textInputTraits
- textColor
- _selectionClipRect
- cancelAutoscroll
- editingRectForBounds:
- textInputView
- willDetachFieldEditor:
- setTypingAttributes:
- setDefaultAttributes:
- takeTraitsFrom:
- editRect
- willAttachFieldEditor:
- attachFieldEditor:
- textAlignment
- typingAttributes
- beginningOfDocument
- endOfDocument
- textRangeFromPosition:toPosition:
- textInRange:
- inputDelegate
- caretRectForPosition:
- _scrollRangeToVisible:animated:
- drawsAsAtom
- atomStyle
- hasText
- clearText
- insertText:
- deleteBackward
- replaceRange:withText:
- replaceRangeWithTextWithoutClosingTyping:replacementText:
- selectedTextRange
- setSelectedTextRange:
- markedTextRange
- markedTextStyle
- setMarkedTextStyle:
- setMarkedText:selectedRange:
- unmarkText
- positionFromPosition:offset:
- positionFromPosition:inDirection:offset:
- comparePosition:toPosition:
- offsetFromPosition:toPosition:
- positionWithinRange:farthestInDirection:
- characterRangeByExtendingPosition:inDirection:
- setInputDelegate:
- tokenizer
- baseWritingDirectionForPosition:inDirection:
- setBaseWritingDirection:forRange:
- firstRectForRange:
- selectionRectsForRange:
- closestPositionToPoint:
- closestPositionToPoint:withinRange:
- characterRangeAtPoint:
- insertDictationResult:withCorrectionIdentifier:
- insertDictationResultPlaceholder
- frameForDictationResultPlaceholder:
- removeDictationResultPlaceholder:willInsertResult:
- rangeWithTextAlternatives:atPosition:
- metadataDictionariesForDictationResults
- beginSelectionChange
- endSelectionChange
- setSecureTextEntry:
- forwardingTargetForSelector:
- textStylingAtPosition:inDirection:
- setKeyboardAppearance:
- startAutoscroll:
- selectAll
- selectionRange
- characterOffsetAtPoint:
- hasMarkedText
- _inputController
- setPlaceholder:
- updateConstraints
- setAnimating:
- _becomeFirstResponder
- _resignFirstResponder
- canResignFirstResponder
- inputView
- inputAccessoryView
- _requiresKeyboardResetOnReload
- setAttributes:range:
- viewForBaselineLayout
- setLabel:
- setAllowsEditingTextAttributes:
- allowsEditingTextAttributes
- webView
- _proxyTextInput
- setInputView:
- setInputAccessoryView:
- selectAll:
- setClearsOnInsertion:
- layoutTilesNow
- makeTextWritingDirectionRightToLeft:
- makeTextWritingDirectionLeftToRight:
- replace:
- cut:
- copy:
- paste:
- _define:
- _addShortcut:
- toggleBoldface:
- toggleItalics:
- toggleUnderline:
- _showTextStyleOptions:
- hasSelection
- constrainedPoint:
- clearsOnInsertion
- disableClearsOnInsertion
- selectedText
- select:
- _promptForReplace:
- supportedPasteboardTypesForCurrentSelection
- documentFragmentForPasteboardItemAtIndex:
- automaticallySelectedOverlay
- _isDisplayingReferenceLibraryViewController
- drawTextInRect:
- setMinimumFontSize:
- minimumFontSize
- setShadowBlur:
- shadowBlur
- _attributedText
- textRectForBounds:
- setIcon:
- setBorderStyle:
- iconRect
- rightViewRectForBounds:
- _placeholderColor
- _availableTextRectExcludingButtonsForBounds:
- setPaddingTop:paddingLeft:
- _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged
- setLeftView:
- setRightView:
- leftView
- rightView
- setContinuousSpellCheckingEnabled:
- _startDictation
- _stopDictation
- _dictationLanguage
- _insertAttributedTextWithoutClosingTyping:
- _clearButtonClicked:
- setUndoEnabled:
- setTextCentersVertically:
- setTextCentersHorizontally:
- background
- setBackground:
- placeholder
- _leftViewOffset
- _setLeftViewOffset:
- clearButtonOffset
- setClearButtonOffset:
- paddingTop
- setPaddingTop:
- setRightViewMode:
- _setRightViewOffset:
- _partsShouldBeMini
- leftViewRectForBounds:
- _systemBackgroundView
- __resumeBecomeFirstResponder
- _activateSelectionView
- _placeholderLabel
- setDisabledBackground:
- setLeftViewMode:
- setClearButtonMode:
- searchText
- _setEnabled:animated:
- setPaddingLeft:
- _clearButton
- _updateButtons
- _clearButtonImageForState:
- paddingLeft
- _showsClearButtonWhenNonEmpty:
- _fieldEditorAttached
- placeholderRectForBounds:
- _clearButtonSize
- clearButtonRectForBounds:
- _availableTextRectForBounds:forEditing:
- _hasSuffixField
- _suffixFrame
- _showsLeftView
- _currentTextAlignment
- paddingRight
- _updateBackgroundViewsAnimated:
- _clearBackgroundViews
- _suffixLabelTextAlignment
- _placeholderLabelClass
- _systemBackgroundViewClass
- clearingBehavior
- setDrawsAsAtom:
- setClearingBehavior:
- _useGesturesForEditableContent
- _textInputViewForAddingGestureRecognizers
- _setSuffix:withColor:
- closestCaretRectInMarkedTextRangeForPoint:
- offsetInMarkedTextForSelection:
- setPaddingBottom:
- setPaddingRight:
- _text
- paddingBottom
- setClearsOnBeginEditing:
- _textSize
- _selectionMayChange:
- _drawTextInRect:forLabel:
- setAtomStyle:
- _setBaselineLayoutConstraint:
- createTextLabelWithTextColor:
- _frameForLabel:inTextRect:
- createPlaceholderLabelWithFont:andTextAlignment:
- _updateTextLabel
- clearsOnBeginEditing
- _stopObservingFieldEditorScroll
- _setNeedsStyleRecalc
- _baselineLayoutConstraintConstant
- _sizeChanged:
- _textSizeUsingFullFontSize:
- _createBaselineLayoutLabelIfNecessary
- clearButtonMode
- clearButton
- _shouldEndEditing
- scrollTextFieldToVisible
- _initialScrollDidFinish:
- setSelectionRange:
- customOverlayContainer
- _syncTypingAttributesWithDefaultAttribute:
- actualMinimumFontSize
- _copyFont:newSize:maxSize:
- _updateAtomTextColor
- clearButtonRect
- _showsClearButton:
- _showsRightView
- setFont:fullFontSize:
- _heightShouldBeMini
- borderStyle
- _hasContent
- _showsAtomBackground
- _atomBackgroundViewFrame
- _showsClearButtonWhenEmpty
- leftViewMode
- rightViewMode
- _baselineLeftViewRectForBounds:
- _marginTop
- _setUpBaselineLayoutConstraints
- _isShowingPlaceholder
- _updatePlaceholderPosition
- _updateAtomBackground
- _updateAutosizeStyleIfNeeded
- clearsPlaceholderOnBeginEditing
- _prefixFrame
- borderRectForBounds:
- finishedSettingTextOrAttributedText
- _setAttributedText:onFieldEditorAndSetCaretSelectionAfterText:
- _invalidateBaselineLayoutConstraints
- createPlaceholderIfNecessary
- finishedSettingPlaceholder
- drawPlaceholderInRect:
- drawSuffixInRect:
- drawPrefixInRect:
- _applicationResuming:
- _endedEditing
- drawBorder:
- _implementsCustomDrawing
- isUndoEnabled
- adjustedCaretRectForCaretRect:
- _isShowingPrefix
- actualFont
- _scrollOffset
- _rightViewOffset
- _setSystemBackgroundViewActive:
- _placeholderView
- _textLabelView
- defaultTextAttributes
- setAttributedPlaceholder:
- attributedPlaceholder
- _updateSuffix:
- _setPrefix:
- setClearsPlaceholderOnBeginEditing:
- fieldEditorDidChangeSelection:
- _dictationInterpretations
- setAutoresizesTextToFit:
- setTextAutorresizesToFit:
- setClearButtonStyle:
- textRect
- setInactiveHasDimAppearance:
- _clearSelectionUI
- _resetSelectionUI
- setBecomesFirstResponderOnClearButtonTap:
- setLabelOffset:
- selectedAttributedText
- _setBackgroundStrokeColor:
- _setBackgroundFillColor:
- _setBackgroundStrokeWidth:
- _inPopover
- _baselineLayoutConstraint
- _baselineLayoutLabel
- _setBaselineLayoutLabel:
- disabledBackground
- setDefaultTextAttributes:
@end
