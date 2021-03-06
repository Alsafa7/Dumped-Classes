@interface UIFieldEditor : UIScrollView
{
	id _inputController;
	id _proxiedView;
	id _autoscroll;
	id _textContainer;
	id _layoutManager;
	id _textStorage;
	struct _feFlags;
	struct _padding;
	id _contentView;
	struct _unobscuredSecureRange;
	id _obscureLastCharacterTimer;
	struct _textContainerOrigin;
	double _contentWidth;
	id _passcodeStyleCutoutView;
	struct _autoscrollContentOffset;
}

+ _deleteBackwardAndNotify:
+ initWithFrame:
+ dealloc
+ respondsToSelector:
+ setFrame:
+ layoutSubviews
+ setStyle:
+ undoManager
+ methodSignatureForSelector:
+ style
+ proxiedView
+ _responderForBecomeFirstResponder
+ isFirstResponder
+ text
+ autoscrollContentOffset
+ setAutoscrollContentOffset:
+ contentFrameForView:
+ setFont:
+ font
+ setAttributedText:
+ setTextColor:
+ setText:
+ attributedText
+ isEditing
+ drawTextInRect:forContentView:
+ setNotificationsDisabled:
+ becomeFieldEditorForView:
+ _textStorageDidProcessEditing:
+ _shouldObscureInput
+ _isPasscodeStyle
+ interactionAssistant
+ keyboardInput:shouldInsertText:isMarkedText:
+ keyboardInput:shouldReplaceTextInRange:replacementText:
+ keyboardInputShouldDelete:
+ keyboardInputChanged:
+ keyboardInputChangedSelection:
+ scrollSelectionToVisible:
+ textInputTraits
+ textColor
+ _selectionClipRect
+ scrollXOffset
+ cancelAutoscroll
+ scrollYOffset
+ setScrollXOffset:scrollYOffset:adjustForPurpleCaret:
+ textInputView
+ _cancelObscureLastCharacterTimer
+ setTypingAttributes:
+ _textInputTraits
+ setSelection:
+ _obscureLastCharacter
+ typingAttributes
+ _setValue:forTextAttribute:
+ _textContainer
+ setAttributedText:andSetCaretSelectionAfterText:
+ beginningOfDocument
+ endOfDocument
+ textRangeFromPosition:toPosition:
+ textInRange:
+ setText:andSetCaretSelectionAfterText:
+ inputDelegate
+ addTextAlternativesDisplayStyleToRange:
+ caretRectForPosition:
+ _scrollRangeToVisible:animated:
+ drawsAsAtom
+ atomStyle
+ hasText
+ clearText
+ _layoutManager
+ textContainerOrigin
+ _unobscuredSecureRange
+ _clearOnEditIfNeeded
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
+ _textStorage
+ _textContainerOrigin
+ markedRange
+ setSecureTextEntry:
+ forwardingTargetForSelector:
+ _hasDictationPlaceholder
+ textInput:shouldChangeCharactersInRange:replacementText:
+ textInput:prepareAttributedTextForInsertion:
+ textInputDidChange:
+ textInput:willChangeSelectionFromCharacterRange:toCharacterRange:
+ textInputDidChangeSelection:
+ layoutManager:shouldGenerateGlyphs:properties:characterIndexes:font:forGlyphRange:
+ layoutManager:shouldUseAction:forControlCharacterAtIndex:
+ layoutManager:boundingBoxForControlGlyphAtIndex:forTextContainer:proposedLineFragment:glyphPosition:characterIndex:
+ layoutManager:didCompleteLayoutForTextContainer:atEnd:
+ visibleRect
+ textContainerInset
+ setConstrainedFrameSize:
+ invalidateTextContainerOrigin
+ minSize
+ isHorizontallyResizable
+ setNeedsDisplayInRect:avoidAdditionalLayout:
+ setTextContainer:
+ layoutOrientation
+ setLayoutOrientation:
+ linkTextAttributes
+ updateInsertionPointStateAndRestartTimer:
+ startAutoscroll:
+ setPadding:
+ selectAll
+ _textSelectingContainer
+ textColorForCaretSelection
+ updateAutoscroll:
+ setScrollXOffset:scrollYOffset:
+ selectionRange
+ revealSelection
+ characterOffsetAtPoint:
+ hasMarkedText
+ notificationsDisabled
+ _inputController
+ padding
- _deleteBackwardAndNotify:
- initWithFrame:
- dealloc
- respondsToSelector:
- setFrame:
- layoutSubviews
- setStyle:
- undoManager
- methodSignatureForSelector:
- style
- proxiedView
- _responderForBecomeFirstResponder
- isFirstResponder
- text
- autoscrollContentOffset
- setAutoscrollContentOffset:
- contentFrameForView:
- setFont:
- font
- setAttributedText:
- setTextColor:
- setText:
- attributedText
- isEditing
- drawTextInRect:forContentView:
- setNotificationsDisabled:
- becomeFieldEditorForView:
- _textStorageDidProcessEditing:
- _shouldObscureInput
- _isPasscodeStyle
- interactionAssistant
- keyboardInput:shouldInsertText:isMarkedText:
- keyboardInput:shouldReplaceTextInRange:replacementText:
- keyboardInputShouldDelete:
- keyboardInputChanged:
- keyboardInputChangedSelection:
- scrollSelectionToVisible:
- textInputTraits
- textColor
- _selectionClipRect
- scrollXOffset
- cancelAutoscroll
- scrollYOffset
- setScrollXOffset:scrollYOffset:adjustForPurpleCaret:
- textInputView
- _cancelObscureLastCharacterTimer
- setTypingAttributes:
- _textInputTraits
- setSelection:
- _obscureLastCharacter
- typingAttributes
- _setValue:forTextAttribute:
- _textContainer
- setAttributedText:andSetCaretSelectionAfterText:
- beginningOfDocument
- endOfDocument
- textRangeFromPosition:toPosition:
- textInRange:
- setText:andSetCaretSelectionAfterText:
- inputDelegate
- addTextAlternativesDisplayStyleToRange:
- caretRectForPosition:
- _scrollRangeToVisible:animated:
- drawsAsAtom
- atomStyle
- hasText
- clearText
- _layoutManager
- textContainerOrigin
- _unobscuredSecureRange
- _clearOnEditIfNeeded
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
- _textStorage
- _textContainerOrigin
- markedRange
- setSecureTextEntry:
- forwardingTargetForSelector:
- _hasDictationPlaceholder
- textInput:shouldChangeCharactersInRange:replacementText:
- textInput:prepareAttributedTextForInsertion:
- textInputDidChange:
- textInput:willChangeSelectionFromCharacterRange:toCharacterRange:
- textInputDidChangeSelection:
- layoutManager:shouldGenerateGlyphs:properties:characterIndexes:font:forGlyphRange:
- layoutManager:shouldUseAction:forControlCharacterAtIndex:
- layoutManager:boundingBoxForControlGlyphAtIndex:forTextContainer:proposedLineFragment:glyphPosition:characterIndex:
- layoutManager:didCompleteLayoutForTextContainer:atEnd:
- visibleRect
- textContainerInset
- setConstrainedFrameSize:
- invalidateTextContainerOrigin
- minSize
- isHorizontallyResizable
- setNeedsDisplayInRect:avoidAdditionalLayout:
- setTextContainer:
- layoutOrientation
- setLayoutOrientation:
- linkTextAttributes
- updateInsertionPointStateAndRestartTimer:
- startAutoscroll:
- setPadding:
- selectAll
- _textSelectingContainer
- textColorForCaretSelection
- updateAutoscroll:
- setScrollXOffset:scrollYOffset:
- selectionRange
- revealSelection
- characterOffsetAtPoint:
- hasMarkedText
- notificationsDisabled
- _inputController
- padding
@end
