@interface UIPeripheralHost : NSObject
{
	id _hostView;
	id _automaticKeyboard;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _automaticKeyboardAnimatingIn;
	BOOL _automaticKeyboardAnimatingOut;
	int _automaticKeyboardState;
	int _ignoringReloadInputViews;
	BOOL _suppresingNotifications;
	BOOL _useHideNotificationsWhenNotVisible;
	BOOL _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	long long _targetRotatedOrientation;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _isUndocked;
	BOOL _splitLockState;
	id _translateRecognizer;
	id _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	struct _targetTransform;
	struct _initialTransform;
	struct _velocity;
	id _dropShadowViews;
	int _shadowStyle;
	BOOL _wasBackgroundSplit;
	struct _previousShadowFrameLeft;
	struct _previousShadowFrameRight;
	id _bounceCompletionBlock;
	double m_keyboardAttachedViewHeight;
	struct _lastKnownIVFrame;
	struct _lastKnownIAVFrame;
	id _animationStyleStack;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	long long _disableAnimationsCount;
	id _targetStateStack;
	id _inputViewSet;
	id _responder;
	BOOL _ignoreInputModeChanges;
	id _pinningResponders;
	BOOL _ignoresPinning;
	id _postPinningReloadState;
	BOOL _animationFencingEnabled;
	BOOL _interfaceAutorotationDisabled;
	id _rotationState;
	id _currentTransition;
	id _scrollViewForTransition;
	BOOL _scrollViewShowsHorizontalScrollIndicator;
	id _scrollViewTransition;
	BOOL _scrollViewTransitionFinishing;
	struct _scrollViewTransitionPreviousPoint;
	struct _scrollViewTransitionVelocity;
	id _selfHostingTrigger;
	id _preservedViewSets;
	BOOL _didFadeInputViews;
	BOOL _blockedReloadInputViewsForDictation;
	BOOL _animateCornerRefresh;
	BOOL _showCorners;
	id _extraViews;
	int _clippingKeyboardMode;
	struct _clippingKeyboardAdjustmentStart;
	struct _clippingKeyboardAdjustmentEnd;
	id _preservedAccessoryViewNextResponderSets;
	id _responderWithoutAutomaticAppearanceEnabled;
	id _containerWindow;
	id _transientInputViewSet;
	id _customTransitionInfo;
	double _ambiguousControlCenterActivationMargin;
}

