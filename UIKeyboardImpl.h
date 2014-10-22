@interface UIKeyboardImpl : UIView
{
	id m_delegate;
	id m_taskQueue;
	id m_externalTask;
	id m_keyboardState;
	id m_inputManagerState;
	id m_languageIndicator;
	id m_previousInputString;
	id m_inputManager;
	id m_autocorrectionController;
	id m_autocorrectPrompt;
	id m_autocorrectPromptAction;
	id m_candidateResultSet;
	id m_candidateList;
	id m_markedTextOverlay;
	id m_geometryDelegate;
	id m_recorder;
	id m_layout;
	id m_keyedLayouts;
	id m_inputModeLastChosen;
	id m_autoDeleteTask;
	unsigned int m_autoDeleteCount;
	double m_autoDeleteLastDelete;
	double m_autoDeleteInterval;
	unsigned int m_autoDeleteShiftCharacter;
	id m_longPressAction;
	long long m_orientation;
	long long m_originalOrientation;
	struct m_inputPoint;
	int m_changeCount;
	double m_changeTime;
	id m_changedDelegate;
	pointer m_observer;
	usigned long long m_textInputChangingCount;
	BOOL m_textInputChangingText;
	BOOL m_textInputChangingDirection;
	BOOL m_textInputChangesIgnored;
	BOOL m_insideKeyInputDelegateCall;
	id m_defaultTraits;
	id m_traits;
	int m_returnKeyState;
	long long m_currentDirection;
	BOOL m_autoDeleteOK;
	BOOL m_autocapitalizationPreference;
	BOOL m_autocorrectPromptTimerFired;
	BOOL m_autocorrectionPreference;
	BOOL m_autoshift;
	BOOL m_caretShowingNow;
	BOOL m_changeNotificationDisabled;
	BOOL m_correctionLearningAllowed;
	BOOL m_delegateIsSMSTextView;
	BOOL m_delegateRequiresKeyEvents;
	BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
	BOOL m_doubleSpacePeriodPreference;
	BOOL m_hardwareKeyboardAttached;
	BOOL m_inDealloc;
	BOOL m_initializationDone;
	BOOL m_performanceLoggingEnabled;
	BOOL m_selecting;
	BOOL m_shift;
	BOOL m_shiftLocked;
	BOOL m_shiftLockedEnabled;
	BOOL m_settingShift;
	BOOL m_suggestionsShownForCurrentDeletion;
	BOOL m_originalShouldSkipCandidateSelection;
	BOOL m_updatingPreferences;
	BOOL m_changingGeometryWithSameOrientation;
	BOOL m_suppressGeometryChangeNotifications;
	BOOL m_acceptingCandidate;
	BOOL m_userChangedSelection;
	BOOL m_shouldChargeKeys;
	BOOL m_longPress;
	BOOL m_replacingWord;
	BOOL m_shiftNeedsUpdate;
	BOOL m_shiftPreventAutoshift;
	BOOL m_shiftHeldDownNeedsUpdated;
	BOOL m_delegateAdoptsTextInput;
	BOOL m_delegateAdoptsTextInputPrivate;
	BOOL m_delegateAdoptsKeyboardInput;
	BOOL m_clientVariantSupportEnabled;
	BOOL m_clientVariantSupportEnabledEver;
	id m_keyplaneNamesPreviousDelegate;
	id m_keyplaneNamesCurrentDelegate;
	id m_arrowKeyHistory;
	BOOL m_preRotateShift;
	BOOL m_preRotateShiftLocked;
	BOOL m_showInputModeIndicator;
	BOOL m_suppressUpdateCandidateView;
	BOOL m_shouldUpdateCacheOnInputModesChange;
	BOOL m_shouldSetInputModeInNextRun;
	BOOL m_rivenCenterFilled;
	double m_splitProgress;
	id m_currentUsedInputMode;
	id m_lastUsedInputMode;
	id m_nextInputModeToUse;
	BOOL m_needsCandidates;
	BOOL m_shouldSkipCandidateGeneration;
	BOOL m_updateLayoutOnShowKeyboard;
	BOOL m_receivedCandidatesInCurrentInputMode;
	int _currentAlertReason;
	BOOL m_scrolling;
	BOOL m_hasInputOnAcceptCandidate;
	BOOL m_maximizing;
	usigned long long m_previousSpaceKeyBehavior;
	usigned long long m_previousReturnKeyBehavior;
	BOOL m_usesCandidateSelection;
	BOOL m_showsCandidateBar;
	BOOL m_showsCandidateInline;
	BOOL committingCandidate;
	BOOL geometryIsChanging;
	BOOL m_hardwareKeyboardIsSeen;
	BOOL m_softwareKeyboardShownByTouch;
	BOOL _handlingKeyCommandFromHardwareKeyboard;
	id m_touchEventWaitingForKeyInputEvent;
	id m_delayedCandidateRequest;
	id m_deferredDidSetDelegateAction;
	id m_hardwareRepeatEvent;
	id m_hardwareRepeatTask;
	id typologyRecorder;
	id keyboardAlertView;
}

