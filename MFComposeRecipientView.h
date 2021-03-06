@interface MFComposeRecipientView : MFComposeHeaderView
{
	id _textField;
	id _textFieldConstraints;
	id _recipients;
	id _atoms;
	id _uncommentedAddresses;
	pointer _atomPresentationOptionsByRecipient;
	usigned long long _defaultAtomPresentationOptions;
	id _selectedAtom;
	id _placeholderRecipient;
	long long _dragSourceOriginalIndex;
	id _corecipientsIndicatorAtom;
	id _addButton;
	BOOL _editable;
	BOOL _picking;
	BOOL _focused;
	id _properties;
	long long _maxRecipients;
	BOOL _parentIsClosing;
	BOOL _deselectOnNextKeyboardInput;
	BOOL _clearSelectionUIAfterFirstResponder;
	id _delayTimer;
	double _inputDelay;
	id _tapGestureRecognizer;
	BOOL _needsReflow;
	BOOL _needsLayoutConstraintUpdate;
	id _baseFont;
	BOOL _didIgnoreFirstResponderResign;
	BOOL _allowsDragAndDrop;
	BOOL _separatorHidden;
	int _hideLastAtomComma;
}

+ setProperty:
+ addresses
+ deselectComposeRecipientAtom:
+ composeRecipientAtomShowPersonCard:
+ composeRecipientAtomSelectPrevious:
+ composeRecipientAtomSelectNext:
+ refreshPreferredContentSize
+ textFieldOffsetForNumberOfRowsToScroll:numberOfRowsAboveField:
+ didIgnoreFirstResponderResign
+ setInputDelay:
+ setAllowsDragAndDrop:
+ uncommentedAddresses
+ showCorecipientIndicator:withCorecipients:animated:
+ parentWillClose
+ parentDidClose
+ containsAddress:
+ finishEnteringRecipient
+ setFocused:
+ corecipientsIndicator
+ setDefaultAtomPresentationOptions:
+ _setNeedsReflow
+ viewForDragSource
+ dropItem:
+ dragCompletedForItem:success:
+ viewForDrop
+ dragUpdated:atPoint:
+ dragExited:
+ dragEntered:atPoint:
+ frameForDraggedItem:
+ viewForDraggedItem:atScale:
+ dragStartedWithItem:
+ dropRect
+ animatePlaceholderForDragFailure:
+ allowsDrag
+ dragInitiatedAtPoint:
+ baseFont
+ addButtonClicked:
+ setHideLastAtomComma:
+ _cancelDelayTimer
+ _removeAllRecipients
+ _addUncommentedAddress:
+ _removeAddressAtomPresentationOptionsForRecipient:
+ _removeUncommentedAddress:
+ _addRecord:identifier:
+ placeholderRecipient
+ clearAllAddressAtomPresentationOptions
+ allowsDragAndDrop
+ setPlaceholderRecipient:
+ _deselectAtom
+ _recipientIndexAtPoint:
+ hideLastAtomComma
+ _addressAtomPresentationOptionsForRecipient:
+ _updateLayoutConstraintsAndGetNumberOfRows:textFieldWillBeLastRow:
+ isSeparatorHidden
+ _topRowTextWidth
+ _shouldShowCorecipientsIndicatorAtom
+ setDidIgnoreFirstResponderResign:
+ _delayTimerFired:
+ _deleteSelectedAtom
+ supportedDropTypes:
+ didTapShowCorecipientsForIndicatorAtom:recipients:
+ mf_textFieldShowingSearchResults:
+ mf_selectNextSearchResultForTextField:
+ mf_selectPreviousSearchResultForTextField:
+ mf_presentSearchResultsForTextField:
+ mf_chooseSelectedSearchResultForTextField:
+ mf_dismissSearchResults:
+ mf_recipientTextField:didAddRecipientAddress:
+ _setNeedsLayoutConstraintUpdate
+ maxRecipients
+ inputDelay
+ focused
+ defaultAtomPresentationOptions
+ initWithFrame:
+ dealloc
+ gestureRecognizerShouldBegin:
+ becomeFirstResponder
+ didMoveToSuperview
+ willMoveToSuperview:
+ text
+ keyboardInput:shouldInsertText:isMarkedText:
+ keyboardInputShouldDelete:
+ keyboardInputChangedSelection:
+ clearText
+ textFieldShouldReturn:
+ setLabel:
+ setEditable:
+ hasContent
+ textChanged:
+ textFieldDidResignFirstResponder:
+ editable
+ textField
+ textFieldDidBecomeFirstResponder:
+ setProperties:
+ _tapGestureRecognized:
+ setSeparatorHidden:
+ numberOfRowsOfTextInField
+ offsetForRowWithTextField
+ selectComposeRecipientAtom:
+ setAddressAtomPresentationOptions:forRecipient:
+ _reflowAnimated:
+ addRecipient:index:animate:
+ setMaxRecipients:
+ _addable
+ recipients
+ setAddresses:
+ addButton
+ reflow
+ removeRecipient:
+ addRecipient:
+ addRecord:property:identifier:
+ setBaseFont:
+ addAddress:
- setProperty:
- addresses
- deselectComposeRecipientAtom:
- composeRecipientAtomShowPersonCard:
- composeRecipientAtomSelectPrevious:
- composeRecipientAtomSelectNext:
- refreshPreferredContentSize
- textFieldOffsetForNumberOfRowsToScroll:numberOfRowsAboveField:
- didIgnoreFirstResponderResign
- setInputDelay:
- setAllowsDragAndDrop:
- uncommentedAddresses
- showCorecipientIndicator:withCorecipients:animated:
- parentWillClose
- parentDidClose
- containsAddress:
- finishEnteringRecipient
- setFocused:
- corecipientsIndicator
- setDefaultAtomPresentationOptions:
- _setNeedsReflow
- viewForDragSource
- dropItem:
- dragCompletedForItem:success:
- viewForDrop
- dragUpdated:atPoint:
- dragExited:
- dragEntered:atPoint:
- frameForDraggedItem:
- viewForDraggedItem:atScale:
- dragStartedWithItem:
- dropRect
- animatePlaceholderForDragFailure:
- allowsDrag
- dragInitiatedAtPoint:
- baseFont
- addButtonClicked:
- setHideLastAtomComma:
- _cancelDelayTimer
- _removeAllRecipients
- _addUncommentedAddress:
- _removeAddressAtomPresentationOptionsForRecipient:
- _removeUncommentedAddress:
- _addRecord:identifier:
- placeholderRecipient
- clearAllAddressAtomPresentationOptions
- allowsDragAndDrop
- setPlaceholderRecipient:
- _deselectAtom
- _recipientIndexAtPoint:
- hideLastAtomComma
- _addressAtomPresentationOptionsForRecipient:
- _updateLayoutConstraintsAndGetNumberOfRows:textFieldWillBeLastRow:
- isSeparatorHidden
- _topRowTextWidth
- _shouldShowCorecipientsIndicatorAtom
- setDidIgnoreFirstResponderResign:
- _delayTimerFired:
- _deleteSelectedAtom
- supportedDropTypes:
- didTapShowCorecipientsForIndicatorAtom:recipients:
- mf_textFieldShowingSearchResults:
- mf_selectNextSearchResultForTextField:
- mf_selectPreviousSearchResultForTextField:
- mf_presentSearchResultsForTextField:
- mf_chooseSelectedSearchResultForTextField:
- mf_dismissSearchResults:
- mf_recipientTextField:didAddRecipientAddress:
- _setNeedsLayoutConstraintUpdate
- maxRecipients
- inputDelay
- focused
- defaultAtomPresentationOptions
- initWithFrame:
- dealloc
- gestureRecognizerShouldBegin:
- becomeFirstResponder
- didMoveToSuperview
- willMoveToSuperview:
- text
- keyboardInput:shouldInsertText:isMarkedText:
- keyboardInputShouldDelete:
- keyboardInputChangedSelection:
- clearText
- textFieldShouldReturn:
- setLabel:
- setEditable:
- hasContent
- textChanged:
- textFieldDidResignFirstResponder:
- editable
- textField
- textFieldDidBecomeFirstResponder:
- setProperties:
- _tapGestureRecognized:
- setSeparatorHidden:
- numberOfRowsOfTextInField
- offsetForRowWithTextField
- selectComposeRecipientAtom:
- setAddressAtomPresentationOptions:forRecipient:
- _reflowAnimated:
- addRecipient:index:animate:
- setMaxRecipients:
- _addable
- recipients
- setAddresses:
- addButton
- reflow
- removeRecipient:
- addRecipient:
- addRecord:property:identifier:
- setBaseFont:
- addAddress:
@end