+ view
+ customTransitionWillStartWithSettings:
+ _isTransitioning
+ _isCoordinatingWithSystemGestures
+ _clearPreservedInputViewsWithRestorableResponder:
+ containerWindow
+ scrollView:didPanAtWindowPoint:
+ scrollView:didFinishPanAtWindowPoint:
+ getVerticalOverlapForView:usingKeyboardInfo:
+ _clearPreservedInputViewsWithId:clearKeyboard:
+ setNextAutomaticOrderInDirection:duration:
+ setkeyboardAttachedViewHeight:
+ getLastAutomaticDuration
+ _preserveInputViewsWithId:animated:
+ _restoreInputViewsWithId:animated:
+ resetNextAutomaticOrderInDirectionAndDuration
+ pushAnimationStyle:
+ _beginPinningInputViewsOnBehalfOfResponder:
+ _stopPinningInputViewsOnBehalfOfResponder:
+ popAnimationStyle
+ _setIgnoresPinning:allowImmediateReload:
+ _beginDisablingAnimations
+ _endDisablingAnimations
+ _beginIgnoringReloadInputViews
+ _reloadInputViewsForResponder:
+ _endIgnoringReloadInputViews
+ _isTrackingResponder:
+ _setReloadInputViewsForcedIsAllowed:
+ _isPinningInputViewsOnBehalfOfResponder:
+ ignoresPinning
+ shouldApplySettingsForBackdropView:
+ _clipCornersOfView:
+ _inheritedRenderConfig
+ _inputViewRectToAvoid
+ moveToPersistentOffset
+ loadAwareInputViews
+ isTranslating
+ inputViews
+ _hasPostPinningReloadState
+ isSplitting
+ setIgnoresPinning:
+ postWillShowNotificationForGeometry:duration:
+ minimize
+ maximize
+ postDidShowNotificationForGeometry:
+ setUndockedWithOffset:animated:
+ keyClicksEnabled
+ setAutomaticAppearanceInternalEnabled:
+ resetCurrentOrderOutAnimationDuration:
+ containerTextEffectsWindowAboveStatusBar
+ containerTextEffectsWindow
+ offHostPointForPoint:
+ executeTransition:
+ finishScrollViewTransition
+ adjustedPersistentOffset
+ minimumOffsetForBuffer:
+ dropShadowViews
+ computeTransitionForInputViews:fromOrientation:toOrientation:
+ _inputViewsForResponder:
+ setInputViews:animationStyle:
+ keyboardAttachedViewHeight
+ _screenForFirstResponder:
+ setTextEffectsWindowLevelForInputView:responder:
+ _inputViewsForResponder:withAutomaticKeyboard:
+ _trackInputModeIfNecessary:
+ pinningPreventsInputViews:
+ _isIgnoringReloadInputViews
+ setInputViews:animated:
+ setInputViews:
+ _inputModeChangedWhileContextTracked:
+ _isSuppressedByManualKeyboard
+ visiblePeripheralFrame:
+ calculateSnapshotRectForTransition:forStart:
+ calculateRectForTransition:forStart:
+ containerForClippingMode:onTransition:
+ addExtraViewsForTransition:
+ shouldUseHideNotificationForGeometry:
+ peripheralViewMinMaximized:finished:context:
+ maximizeWithAnimation:
+ computeTransitionFromInputViews:toInputViews:animationStyle:
+ adjustHostViewForTransitionEndFrame:
+ adjustRect:forStart:
+ updateExtraViewsForStart:onTransition:
+ accessoryViewFadeDuration:
+ finishExtraViewsForTransition:
+ adjustAccessoryViewForSubsumedTransition:
+ adjustHostViewForTransitionStartFrame:
+ enableKeyboardTyping
+ removeExtraViewsForTransition:
+ adjustHostViewForTransitionCompletion:
+ displayRectForViewSet:orientation:position:fromRotation:
+ localDisplayRectForViewSet:
+ localDisplayRectForViewSet:position:
+ _isSelfHosting
+ extendKeyboardBackdropHeight:withDuration:
+ hideScrollViewHorizontalScrollIndicator:
+ updateScrollViewContentInsetBottom:
+ animateKeyboardOutWithDuration:delta:
+ prepareForPinning
+ _updateContainerWindowLevel
+ _clearPinningResponders
+ automaticAppearanceInternalEnabled
+ updateAmbiguousControlCenterActivationMargin
+ prepareToAnimateClippedKeyboardWithOffsets:orderingIn:onSnapshot:
+ addExtraAnimatedView:withAlignment:animation:onSnapshotView:
+ implBoundsHeightChangeDoneForGeometry:
+ _currentInputView
+ _hostFirstResponder:onBehalfOfResponder:
+ _resignFirstResponderIfHostingOnBehalfOfResponder:
+ candidateBarWillChangeHeight:withDuration:
+ updateInputAccessoryViewVisibility:withDuration:
+ hasCustomInputView
+ postDidHideNotificationForGeometry:
+ calculateAnimationGeometryForOrientation:outDirection:forTransition:
+ postWillHideNotificationForGeometry:duration:
+ setPeripheralToolbarFrameForHostWidth:
+ setPeripheralFrameForHostBounds:
+ totalPeripheralSizeForOrientation:
+ screenRectFromBounds:atCenter:applyingSourceHeightDelta:
+ userInfoFromGeometry:duration:forWill:forShow:
+ userInfoContainsActualGeometryChange:
+ isHostingActiveImpl
+ logGeometryDescriptionFromUserInfo:
+ syncToExistingAnimations
+ retain
+ dealloc
+ init
+ gestureRecognizerShouldBegin:
+ gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
+ gestureRecognizer:shouldReceiveTouch:
+ setResponder:
+ layoutIfNeeded
+ currentState
+ responder
+ isOnScreen
+ forceOrderInAutomaticAnimated:
+ forceOrderOutAutomaticAnimated:
+ rotationState
+ isUndocked
+ animationFencingEnabled
+ setAnimationFencingEnabled:
+ automaticAppearanceEnabled
+ setAutomaticAppearanceEnabled:
+ orderInAutomatic
+ orderInAutomaticFromDirection:withDuration:
+ orderOutAutomatic
+ orderOutAutomaticToDirection:withDuration:
+ orderInAutomaticSkippingAnimation
+ orderOutAutomaticSkippingAnimation
+ isOffScreen
+ prepareForRotationOfKeyboard:toOrientation:
+ rotateKeyboard:toOrientation:
+ finishRotationOfKeyboard:
+ prepareForRotationToOrientation:
+ rotateToOrientation:
+ finishRotation
+ forceOrderInAutomatic
+ forceOrderOutAutomatic
+ forceOrderInAutomaticFromDirection:withDuration:
+ forceOrderOutAutomaticToDirection:withDuration:
+ manualKeyboardWillBeOrderedIn:
+ manualKeyboardWasOrderedIn:
+ manualKeyboardWillBeOrderedOut:
+ manualKeyboardWasOrderedOut:
+ prepareForSplitTransition
+ showDropShadows:
+ finishSplitTransition:
+ set_inputViews:
+ peripheralHostWillResume:
+ peripheralHostDidEnterBackground:
+ textEffectsWindowDidRotate:
+ setListeningToSpringBoardKeyboardNotifications:
+ setCurrentTransition:
+ setRotationState:
+ setSelfHostingTrigger:
+ setPostPinningReloadState:
+ currentTransition
+ completeCurrentTransitionIfNeeded
+ translateDetected:
+ sizeOfInputViewForInputViewSet:withInterfaceOrientation:
+ showCorners:withDuration:
+ updateDropShadow
+ updateBackdrop
+ initializeTranslateGestureRecognizer
+ setKeyboardOnScreenNotifyKey:
+ setCurrentState:
+ targetState
+ setTargetState:
+ postDidShowNotification
+ postDidHideNotification
+ undockedInfoFromDefaultInfo:forNotification:
+ _performRefreshCorners
+ postDockingNotification
+ refreshCorners
+ postUndockingNotification
+ fadeInInputViews:
+ disableInterfaceAutorotation:
+ undock
+ postKeyboardFrameChangeNotification:withInfo:
+ dock
+ invalidateDisplayLink
+ bounceAnimationDidFinish
+ _updateBounceAnimation:
+ handleTranslateDetectedFinished:
+ hasDictationKeyboard
+ createHostViewIfNeeded
+ _somePartOfKeyboardIsOnScreen:
+ _centerStretchRectForWidth:
+ orderInWithAnimationStyle:
+ orderOutWithAnimationStyle:
+ createAutomaticKeyboardIfNeeded
+ layoutInputViewsForGeometry:
+ layoutInputViews
+ nextAnimationStyle
+ nextAnimationStyle:
+ automaticAppearanceReallyEnabled
+ animationsEnabled
+ setAccessoryViewVisible:delay:
+ updateFrame:withProgress:withDuration:
+ transitionDidFinish:
+ updateFrame:withDuration:splitHeightDelta:
+ updateFrame:withProgress:withDuration:splitHeightDelta:
+ transitionDidFinish
+ fadeInputViewsIfNeeded
+ showInputViewsIfNeeded
+ automaticKeyboard
+ orderOutWithAnimation:toDirection:duration:
+ _inputViews
+ _transientInputViews
+ set_transientInputViews:
+ selfHostingTrigger
+ postPinningReloadState
+ customTransitionInfo
+ setCustomTransitionInfo:
+ ambiguousControlCenterActivationMargin
+ setAmbiguousControlCenterActivationMargin:
- view
- customTransitionWillStartWithSettings:
- _isTransitioning
- _isCoordinatingWithSystemGestures
- _clearPreservedInputViewsWithRestorableResponder:
- containerWindow
- scrollView:didPanAtWindowPoint:
- scrollView:didFinishPanAtWindowPoint:
- getVerticalOverlapForView:usingKeyboardInfo:
- _clearPreservedInputViewsWithId:clearKeyboard:
- setNextAutomaticOrderInDirection:duration:
- setkeyboardAttachedViewHeight:
- getLastAutomaticDuration
- _preserveInputViewsWithId:animated:
- _restoreInputViewsWithId:animated:
- resetNextAutomaticOrderInDirectionAndDuration
- pushAnimationStyle:
- _beginPinningInputViewsOnBehalfOfResponder:
- _stopPinningInputViewsOnBehalfOfResponder:
- popAnimationStyle
- _setIgnoresPinning:allowImmediateReload:
- _beginDisablingAnimations
- _endDisablingAnimations
- _beginIgnoringReloadInputViews
- _reloadInputViewsForResponder:
- _endIgnoringReloadInputViews
- _isTrackingResponder:
- _setReloadInputViewsForcedIsAllowed:
- _isPinningInputViewsOnBehalfOfResponder:
- ignoresPinning
- shouldApplySettingsForBackdropView:
- _clipCornersOfView:
- _inheritedRenderConfig
- _inputViewRectToAvoid
- moveToPersistentOffset
- loadAwareInputViews
- isTranslating
- inputViews
- _hasPostPinningReloadState
- isSplitting
- setIgnoresPinning:
- postWillShowNotificationForGeometry:duration:
- minimize
- maximize
- postDidShowNotificationForGeometry:
- setUndockedWithOffset:animated:
- keyClicksEnabled
- setAutomaticAppearanceInternalEnabled:
- resetCurrentOrderOutAnimationDuration:
- containerTextEffectsWindowAboveStatusBar
- containerTextEffectsWindow
- offHostPointForPoint:
- executeTransition:
- finishScrollViewTransition
- adjustedPersistentOffset
- minimumOffsetForBuffer:
- dropShadowViews
- computeTransitionForInputViews:fromOrientation:toOrientation:
- _inputViewsForResponder:
- setInputViews:animationStyle:
- keyboardAttachedViewHeight
- _screenForFirstResponder:
- setTextEffectsWindowLevelForInputView:responder:
- _inputViewsForResponder:withAutomaticKeyboard:
- _trackInputModeIfNecessary:
- pinningPreventsInputViews:
- _isIgnoringReloadInputViews
- setInputViews:animated:
- setInputViews:
- _inputModeChangedWhileContextTracked:
- _isSuppressedByManualKeyboard
- visiblePeripheralFrame:
- calculateSnapshotRectForTransition:forStart:
- calculateRectForTransition:forStart:
- containerForClippingMode:onTransition:
- addExtraViewsForTransition:
- shouldUseHideNotificationForGeometry:
- peripheralViewMinMaximized:finished:context:
- maximizeWithAnimation:
- computeTransitionFromInputViews:toInputViews:animationStyle:
- adjustHostViewForTransitionEndFrame:
- adjustRect:forStart:
- updateExtraViewsForStart:onTransition:
- accessoryViewFadeDuration:
- finishExtraViewsForTransition:
- adjustAccessoryViewForSubsumedTransition:
- adjustHostViewForTransitionStartFrame:
- enableKeyboardTyping
- removeExtraViewsForTransition:
- adjustHostViewForTransitionCompletion:
- displayRectForViewSet:orientation:position:fromRotation:
- localDisplayRectForViewSet:
- localDisplayRectForViewSet:position:
- _isSelfHosting
- extendKeyboardBackdropHeight:withDuration:
- hideScrollViewHorizontalScrollIndicator:
- updateScrollViewContentInsetBottom:
- animateKeyboardOutWithDuration:delta:
- prepareForPinning
- _updateContainerWindowLevel
- _clearPinningResponders
- automaticAppearanceInternalEnabled
- updateAmbiguousControlCenterActivationMargin
- prepareToAnimateClippedKeyboardWithOffsets:orderingIn:onSnapshot:
- addExtraAnimatedView:withAlignment:animation:onSnapshotView:
- implBoundsHeightChangeDoneForGeometry:
- _currentInputView
- _hostFirstResponder:onBehalfOfResponder:
- _resignFirstResponderIfHostingOnBehalfOfResponder:
- candidateBarWillChangeHeight:withDuration:
- updateInputAccessoryViewVisibility:withDuration:
- hasCustomInputView
- postDidHideNotificationForGeometry:
- calculateAnimationGeometryForOrientation:outDirection:forTransition:
- postWillHideNotificationForGeometry:duration:
- setPeripheralToolbarFrameForHostWidth:
- setPeripheralFrameForHostBounds:
- totalPeripheralSizeForOrientation:
- screenRectFromBounds:atCenter:applyingSourceHeightDelta:
- userInfoFromGeometry:duration:forWill:forShow:
- userInfoContainsActualGeometryChange:
- isHostingActiveImpl
- logGeometryDescriptionFromUserInfo:
- syncToExistingAnimations
- retain
- dealloc
- init
- gestureRecognizerShouldBegin:
- gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- gestureRecognizer:shouldReceiveTouch:
- setResponder:
- layoutIfNeeded
- currentState
- responder
- isOnScreen
- forceOrderInAutomaticAnimated:
- forceOrderOutAutomaticAnimated:
- rotationState
- isUndocked
- animationFencingEnabled
- setAnimationFencingEnabled:
- automaticAppearanceEnabled
- setAutomaticAppearanceEnabled:
- orderInAutomatic
- orderInAutomaticFromDirection:withDuration:
- orderOutAutomatic
- orderOutAutomaticToDirection:withDuration:
- orderInAutomaticSkippingAnimation
- orderOutAutomaticSkippingAnimation
- isOffScreen
- prepareForRotationOfKeyboard:toOrientation:
- rotateKeyboard:toOrientation:
- finishRotationOfKeyboard:
- prepareForRotationToOrientation:
- rotateToOrientation:
- finishRotation
- forceOrderInAutomatic
- forceOrderOutAutomatic
- forceOrderInAutomaticFromDirection:withDuration:
- forceOrderOutAutomaticToDirection:withDuration:
- manualKeyboardWillBeOrderedIn:
- manualKeyboardWasOrderedIn:
- manualKeyboardWillBeOrderedOut:
- manualKeyboardWasOrderedOut:
- prepareForSplitTransition
- showDropShadows:
- finishSplitTransition:
- set_inputViews:
- peripheralHostWillResume:
- peripheralHostDidEnterBackground:
- textEffectsWindowDidRotate:
- setListeningToSpringBoardKeyboardNotifications:
- setCurrentTransition:
- setRotationState:
- setSelfHostingTrigger:
- setPostPinningReloadState:
- currentTransition
- completeCurrentTransitionIfNeeded
- translateDetected:
- sizeOfInputViewForInputViewSet:withInterfaceOrientation:
- showCorners:withDuration:
- updateDropShadow
- updateBackdrop
- initializeTranslateGestureRecognizer
- setKeyboardOnScreenNotifyKey:
- setCurrentState:
- targetState
- setTargetState:
- postDidShowNotification
- postDidHideNotification
- undockedInfoFromDefaultInfo:forNotification:
- _performRefreshCorners
- postDockingNotification
- refreshCorners
- postUndockingNotification
- fadeInInputViews:
- disableInterfaceAutorotation:
- undock
- postKeyboardFrameChangeNotification:withInfo:
- dock
- invalidateDisplayLink
- bounceAnimationDidFinish
- _updateBounceAnimation:
- handleTranslateDetectedFinished:
- hasDictationKeyboard
- createHostViewIfNeeded
- _somePartOfKeyboardIsOnScreen:
- _centerStretchRectForWidth:
- orderInWithAnimationStyle:
- orderOutWithAnimationStyle:
- createAutomaticKeyboardIfNeeded
- layoutInputViewsForGeometry:
- layoutInputViews
- nextAnimationStyle
- nextAnimationStyle:
- automaticAppearanceReallyEnabled
- animationsEnabled
- setAccessoryViewVisible:delay:
- updateFrame:withProgress:withDuration:
- transitionDidFinish:
- updateFrame:withDuration:splitHeightDelta:
- updateFrame:withProgress:withDuration:splitHeightDelta:
- transitionDidFinish
- fadeInputViewsIfNeeded
- showInputViewsIfNeeded
- automaticKeyboard
- orderOutWithAnimation:toDirection:duration:
- _inputViews
- _transientInputViews
- set_transientInputViews:
- selfHostingTrigger
- postPinningReloadState
- customTransitionInfo
- setCustomTransitionInfo:
- ambiguousControlCenterActivationMargin
- setAmbiguousControlCenterActivationMargin:
@end