+ installRecorder
+ stopKeyboardRecording
+ startKeyboardRecording
+ keyboardRecordingEnabled
+ _inputForAutocorrectionCandidate
+ _setNeedsCandidates:
+ _getCurrentKeyboardName
+ _getCurrentKeyplaneName
+ _getLocalizedInputMode
+ _setAutocorrects:
+ _getAutocorrection
+ _hasCandidates
+ _positionInCandidateList:
+ _needsCandidates
+ selectionView
+ setInitialDirection
+ _layout
+ clearLanguageIndicator
+ isUsingDictationLayout
+ setSplit:animated:
+ finishSplitTransitionWithProgress:
+ clearExcessKeyboardMemory
+ keyboardDrawsOpaque
+ _shouldMinimizeForHardwareKeyboard
+ setTextInputChangesIgnored:
+ acceptAutocorrectionAndEndComposition
+ installTypology
+ typologyEnabled
+ launchTypologyApplication
+ logHandwritingData
+ _setInputManager:
+ _setShiftLockedEnabled:
+ hasAutoRepeat
+ updateFromTextInputTraits
+ _isShowingCandidateUIWithAvailableCandidates
+ textInputChangingCount
+ testAutocorrectionPromptWithCorrection:
+ isAutoDeleteActive
+ timeMark:message:
+ timeMark:
+ timeElapsed:message:
+ callLayoutUpdateLocalizedKeys
+ callLayoutUpdateAllLocalizedKeys
+ callLayoutUpdateReturnKey
+ callLayoutSetShift:
+ callLayoutSetAutoshift:
+ callLayoutIsShiftKeyPlaneChooser
+ callLayoutIsShiftKeyBeingHeld
+ callLayoutUsesAutoShift
+ callLayoutIgnoresShiftState
+ callLayoutLongPressAction
+ initWithFrame:
+ dealloc
+ setShift:
+ setDelegate:
+ hitTest:withEvent:
+ pointInside:withEvent:
+ setFrame:
+ removeFromSuperview
+ delegate
+ cancelAllKeyEvents
+ ejectKeyDown
+ interfaceOrientation
+ handleKeyEvent:
+ alertView:clickedButtonAtIndex:
+ _willMoveToWindow:withAncestorView:
+ pointInside:forEvent:
+ textInputTraits
+ setSelectionWithPoint:
+ inputDelegate
+ textWillChange:
+ textDidChange:
+ insertText:
+ deleteBackward
+ unmarkText
+ returnKeyType
+ hasMarkedText
+ detach
+ updateLayout
+ setCaretBlinks:
+ scheduleReplacementsWithOptions:
+ layoutHasChanged
+ textFrameChanged:
+ changedDelegate
+ setChangedDelegate:
+ textChanged:
+ subtractKeyboardFrameFromRect:inView:
+ _clipCornersOfView:
+ usesCandidateSelection
+ setUsesCandidateSelection:
+ candidateListAcceptCandidate:
+ candidateListSelectionDidChange:
+ showPreviousCandidate
+ showNextPage
+ jumpToCompositions
+ revealHiddenCandidates
+ candidateList
+ supportsNumberKeySelection
+ centerFilled
+ releaseInputManager
+ clearDelegate
+ clearAnimations
+ clearTimers
+ clearLayouts
+ acceptAutocorrection
+ _updateSoundPreheatingForWindow:
+ showsCandidateBar
+ shouldShowCandidateBar
+ takeTextInputTraitsFromDelegate
+ shiftLockPreference
+ doubleSpacePeriodPreference
+ inputModePreference
+ UILanguagePreference
+ refreshRivenPreferences
+ setInSplitKeyboardMode:
+ automaticMinimizationEnabled
+ setInputModeFromPreferences
+ delayedInit
+ applicationSuspendedEventsOnly:
+ applicationResumedEventsOnly:
+ keyboardDidHide:
+ selectionScrolling:
+ performanceLoggingPreference
+ setRecorder:
+ setTypologyRecorder:
+ removeAutocorrectPrompt
+ setNextInputModeToUse:
+ setLastUsedInputMode:
+ setCurrentUsedInputMode:
+ setInputMode:
+ layoutState
+ autocorrectionController
+ clearInput
+ keyboardAlertView
+ setKeyboardAlertView:
+ clearChangeTimeAndCount
+ updateCandidateDisplay
+ autocorrectionPreferenceForTraits
+ setAutocorrectSpellingEnabled:
+ autocapitalizationPreference
+ updateInputManagerAutocapitalizationType
+ recomputeActiveInputModesFromList:
+ syncInputManagerToKeyboardState
+ frameForKeylayoutName:
+ dragGestureSize
+ setSplitProgress:
+ setRivenSplitLock:
+ autocorrectionPreference
+ checkSpellingPreference
+ inputModeLastChosenPreference
+ setInputMode:userInitiated:
+ taskQueue
+ setInputMode:userInitiated:updateIndicator:executionContext:
+ setInputManagerFromInputMode:
+ isMinimized
+ updateInputModeIndicatorOnSingleKeyOnly:
+ finishSetInputMode:didChangeDirection:executionContext:
+ textChanged:executionContext:
+ syncInputManagerToKeyboardStateWithExecutionContext:
+ updateTextCandidateView
+ typologyRecorder
+ inputModeLastUsedPreference
+ fadeAnimationDidStop:finished:
+ updateInputModeIndicatorOnSingleKeyOnly:preserveIfPossible:
+ showInformationalAlertIfNeededForReason:
+ currentUsedInputMode
+ lastUsedInputMode
+ nextInputModeToUse
+ getLastUsedInputMode
+ finishSetInputModeToNextInPreferredListWithExecutionContext:
+ setInputModeLastChosenPreference
+ showInternationalKeyInfoAlertIfNeeded
+ showInputModeIndicator
+ setOrientation
+ setShiftLocked:
+ privateInputDelegate
+ setDelegate:force:
+ updateReturnKey
+ recorder
+ setCaretVisible:
+ changeCount
+ storeDelegateConformance
+ stopAutoDelete
+ clearShiftState
+ callChanged
+ clearTransientState
+ delegateIsSMSTextView
+ setReturnKeyEnabled:
+ updateShiftState
+ deferredDidSetDelegateAction
+ didSetDelegate
+ setDeferredDidSetDelegateAction:
+ updateForChangedSelection
+ updateForChangedSelectionWithExecutionContext:
+ releaseInputManagerIfInactive
+ checkSpellingPreferenceForTraits
+ isAutoFillMode
+ selectionWillChange:
+ finishTextChanged
+ updateReturnKey:
+ setChanged
+ setShiftOffIfNeeded
+ selectionDidChange:
+ legacyInputDelegate
+ inputManagerState
+ updateAutocorrectPromptAction
+ updateObserverState
+ arrowKeyHistory
+ setArrowKeyHistory:
+ setHandlingKeyCommandFromHardwareKeyboard:
+ movePhraseBoundaryToDirection:
+ deleteForwardAndNotify:
+ delegateAsResponder
+ fadeAutocorrectPrompt
+ inputModeLastUsedForLanguage:
+ performKeyBehaviorConfirm
+ performKeyBehaviorConfirmFirstCandidate
+ _keyboardBehaviorState
+ setGeometryIsChanging:
+ updateLayoutIfNeeded
+ setAutocorrection:
+ releaseSuppressUpdateCandidateView
+ clearLongPressTimer
+ generateCandidates
+ showsCandidateInline
+ currentKeyboardTraitsAllowCandidateBar
+ setShouldSkipCandidateSelection:
+ setShowsCandidateBar:
+ finishLayoutChangeWithArguments:
+ resizeForKeyplaneSize:
+ splitTransitionInProgress
+ markedText
+ inputStringFromPhraseBoundary
+ clearInputForMarkedText
+ searchStringForMarkedText
+ hasEditableMarkedText
+ inputManager
+ prepareForSelectionChange
+ setPreviousInputString:
+ completeUpdateForChangedSelection:
+ callChangedSelection
+ deleteHandwritingStrokesAtIndexes:
+ flushTouchEventWaitingForKeyInputEventIfNecessary
+ refreshKeyboardState
+ replyHandlerForSyncToKeyboardStateWithExecutionContext:
+ continueSyncToKeyboardStateWithOperations:
+ handleReplyToSyncToKeyboardStateWithTask:executionContext:
+ performOperations:
+ delayedCandidateRequest
+ setDelayedCandidateRequest:
+ touchEventWaitingForKeyInputEvent
+ setTouchEventWaitingForKeyInputEvent:
+ replyHandlerForHandleKeyboardInputWithExecutionContext:
+ continueHandleKeyboardInputWithOperations:
+ handleReplyToHandleKeyboardInputWithTask:executionContext:
+ generateCandidatesAsynchronouslyWithRange:selectedCandidate:
+ replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:
+ continueGenerateCandidatesAsynchronouslyWithOperations:
+ handleReplyToGenerateCandidatesAsynchronouslyWithTask:
+ replyHandlerForGenerateAutocorrectionWithExecutionContext:
+ continueGenerateAutocorrectionWithOperations:
+ handleReplyToGenerateAutocorrectionWithTask:executionContext:
+ replyHandlerForHandleAcceptedCandidateWithExecutionContext:
+ continueHandleAcceptedCandidateWithOperations:
+ handleReplyToHandleAcceptedCandidateWithTask:executionContext:
+ replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:executionContext:
+ continueGenerateReplacementsForStringWithCandidates:candidatesHandler:
+ handleReplyToGenerateReplacementsForStringWithTask:executionContext:
+ skipHitTestForTouchEvent:
+ replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:executionContext:
+ continuePerformHitTestToKeyCode:keyCodeHandler:
+ handleReplyToPerformHitTestWithTask:executionContext:
+ replyHandlerForAdjustPhraseBoundaryWithExecutionContext:
+ didChangePhraseBoundary
+ _systemHasKbd
+ isDesiredInputMode:
+ isAllowedInputMode:
+ shouldSwitchInputMode:
+ notifyShiftState
+ isSelectionAtSentenceAutoshiftBoundary
+ setShiftPreventAutoshift:
+ setShift:autoshift:
+ setShiftNeedsUpdate
+ shouldSkipCandidateSelection
+ suppliesCompletions
+ deleteFromInputWithExecutionContext:
+ _handleKeyEvent:executionContext:
+ handleDeleteAsRepeat:executionContext:
+ handleDeleteWithExecutionContext:
+ handleClearWithExecutionContext:
+ callShouldReplaceExtendedRange:withText:includeMarkedText:
+ addInputString:withFlags:executionContext:
+ acceptInputString:
+ deleteBackwardAndNotify:
+ addInputString:withFlags:
+ isInHardwareKeyboardMode
+ updateDoubleSpacePeriodStateForCharacter:
+ setExternalTask:
+ updateLastUsedInputMode:
+ inputEventForInputString:
+ completeAcceptCandidateBeforeAddingInput:executionContext:
+ acceptCurrentCandidateIfSelectedWithExecutionContext:
+ updateChangeTimeAndIncrementCount
+ acceptCurrentCandidate
+ acceptedAutocorrectionForWordTerminator:
+ nextCharacterIsWordCharacter
+ acceptWord:firstDelete:forInput:
+ moveSelectionToEndOfWord
+ completeAddInputString:
+ addWordTerminator:afterSpace:elapsedTime:executionContext:
+ callShouldInsertText:
+ willReplaceTextInRangedSelectionWithKeyboardInput
+ completeAddInputString:generateCandidates:
+ handleKeyboardInput:executionContext:
+ shouldAcceptCandidate:beforeInputString:
+ trackUsageForAcceptedAutocorrection:promptWasShowing:
+ handleDoubleSpacePeriodForInputString:afterSpace:elapsedTime:
+ updateDoubleSpacePeriodStateForString:
+ setUserSelectedCurrentCandidate:
+ phraseBoundary
+ adjustPhraseBoundaryInForwardDirection:executionContext:
+ completeDeleteOnceFromInputWithCharacterBefore:
+ selectionIsEndOfWord
+ scheduleReplacementsAfterDeletionToEndOfWord
+ shouldEnableShiftForDeletedCharacter:
+ callShouldDeleteWithWordCountForRapidDelete:characterCountForRapidDelete:
+ deleteOnceFromInputWithExecutionContext:
+ completeDeleteFromInput
+ userSelectedCurrentCandidate
+ acceptWord:firstDelete:
+ acceptCandidate:atIndex:executionContext:
+ acceptCandidate:
+ completeAcceptCandidate:
+ handleAcceptedCandidate:executionContext:
+ committingCandidate
+ setCommittingCandidate:
+ acceptCurrentCandidateWithExecutionContext:
+ acceptCandidate:atIndex:
+ generateCandidatesWithOptions:
+ trackUsageForCandidateAcceptedAction:
+ updateKeyboardConfigurations
+ setCandidates:
+ addInputObject:executionContext:
+ setInHardwareKeyboardMode:
+ completeAcceptCandidateBeforeAddingInputObject:executionContext:
+ applyAutocorrection
+ shouldIgnoreCandidateSet:documentOperation:
+ generateCandidatesAsynchronously
+ needsToDeferUpdateTextCandidateView
+ handleDelayedActionUpdateTextCandidateView
+ updateAutocorrectPrompt:
+ resizeCandidateBarWithDelta:
+ clearAutocorrectPromptTimer
+ noContent
+ _canonicalKeyTypeForKeyType:
+ _nop
+ showNextCandidates
+ returnKeyDisplayName
+ handlingKeyCommandFromHardwareKeyboard
+ acceptFirstCandidate
+ _handleKeyBehavior:forKeyType:
+ updateKeyBehaviors:withBehaviors:forState:
+ inputOverlayContainer
+ delegateSupportsCorrectionUI
+ convertRectToAutocorrectRect:delegateView:container:
+ _rangeForAutocorrectionText:
+ touchAutocorrectPromptTimer
+ _autocorrectPromptRects
+ trackUsageForPromptedCorrection:inputString:previousPrompt:
+ animateAutocorrection
+ autocorrectionAnimationDidStop:finished:context:
+ delegateSuggestionsForCurrentInput
+ generateReplacementsForString:candidatesHandler:executionContext:
+ clearAutoDeleteTimer
+ handleAutoDeleteWithExecutionContext:
+ completeHandleAutoDelete
+ touchAutoDeleteTimerWithThreshold:
+ handleDelayedActionLongPress
+ touchLongPressTimerWithDelay:
+ longPressAction
+ hardwareKeyboardAvailabilityChanged
+ setAutomaticMinimizationEnabled:
+ hardwareRepeatTask
+ hardwareRepeatEvent
+ handleKeyEvent:executionContext:
+ setHardwareRepeatTask:
+ prepareForGeometryChange
+ geometryChangeDone:
+ showKeyboard
+ hideKeyboard
+ setHardwareRepeatEvent:
+ _handleWebKeyEvent:withEventType:withInputString:withInputStringIgnoringModifiers:
+ externalTask
+ _handleWebKeyEvent:withIndex:inInputString:executionContext:
+ updateKeyboardEventsLagging:
+ setHardwareKeyboardIsSeen:
+ softwareKeyboardShownByTouch
+ toggleSoftwareKeyboard
+ setSoftwareKeyboardShownByTouch:
+ _remapKeyEvent:withKeyEventMap:
+ firstHardwareAutoRepeatWithExecutionContext:
+ _handleWebKeyEvent:withInputString:executionContext:
+ handleKeyCommand:repeatOkay:
+ isValidKeyInput:
+ completeHandleKeyEvent:
+ handleKeyWithString:forKeyEvent:executionContext:
+ handleStringInput:withFlags:executionContext:
+ hardwareKeyboardIsSeen
+ caretBlinks
+ clearSelection
+ canHandleKeyHitTest
+ needsKeyHitTestResults
+ setCandidateList:updateCandidateView:
+ layoutForKeyHitTest
+ setLayoutForKeyHitTest:
+ defaultsDidChange
+ rivenSplitLock
+ minimumTouchesForTranslation
+ hideAccessoryViewsDuringSplit
+ cancelSplitTransition
+ swipeToTabPreference
+ keyboardsExpandedPreference
+ saveInputModesPreference:
+ inputModeFirstPreference
+ setShouldUpdateCacheOnInputModesChange:
+ hardwareKeyboardsSeenPreference
+ setHardwareKeyboardsSeenPreference:
+ setInputModeToNextInPreferredListWithExecutionContext:
+ setInputModeToNextASCIICapableInPreferredList
+ inputModeLastChosen
+ prepareLayoutForInterfaceOrientation:
+ updateLayoutToCurrentInterfaceOrientation
+ setCorrectionLearningAllowed:
+ autocorrectSpellingEnabled
+ setDefaultTextInputTraits:
+ enable
+ changeNotificationDisabled
+ setChangeNotificationDisabled:
+ handleObserverCallback
+ setMarkedText:selectedRange:inputString:searchString:
+ unmarkText:
+ markedTextOverlay
+ generateAutocorrectionWithExecutionContext:
+ skipHitTestForTouchEvent:delayed:
+ performHitTestForTouchEvent:keyCodeHandler:executionContext:
+ removeAllDynamicDictionaries
+ recomputeActiveInputModes
+ toggleShift
+ setShiftLockedForced:
+ isShifted
+ isAutoShifted
+ isShiftLocked
+ shiftLockedEnabled
+ forceShiftUpdate
+ forceShiftUpdateIfKeyboardStateChanged
+ setInputManagerState:
+ keyActivated
+ keyDeactivated
+ setInputPoint:
+ handleDelete
+ handleClear
+ insertTextAfterSelection:
+ addInputString:
+ addInputString:fromVariantKey:
+ updateLayoutAndSetShift
+ deleteFromInput
+ removeAutocorrection
+ acceptCurrentCandidateIfSelected
+ addInputObject:
+ replaceText:
+ displaysCandidates
+ updateCandidateDisplayAsyncWithCandidateSet:documentOperation:
+ setShowsCandidateInline:
+ autocorrectPrompt
+ returnKeyEnabled
+ handleDelayedActionUpdateAutocorrectPrompt
+ updateAutocorrectPromptDisplay:
+ autocorrectionRecordForWord:
+ generateAutocorrectionReplacements:
+ startAutoDeleteTimer
+ touchLongPressTimer
+ isLongPress
+ dismissKeyboard
+ showKeyboardIfNeeded
+ remoteControlEvent:
+ startCaretBlinkIfNeeded
+ caretVisible
+ geometryDelegate
+ setGeometryDelegate:
+ setShowInputModeIndicator:
+ shouldSetInputModeInNextRun
+ setShouldSetInputModeInNextRun:
+ receivedCandidatesInCurrentInputMode
+ setReceivedCandidatesInCurrentInputMode:
+ geometryIsChanging
- installRecorder
- stopKeyboardRecording
- startKeyboardRecording
- keyboardRecordingEnabled
- _inputForAutocorrectionCandidate
- _setNeedsCandidates:
- _getCurrentKeyboardName
- _getCurrentKeyplaneName
- _getLocalizedInputMode
- _setAutocorrects:
- _getAutocorrection
- _hasCandidates
- _positionInCandidateList:
- _needsCandidates
- selectionView
- setInitialDirection
- _layout
- clearLanguageIndicator
- isUsingDictationLayout
- setSplit:animated:
- finishSplitTransitionWithProgress:
- clearExcessKeyboardMemory
- keyboardDrawsOpaque
- _shouldMinimizeForHardwareKeyboard
- setTextInputChangesIgnored:
- acceptAutocorrectionAndEndComposition
- installTypology
- typologyEnabled
- launchTypologyApplication
- logHandwritingData
- _setInputManager:
- _setShiftLockedEnabled:
- hasAutoRepeat
- updateFromTextInputTraits
- _isShowingCandidateUIWithAvailableCandidates
- textInputChangingCount
- testAutocorrectionPromptWithCorrection:
- isAutoDeleteActive
- timeMark:message:
- timeMark:
- timeElapsed:message:
- callLayoutUpdateLocalizedKeys
- callLayoutUpdateAllLocalizedKeys
- callLayoutUpdateReturnKey
- callLayoutSetShift:
- callLayoutSetAutoshift:
- callLayoutIsShiftKeyPlaneChooser
- callLayoutIsShiftKeyBeingHeld
- callLayoutUsesAutoShift
- callLayoutIgnoresShiftState
- callLayoutLongPressAction
- initWithFrame:
- dealloc
- setShift:
- setDelegate:
- hitTest:withEvent:
- pointInside:withEvent:
- setFrame:
- removeFromSuperview
- delegate
- cancelAllKeyEvents
- ejectKeyDown
- interfaceOrientation
- handleKeyEvent:
- alertView:clickedButtonAtIndex:
- _willMoveToWindow:withAncestorView:
- pointInside:forEvent:
- textInputTraits
- setSelectionWithPoint:
- inputDelegate
- textWillChange:
- textDidChange:
- insertText:
- deleteBackward
- unmarkText
- returnKeyType
- hasMarkedText
- detach
- updateLayout
- setCaretBlinks:
- scheduleReplacementsWithOptions:
- layoutHasChanged
- textFrameChanged:
- changedDelegate
- setChangedDelegate:
- textChanged:
- subtractKeyboardFrameFromRect:inView:
- _clipCornersOfView:
- usesCandidateSelection
- setUsesCandidateSelection:
- candidateListAcceptCandidate:
- candidateListSelectionDidChange:
- showPreviousCandidate
- showNextPage
- jumpToCompositions
- revealHiddenCandidates
- candidateList
- supportsNumberKeySelection
- centerFilled
- releaseInputManager
- clearDelegate
- clearAnimations
- clearTimers
- clearLayouts
- acceptAutocorrection
- _updateSoundPreheatingForWindow:
- showsCandidateBar
- shouldShowCandidateBar
- takeTextInputTraitsFromDelegate
- shiftLockPreference
- doubleSpacePeriodPreference
- inputModePreference
- UILanguagePreference
- refreshRivenPreferences
- setInSplitKeyboardMode:
- automaticMinimizationEnabled
- setInputModeFromPreferences
- delayedInit
- applicationSuspendedEventsOnly:
- applicationResumedEventsOnly:
- keyboardDidHide:
- selectionScrolling:
- performanceLoggingPreference
- setRecorder:
- setTypologyRecorder:
- removeAutocorrectPrompt
- setNextInputModeToUse:
- setLastUsedInputMode:
- setCurrentUsedInputMode:
- setInputMode:
- layoutState
- autocorrectionController
- clearInput
- keyboardAlertView
- setKeyboardAlertView:
- clearChangeTimeAndCount
- updateCandidateDisplay
- autocorrectionPreferenceForTraits
- setAutocorrectSpellingEnabled:
- autocapitalizationPreference
- updateInputManagerAutocapitalizationType
- recomputeActiveInputModesFromList:
- syncInputManagerToKeyboardState
- frameForKeylayoutName:
- dragGestureSize
- setSplitProgress:
- setRivenSplitLock:
- autocorrectionPreference
- checkSpellingPreference
- inputModeLastChosenPreference
- setInputMode:userInitiated:
- taskQueue
- setInputMode:userInitiated:updateIndicator:executionContext:
- setInputManagerFromInputMode:
- isMinimized
- updateInputModeIndicatorOnSingleKeyOnly:
- finishSetInputMode:didChangeDirection:executionContext:
- textChanged:executionContext:
- syncInputManagerToKeyboardStateWithExecutionContext:
- updateTextCandidateView
- typologyRecorder
- inputModeLastUsedPreference
- fadeAnimationDidStop:finished:
- updateInputModeIndicatorOnSingleKeyOnly:preserveIfPossible:
- showInformationalAlertIfNeededForReason:
- currentUsedInputMode
- lastUsedInputMode
- nextInputModeToUse
- getLastUsedInputMode
- finishSetInputModeToNextInPreferredListWithExecutionContext:
- setInputModeLastChosenPreference
- showInternationalKeyInfoAlertIfNeeded
- showInputModeIndicator
- setOrientation
- setShiftLocked:
- privateInputDelegate
- setDelegate:force:
- updateReturnKey
- recorder
- setCaretVisible:
- changeCount
- storeDelegateConformance
- stopAutoDelete
- clearShiftState
- callChanged
- clearTransientState
- delegateIsSMSTextView
- setReturnKeyEnabled:
- updateShiftState
- deferredDidSetDelegateAction
- didSetDelegate
- setDeferredDidSetDelegateAction:
- updateForChangedSelection
- updateForChangedSelectionWithExecutionContext:
- releaseInputManagerIfInactive
- checkSpellingPreferenceForTraits
- isAutoFillMode
- selectionWillChange:
- finishTextChanged
- updateReturnKey:
- setChanged
- setShiftOffIfNeeded
- selectionDidChange:
- legacyInputDelegate
- inputManagerState
- updateAutocorrectPromptAction
- updateObserverState
- arrowKeyHistory
- setArrowKeyHistory:
- setHandlingKeyCommandFromHardwareKeyboard:
- movePhraseBoundaryToDirection:
- deleteForwardAndNotify:
- delegateAsResponder
- fadeAutocorrectPrompt
- inputModeLastUsedForLanguage:
- performKeyBehaviorConfirm
- performKeyBehaviorConfirmFirstCandidate
- _keyboardBehaviorState
- setGeometryIsChanging:
- updateLayoutIfNeeded
- setAutocorrection:
- releaseSuppressUpdateCandidateView
- clearLongPressTimer
- generateCandidates
- showsCandidateInline
- currentKeyboardTraitsAllowCandidateBar
- setShouldSkipCandidateSelection:
- setShowsCandidateBar:
- finishLayoutChangeWithArguments:
- resizeForKeyplaneSize:
- splitTransitionInProgress
- markedText
- inputStringFromPhraseBoundary
- clearInputForMarkedText
- searchStringForMarkedText
- hasEditableMarkedText
- inputManager
- prepareForSelectionChange
- setPreviousInputString:
- completeUpdateForChangedSelection:
- callChangedSelection
- deleteHandwritingStrokesAtIndexes:
- flushTouchEventWaitingForKeyInputEventIfNecessary
- refreshKeyboardState
- replyHandlerForSyncToKeyboardStateWithExecutionContext:
- continueSyncToKeyboardStateWithOperations:
- handleReplyToSyncToKeyboardStateWithTask:executionContext:
- performOperations:
- delayedCandidateRequest
- setDelayedCandidateRequest:
- touchEventWaitingForKeyInputEvent
- setTouchEventWaitingForKeyInputEvent:
- replyHandlerForHandleKeyboardInputWithExecutionContext:
- continueHandleKeyboardInputWithOperations:
- handleReplyToHandleKeyboardInputWithTask:executionContext:
- generateCandidatesAsynchronouslyWithRange:selectedCandidate:
- replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:
- continueGenerateCandidatesAsynchronouslyWithOperations:
- handleReplyToGenerateCandidatesAsynchronouslyWithTask:
- replyHandlerForGenerateAutocorrectionWithExecutionContext:
- continueGenerateAutocorrectionWithOperations:
- handleReplyToGenerateAutocorrectionWithTask:executionContext:
- replyHandlerForHandleAcceptedCandidateWithExecutionContext:
- continueHandleAcceptedCandidateWithOperations:
- handleReplyToHandleAcceptedCandidateWithTask:executionContext:
- replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:executionContext:
- continueGenerateReplacementsForStringWithCandidates:candidatesHandler:
- handleReplyToGenerateReplacementsForStringWithTask:executionContext:
- skipHitTestForTouchEvent:
- replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:executionContext:
- continuePerformHitTestToKeyCode:keyCodeHandler:
- handleReplyToPerformHitTestWithTask:executionContext:
- replyHandlerForAdjustPhraseBoundaryWithExecutionContext:
- didChangePhraseBoundary
- _systemHasKbd
- isDesiredInputMode:
- isAllowedInputMode:
- shouldSwitchInputMode:
- notifyShiftState
- isSelectionAtSentenceAutoshiftBoundary
- setShiftPreventAutoshift:
- setShift:autoshift:
- setShiftNeedsUpdate
- shouldSkipCandidateSelection
- suppliesCompletions
- deleteFromInputWithExecutionContext:
- _handleKeyEvent:executionContext:
- handleDeleteAsRepeat:executionContext:
- handleDeleteWithExecutionContext:
- handleClearWithExecutionContext:
- callShouldReplaceExtendedRange:withText:includeMarkedText:
- addInputString:withFlags:executionContext:
- acceptInputString:
- deleteBackwardAndNotify:
- addInputString:withFlags:
- isInHardwareKeyboardMode
- updateDoubleSpacePeriodStateForCharacter:
- setExternalTask:
- updateLastUsedInputMode:
- inputEventForInputString:
- completeAcceptCandidateBeforeAddingInput:executionContext:
- acceptCurrentCandidateIfSelectedWithExecutionContext:
- updateChangeTimeAndIncrementCount
- acceptCurrentCandidate
- acceptedAutocorrectionForWordTerminator:
- nextCharacterIsWordCharacter
- acceptWord:firstDelete:forInput:
- moveSelectionToEndOfWord
- completeAddInputString:
- addWordTerminator:afterSpace:elapsedTime:executionContext:
- callShouldInsertText:
- willReplaceTextInRangedSelectionWithKeyboardInput
- completeAddInputString:generateCandidates:
- handleKeyboardInput:executionContext:
- shouldAcceptCandidate:beforeInputString:
- trackUsageForAcceptedAutocorrection:promptWasShowing:
- handleDoubleSpacePeriodForInputString:afterSpace:elapsedTime:
- updateDoubleSpacePeriodStateForString:
- setUserSelectedCurrentCandidate:
- phraseBoundary
- adjustPhraseBoundaryInForwardDirection:executionContext:
- completeDeleteOnceFromInputWithCharacterBefore:
- selectionIsEndOfWord
- scheduleReplacementsAfterDeletionToEndOfWord
- shouldEnableShiftForDeletedCharacter:
- callShouldDeleteWithWordCountForRapidDelete:characterCountForRapidDelete:
- deleteOnceFromInputWithExecutionContext:
- completeDeleteFromInput
- userSelectedCurrentCandidate
- acceptWord:firstDelete:
- acceptCandidate:atIndex:executionContext:
- acceptCandidate:
- completeAcceptCandidate:
- handleAcceptedCandidate:executionContext:
- committingCandidate
- setCommittingCandidate:
- acceptCurrentCandidateWithExecutionContext:
- acceptCandidate:atIndex:
- generateCandidatesWithOptions:
- trackUsageForCandidateAcceptedAction:
- updateKeyboardConfigurations
- setCandidates:
- addInputObject:executionContext:
- setInHardwareKeyboardMode:
- completeAcceptCandidateBeforeAddingInputObject:executionContext:
- applyAutocorrection
- shouldIgnoreCandidateSet:documentOperation:
- generateCandidatesAsynchronously
- needsToDeferUpdateTextCandidateView
- handleDelayedActionUpdateTextCandidateView
- updateAutocorrectPrompt:
- resizeCandidateBarWithDelta:
- clearAutocorrectPromptTimer
- noContent
- _canonicalKeyTypeForKeyType:
- _nop
- showNextCandidates
- returnKeyDisplayName
- handlingKeyCommandFromHardwareKeyboard
- acceptFirstCandidate
- _handleKeyBehavior:forKeyType:
- updateKeyBehaviors:withBehaviors:forState:
- inputOverlayContainer
- delegateSupportsCorrectionUI
- convertRectToAutocorrectRect:delegateView:container:
- _rangeForAutocorrectionText:
- touchAutocorrectPromptTimer
- _autocorrectPromptRects
- trackUsageForPromptedCorrection:inputString:previousPrompt:
- animateAutocorrection
- autocorrectionAnimationDidStop:finished:context:
- delegateSuggestionsForCurrentInput
- generateReplacementsForString:candidatesHandler:executionContext:
- clearAutoDeleteTimer
- handleAutoDeleteWithExecutionContext:
- completeHandleAutoDelete
- touchAutoDeleteTimerWithThreshold:
- handleDelayedActionLongPress
- touchLongPressTimerWithDelay:
- longPressAction
- hardwareKeyboardAvailabilityChanged
- setAutomaticMinimizationEnabled:
- hardwareRepeatTask
- hardwareRepeatEvent
- handleKeyEvent:executionContext:
- setHardwareRepeatTask:
- prepareForGeometryChange
- geometryChangeDone:
- showKeyboard
- hideKeyboard
- setHardwareRepeatEvent:
- _handleWebKeyEvent:withEventType:withInputString:withInputStringIgnoringModifiers:
- externalTask
- _handleWebKeyEvent:withIndex:inInputString:executionContext:
- updateKeyboardEventsLagging:
- setHardwareKeyboardIsSeen:
- softwareKeyboardShownByTouch
- toggleSoftwareKeyboard
- setSoftwareKeyboardShownByTouch:
- _remapKeyEvent:withKeyEventMap:
- firstHardwareAutoRepeatWithExecutionContext:
- _handleWebKeyEvent:withInputString:executionContext:
- handleKeyCommand:repeatOkay:
- isValidKeyInput:
- completeHandleKeyEvent:
- handleKeyWithString:forKeyEvent:executionContext:
- handleStringInput:withFlags:executionContext:
- hardwareKeyboardIsSeen
- caretBlinks
- clearSelection
- canHandleKeyHitTest
- needsKeyHitTestResults
- setCandidateList:updateCandidateView:
- layoutForKeyHitTest
- setLayoutForKeyHitTest:
- defaultsDidChange
- rivenSplitLock
- minimumTouchesForTranslation
- hideAccessoryViewsDuringSplit
- cancelSplitTransition
- swipeToTabPreference
- keyboardsExpandedPreference
- saveInputModesPreference:
- inputModeFirstPreference
- setShouldUpdateCacheOnInputModesChange:
- hardwareKeyboardsSeenPreference
- setHardwareKeyboardsSeenPreference:
- setInputModeToNextInPreferredListWithExecutionContext:
- setInputModeToNextASCIICapableInPreferredList
- inputModeLastChosen
- prepareLayoutForInterfaceOrientation:
- updateLayoutToCurrentInterfaceOrientation
- setCorrectionLearningAllowed:
- autocorrectSpellingEnabled
- setDefaultTextInputTraits:
- enable
- changeNotificationDisabled
- setChangeNotificationDisabled:
- handleObserverCallback
- setMarkedText:selectedRange:inputString:searchString:
- unmarkText:
- markedTextOverlay
- generateAutocorrectionWithExecutionContext:
- skipHitTestForTouchEvent:delayed:
- performHitTestForTouchEvent:keyCodeHandler:executionContext:
- removeAllDynamicDictionaries
- recomputeActiveInputModes
- toggleShift
- setShiftLockedForced:
- isShifted
- isAutoShifted
- isShiftLocked
- shiftLockedEnabled
- forceShiftUpdate
- forceShiftUpdateIfKeyboardStateChanged
- setInputManagerState:
- keyActivated
- keyDeactivated
- setInputPoint:
- handleDelete
- handleClear
- insertTextAfterSelection:
- addInputString:
- addInputString:fromVariantKey:
- updateLayoutAndSetShift
- deleteFromInput
- removeAutocorrection
- acceptCurrentCandidateIfSelected
- addInputObject:
- replaceText:
- displaysCandidates
- updateCandidateDisplayAsyncWithCandidateSet:documentOperation:
- setShowsCandidateInline:
- autocorrectPrompt
- returnKeyEnabled
- handleDelayedActionUpdateAutocorrectPrompt
- updateAutocorrectPromptDisplay:
- autocorrectionRecordForWord:
- generateAutocorrectionReplacements:
- startAutoDeleteTimer
- touchLongPressTimer
- isLongPress
- dismissKeyboard
- showKeyboardIfNeeded
- remoteControlEvent:
- startCaretBlinkIfNeeded
- caretVisible
- geometryDelegate
- setGeometryDelegate:
- setShowInputModeIndicator:
- shouldSetInputModeInNextRun
- setShouldSetInputModeInNextRun:
- receivedCandidatesInCurrentInputMode
- setReceivedCandidatesInCurrentInputMode:
- geometryIsChanging
@end
