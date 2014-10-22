@interface UIApplication : UIResponder
{
	id _delegate;
	pointer _touchMap;
	id _exclusiveTouchWindows;
	id _event;
	id _touchesEvent;
	id _motionEvent;
	id _remoteControlEvent;
	long long _remoteControlEventObservers;
	id _topLevelNibObjects;
	long long _networkResourcesCurrentlyLoadingCount;
	id _hideNetworkActivityIndicatorTimer;
	id _editAlertView;
	id _statusBar;
	long long _statusBarRequestedStyle;
	id _statusBarWindow;
	id _observerBlocks;
	id _postCommitActions;
	id _mainStoryboardName;
	id _tintViewDurationStack;
	id _statusBarTintColorLockingControllers;
	long long _statusBarTintColorLockingCount;
	id _preferredContentSizeCategory;
	struct _applicationFlags;
	id _defaultTopNavBarTintColor;
	long long _undoButtonIndex;
	long long _redoButtonIndex;
	id _moveEvent;
	id _physicalButtonsEvent;
	id _wheelEvent;
	id _physicalButtonMap;
	id _physicalKeyboardEvent;
	id _backgroundHitTestWindow;
	id _eventQueue;
	pointer _childEventMap;
	long long _disableTouchCoalescingCount;
	double _currentTimestampWhenFirstTouchCameDown;
	struct _currentLocationWhereFirstTouchCameDown;
	double _lastTimestampWhenFirstTouchCameDown;
	double _lastTimestampWhenAllTouchesLifted;
	id _preferredContentSizeCategoryName;
	struct _lastLocationWhereFirstTouchCameDown;
	struct _lastLocationWhereAllTouchesLifted;
}

+ _alertSheetStackChanged
+ _sheetWithRemoteIdentifierDidDismiss:
+ beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:
+ beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:presentAnimated:
+ beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:opaque:presentAnimated:
+ endRemoteSheet:returnCode:
+ endRemoteSheet:returnCode:dismissAnimated:
+ beginRemoteSheet:delegate:didEndSelector:contextInfo:
+ endRemoteSheet:
+ _accessibilityCaptureSimulatorEvent:
+ _accessibilityInit
+ _accessibilityApplicationIsSystemWideServer
+ _accessibilitySettingsBundle
+ _accessibilityBundlePrincipalClass
+ _accessibilitySetUpQuickSpeak
+ _updateAccessibilitySettingsLoader
+ _updateApplicationAccessibility
+ _updateLargeTextNotification
+ _updateAccessibilityItunesSettings
+ _accessibilityStatusChanged:
+ _currentTests
+ finishedTest:extraResults:
+ reportApplicationSuspended
+ isRunningQuitTest
+ isRunningSuspendTest
+ startedTest:
+ handleTestURL:
+ failedTest:
+ startLeaking
+ stopLeaking
+ runTest:startingBeforeAnimation:stoppingAfterAnimation:
+ _noteAnimationStarted:
+ _noteAnimationFinished:
+ _pathForFrameworkName:inPrivate:
+ launchedToTest
+ isRunningTest:
+ startCHUDRecording:
+ enableFramebufferStatisticsGathering
+ resultsForTest:
+ _purplePPTServerPort
+ _sendDictionaryToPPT:
+ finishedIPTest:extraResults:
+ _getSymbol:forFramework:
+ _reportResults:
+ stopCHUDRecording
+ finishedTest:extraResults:waitForNotification:withTeardownBlock:
+ failedTest:withResults:
+ _testOrientation:options:
+ runTest:options:
+ rotateIfNeeded:completion:
+ _leak
+ setDeviceOrientation:
+ runTest:forAnimation:
+ shouldRecordExtendedLaunchTime
+ isRunningTest
+ startedSubTest:forTest:
+ finishedSubTest:forTest:
+ isPPTAvailable
+ startedIPTest:
+ finishedIPTest:
+ finishedTest:
+ finishedTest:extraResults:withTeardownBlock:
+ finishedTest:extraResults:waitForNotification:
+ testPrep:options:
+ rotateIfNeeded:
+ setProximitySensingEnabled:
+ isProximitySensingEnabled
+ setStatusBarHidden:animated:
+ _doRestorationIfNecessary
+ _saveApplicationPreservationStateIfSupported
+ _restoreApplicationPreservationStateWithSessionIdentifier:beginHandler:completionHandler:
+ _saveApplicationPreservationState:viewController:sessionIdentifier:beginHandler:completionHandler:
+ ignoreSnapshotOnNextApplicationLaunch
+ saveApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:
+ restoreApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:
+ removeApplicationPreservationStateWithSessionIdentifier:
+ extendStateRestoration
+ completeStateRestoration
+ isSuspendedForAnyReason
+ dealloc
+ statusBarOrientation
+ alertInterfaceOrientation
+ setDelegate:
+ init
+ delegate
+ _touchesEvent
+ setApplicationSupportsShakeToEdit:
+ _deactivateForReason:notify:
+ _fetchInfoPlistFlags
+ _setTextLegibilityEnabled:
+ _stopHangTracer
+ _startHangTracer
+ isSuspended
+ _mainStoryboardName
+ applicationWillSuspend
+ _setHandlingURL:url:
+ _handleDelegateCallbacksWithOptions:isSuspended:restoreState:
+ _hasStoryboard
+ _applicationOpenURL:payload:
+ _handleOpportunisticFetchWithSequenceNumber:
+ _handleFetchInitiatedByRemoteNotification:remoteNotificationToken:sequenceNumber:notifySpringBoardOfFetchCompletion:
+ _handleBackgroundURLSessionEventWithIdentifier:
+ _performBlockAfterCATransactionCommits:
+ _registerForUserDefaultsChanges
+ _registerForSignificantTimeChangeNotification
+ _registerForLanguageChangedNotification
+ _registerForLocaleWillChangeNotification
+ _registerForLocaleChangedNotification
+ _registerForAlertItemStateChangeNotification
+ _registerForKeyBagLockStatusNotification
+ _registerForNameLayerTreeNotification
+ _registerForPreferredContentSizeChangedNotification
+ _registerForLegibilitySettingChangedNotification
+ _registerForBackgroundRefreshStatusChangedNotification
+ _installAutoreleasePoolsIfNecessaryForMode:
+ _installEventRunLoopSource
+ _runWithURL:payload:launchOrientation:statusBarStyle:statusBarHidden:
+ _getHangTracerConnection
+ displayIdentifier
+ _extendLaunchTest
+ _legacyAutorotationIsDisabled
+ isSuspendedEventsOnly
+ systemIsAnimatingApplicationLifecycleEvent
+ _supportedInterfaceOrientationsIsEnabled
+ _applicationLaunchesIntoPortrait
+ _createStatusBarWithRequestedStyle:orientation:hidden:
+ _notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:
+ setReceivesMemoryWarnings:
+ _loadMainInterfaceFile
+ _checkBackgroundRefreshAPIAdoption
+ _reportAppLaunchFinished
+ _isSpringBoardShowingAnAlert
+ _callInitializationDelegatesForURL:payload:suspended:
+ keyWindow
+ _deactivateForReason:
+ _stopDeactivatingForReason:
+ _writeApplicationDefaultPNGSnapshot
+ _loadMainStoryboardFileNamed:bundle:
+ _loadMainNibFileNamed:bundle:
+ _setDelegate:assumeOwnership:
+ _run
+ beginBackgroundTaskWithExpirationHandler:
+ endBackgroundTask:
+ _isClassic
+ pushRunLoopMode:requester:
+ userInfoDictionaryForRunLoopMode:requester:
+ popRunLoopMode:requester:
+ nextResponder
+ sendAction:to:from:forEvent:
+ _targetInChainForAction:sender:
+ _setStatusBarShowsProgress:
+ _isSpringBoard
+ _alwaysHitTestsForMainScreen
+ _implicitStatusBarAnimationParametersWithClass:
+ _implicitStatusBarStyleAnimationParametersWithViewController:
+ _setStatusBarStyle:animationParameters:
+ _implicitStatusBarHiddenAnimationParametersWithViewController:animation:
+ _setStatusBarHidden:animationParameters:changeApplicationFlag:
+ setStatusBarStyle:animationParameters:
+ setStatusBarHidden:animationParameters:
+ statusBarHeightForOrientation:
+ setStatusBarHidden:animationParameters:changeApplicationFlag:
+ setStatusBarHidden:duration:changeApplicationFlag:
+ setStatusBarHidden:withAnimation:
+ setStatusBarOrientation:animationParameters:
+ statusBarFrameForOrientation:
+ _notifyWillChangeStatusBarFrame:
+ _notifyDidChangeStatusBarFrame:
+ setStatusBarOrientation:animationParameters:notifySpringBoardAndFence:
+ _isAutorotationDisabledForAppWindows
+ _setStatusBarOrientation:animated:
+ supportedInterfaceOrientationsForWindow:
+ statusBar
+ removeStatusBarStyleOverrides:
+ addStatusBarStyleOverrides:
+ setGlowAnimationEnabled:forStyle:
+ setDoubleHeightMode:glowAnimationEnabled:
+ _updateCurrentTintViewForWindow:
+ _isStatusBarTintColorLocked
+ _currentTintViewWindow
+ _currentTintViewDuration
+ _setTopNavBarTintColor:withDuration:
+ _shouldTintStatusBar
+ _updateCurrentTintViewColor
+ _hasStatusBarTintColorLockingController
+ applicationWillSuspendForEventsOnly
+ applicationDidResumeForEventsOnly
+ applicationWillSuspendUnderLock
+ applicationDidResumeFromUnderLock
+ suspendReturningToLastApp:
+ _postSimpleRemoteNotificationForAction:andContext:trackID:
+ _startHeadsetButton
+ _physicalButtonsBegan:withEvent:
+ _finishHeadsetButton
+ _handleHeadsetButtonClick
+ _handleHeadsetButtonDoubleClick
+ _handleHeadsetButtonTripleClick
+ _postSimpleRemoteNotificationForAction:andContext:
+ _shouldIgnoreHeadsetClicks
+ proximityStateChanged:
+ setProximityEventsEnabled:
+ _snapshotContextWithName:screen:
+ windows
+ beginBackgroundTaskWithName:expirationHandler:
+ interfaceOrientation
+ applicationSnapshotRectForScreen:orientation:
+ applicationWillTerminate
+ _terminateWithStatus:
+ defaultImageSnapshotExpiration
+ _setSuspendedUnderLock:
+ isSuspendedUnderLock
+ _setSuspended:
+ _setSuspendedEventsOnly:
+ _updateDefaultImage
+ _saveSnapshotWithName:
+ nameOfDefaultImageToUpdateAtSuspension
+ _cancelAllInputs
+ applicationSuspend:
+ _purgeSharedInstances
+ _destroyContextsAndNotifySpringBoard
+ _isActivated
+ _sendOrderedOutContextsAndInvalidate:
+ _applicationProxyForURLScheme:publicURLsOnly:
+ _canOpenURL:publicURLsOnly:
+ openURL:
+ applicationOpenToShortCut:
+ applicationOpenURL:
+ _shouldZoom
+ applicationSnapshotRectForOrientation:
+ prepareForDefaultImageSnapshotForScreen:
+ _createDefaultImageSnapshotForScreen:
+ pathToDefaultImageNamed:forScreen:
+ _shouldUseHiResForClassic
+ prepareForDefaultImageSnapshot
+ removeDefaultImage:forScreen:
+ userCachesDirectory
+ addStatusBarItem:
+ addStatusBarImageNamed:
+ removeStatusBarItem:
+ _setIsClassic:
+ _setAlwaysHitTestsForMainScreen:
+ _motionEvent
+ sendEvent:
+ _remoteControlEvent
+ _motionKeyWindow
+ _needsShakesWhenInactive
+ _showEditAlertViewWithUndoManager:window:
+ applicationSupportsShakeToEdit
+ _showEditAlertView
+ _touchMap
+ statusBarFrame
+ isStatusBarHidden
+ activeInterfaceOrientation
+ setStatusBarMode:interfaceOrientation:duration:fenceID:animation:startTime:
+ setStatusBarOrientation:animation:duration:
+ setStatusBarStyle:duration:
+ setStatusBarMode:interfaceOrientation:duration:fenceID:animation:
+ setStatusBarMode:interfaceOrientation:duration:fenceID:
+ setStatusBarMode:interfaceOrientation:duration:
+ beginIgnoringInteractionEvents
+ endIgnoringInteractionEvents
+ _handleUserDefaultsDidChange:
+ userDefaultsDidChange:
+ setSystemVolumeHUDEnabled:forAudioCategory:
+ didReceiveMemoryWarning
+ _performMemoryWarning
+ _receivedMemoryNotification
+ _playbackTimerCallback:
+ _startPlaybackTimer
+ _physicalButtonForType:
+ _setPhysicalButton:forType:
+ _keyWindowForScreen:
+ _gestureRecognizersForResponder:
+ _physicalButtonsEvent
+ _cancelTouches:withEvent:
+ _cancelGestureRecognizers:
+ _cancelTouches:withEvent:includingGestures:notificationBlock:
+ _cancelAllTouches
+ terminateWithSuccess
+ _updateSnapshotAndStateRestorationArchiveForBackgroundEvent:saveState:exitIfCouldNotRestoreState:
+ _replyToBackgroundFetchRequestWithResult:remoteNotificationToken:sequenceNumber:updateApplicationSnapshot:
+ _handleApplicationSuspend:eventInfo:
+ _shouldFakeForegroundTransitionForBackgroundFetch
+ _handleApplicationResumeEvent:
+ _dispatchFakeSuspensionEvent
+ _dispatchBackgroundFetchReplyToSpringBoardForNewDataWithInfo:
+ _shouldHandleTestURL:
+ _isLaunchedSuspended
+ _sendWillEnterForegroundCallbacks
+ _callApplicationResumeHandlersForURL:payload:
+ applicationDidResume
+ applicationResume:
+ handleEvent:withNewEvent:
+ _handlePhysicalButtonEvent:
+ _setShouldZoom:
+ anotherApplicationFinishedLaunching:
+ statusBarStyle
+ _applicationOpenURL:event:
+ applicationDidEndResumeAnimation
+ _updateOrientation
+ applicationDidBeginSuspendAnimation
+ applicationSuspended:
+ applicationExited:
+ applicationSuspendedSettingsUpdated:
+ handleKeyEvent:
+ lockDevice:
+ quitTopApplication:
+ _dumpUIHierarchy:
+ _dumpScreenContents:
+ _processScriptEvent:
+ vibrateForDuration:
+ setBacklightLevel:
+ acceleratedInX:Y:Z:
+ statusBarReturnActionTap:
+ resetIdleTimerAndUndim
+ _sendMotionBegan:
+ _sendMotionEnded:
+ _handleOpportunisticFetchInitiatedByBackgroundFetchEvent:
+ _handleFetchInitiatedByRemoteNotificationBackgroundFetchEvent:
+ _handleBackgroundURLSessionEvent:
+ GSKeyboardForHWLayout:forceRebuild:
+ _prepareButtonEvent:type:phase:timestamp:
+ _finishButtonEvent:
+ handleKeyUIEvent:
+ _handleKeyUIEvent:
+ sendAction:toTarget:fromSender:forEvent:
+ _handleKeyEvent:
+ _sendMoveEventWithDirection:fromEvent:
+ _wheelChangedWithEvent:
+ becomeFirstResponder
+ _rootViewControllers
+ setExpectsFaceContact:inLandscape:
+ _setBackgroundStyle:
+ enabledRemoteNotificationTypes
+ registerForRemoteNotificationTypes:
+ scheduleLocalNotification:
+ cancelLocalNotification:
+ cancelAllLocalNotifications
+ setScheduledLocalNotifications:
+ scheduledLocalNotifications
+ setNetworkActivityIndicatorVisible:
+ _hideNetworkActivityIndicator
+ _backgroundModes
+ preferredContentSizeCategory
+ _setPreferredContentSizeCategory:
+ _setShouldFixMainThreadPriority:
+ _setLastTimestampWhenFirstTouchCameDown:
+ _setLastLocationWhereFirstTouchCameDown:
+ _launchTestName
+ _setAmbiguousControlCenterActivationMargin:
+ shouldLaunchSafe
+ firstLaunchAfterBoot
+ isIgnoringInteractionEvents
+ setIdleTimerDisabled:
+ isIdleTimerDisabled
+ _hasApplicationCalledLaunchDelegate
+ _isNormalRestorationInProgress
+ _isRestorationExtended
+ _setRestorationExtended:
+ _hasNormalRestorationCompleted
+ _addAfterCACommitBlockForViewController:
+ _queuePostFlushAnimation:
+ _createHangTracerTimerWithDuration:
+ _execOrResumeTime
+ _launchTime
+ _currentExpectedInterfaceOrientation
+ _unregisterForSignificantTimeChangeNotification
+ _unregisterForLanguageChangedNotification
+ _unregisterForLocaleChangedNotification
+ _unregisterForTimeChangedNotification
+ pushRunLoopMode:
+ popRunLoopMode:
+ isNetworkActivityIndicatorVisible
+ handleDoubleHeightStatusBarTap:
+ statusBarWindow
+ performDisablingStatusBarStyleValidation:
+ _updateCurrentStatusBarViewControllerAppearance
+ setStatusBarStyle:animation:startTime:duration:curve:
+ setStatusBarStyle:animation:
+ setStatusBarStyle:animated:
+ setStatusBarStyle:
+ _isInStatusBarFadeAnimation
+ setStatusBarHidden:duration:
+ setStatusBarHidden:
+ _setStatusBarOrientation:
+ setStatusBarOrientation:animated:
+ setStatusBarOrientation:
+ _statusBarOrientationForWindow:
+ _statusBarOrientationFollowsWindow:
+ _setSupportedInterfaceOrientationsIsEnabled:
+ _supportedInterfaceOrientationsForWindow:
+ statusBarOrientationAnimationDuration
+ setDoubleHeightStatusText:forStyle:
+ setDoubleHeightMode:
+ doubleHeightMode
+ setDoubleHeightPrefixText:
+ setDoubleHeightStatusText:
+ _defaultTopNavBarTintColor
+ _setDefaultTopNavBarTintColor:
+ _pushTintViewDuration:
+ _popTintViewDuration
+ _pushStatusBarTintColorLock
+ _popStatusBarTintColorLock
+ _addViewControllerForLockingStatusBarTintColor:
+ _removeViewControllerForLockingStatusBarTintColor:
+ isRunningInTaskSwitcher
+ _isResuming
+ suspend
+ _frontmostApplicationPort
+ mediaKeyDown:
+ mediaKeyUp:
+ lockButtonDown:
+ lockButtonUp:
+ headsetButtonDown:
+ headsetButtonUp:
+ headsetAvailabilityChanged:
+ menuButtonDown:
+ menuButtonUp:
+ _scrollsToTopInitiatorView:touchesEnded:withEvent:
+ ringerChanged:
+ setWantsVolumeButtonEvents:
+ volumeChanged:
+ accessoryKeyStateChanged:
+ _physicalButtonsEnded:withEvent:
+ _physicalButtonsCancelled:withEvent:
+ updateSuspendedSettings:
+ canOpenURL:
+ isHandlingOpenShortCut
+ isHandlingURL
+ showTTYPromptForNumber:withID:
+ showNetworkPromptsIfNecessary:
+ setUsesBackgroundNetwork:
+ usesBackgroundNetwork
+ userHomeDirectory
+ userLibraryDirectory
+ _localCachesDirectory
+ pathToDefaultImageNamed:
+ removeDefaultImage:
+ _isInteractionEvent:
+ _isMotionEvent:
+ launchApplicationWithIdentifier:suspended:
+ setNewsstandIconImage:
+ addStatusBarImageNamed:removeOnExit:
+ removeStatusBarImageNamed:
+ addStatusBarItem:removeOnExit:
+ setApplicationBadgeString:
+ applicationIconBadgeNumber
+ setApplicationIconBadgeNumber:
+ isProtectedDataAvailable
+ userInterfaceLayoutDirection
+ addWebClipToHomeScreen:
+ homeScreenCanAddIcons
+ _overrideDefaultInterfaceOrientationWithOrientation:
+ _removeDefaultInterfaceOrientatationOverride
+ statusBarMode
+ _setStatusBarMode:
+ _frontMostAppOrientation
+ _setTouchMap:
+ _event
+ _moveEvent
+ _wheelEvent
+ _physicalKeyboardEvent
+ _sendMotionCancelled:
+ _sendRemoteControlEvent:
+ alertView:clickedButtonAtIndex:
+ alertView:didDismissWithButtonIndex:
+ alertViewCancel:
+ _alertWindowShouldRotate
+ motionEnded:withEvent:
+ _exclusiveTouchWindows
+ _setRotationDisabledDuringTouch:
+ _rotationDisabledDuringTouch
+ _isTrackingAnyTouch
+ _setUserDefaultsSyncEnabled:
+ statusBar:styleForRequestedStyle:overrides:
+ statusBar:willAnimateFromHeight:toHeight:duration:animation:
+ statusBar:didAnimateFromHeight:toHeight:animation:
+ statusBarHeightForOrientation:ignoreHidden:
+ statusBarHeight
+ _getSpringBoardOrientation
+ setStatusBarMode:duration:
+ windowRotationDuration
+ setStatusBarShowsProgress:
+ _usesEmoji
+ setIgnoresInteractionEvents:
+ ignoresInteractionEvents
+ blockInteractionEventsCount
+ significantTimeChange
+ batteryStatusDidChange:
+ _clearTouchesForView:
+ _cancelCurrentTouchEvent
+ _unregisterForUserDefaultsChanges
+ _isSensitiveUIEnabled
+ backlightLevel
+ setSuspensionAnimationDelay:
+ setSystemVolumeHUDEnabled:
+ _isHandlingMemoryWarning
+ _stopPlayback
+ _addRecorder:
+ _removeRecorder:
+ _playbackEvents:atPlaybackRate:messageWhenDone:withSelector:
+ _eatCurrentTouch
+ _didEatCurrentTouch
+ _shouldDelayTouchesForControlCenter
+ _shouldDisableTouchCoalescing
+ _disableTouchCoalescingWithCount:
+ _enableTouchCoalescingWithCount:
+ _cancelPhysicalButtonsWithType:
+ _cancelGestureRecognizersForView:
+ _cancelViewProcessingOfTouches:withEvent:sendingTouchesCancelledToViewsOfTouches:
+ _isSendingEventForProgrammaticTouchCancellation
+ _cancelUnfinishedTouchesForEvent:
+ _updateSnapshotForBackgroundApplication:
+ _handleHIDEvent:
+ handleEvent:
+ handleKeyHIDEvent:
+ keyCommands
+ textInputMode
+ setHardwareKeyboardLayoutName:
+ clearHardwareKeyboardState
+ setExpectsFaceContact:
+ _setApplicationIsOpaque:
+ _setApplicationBackdropStyle:
+ applicationWillOrderInContext:windowLevel:screen:
+ applicationDidOrderOutContext:screen:
+ _bringContextToFront:
+ _isWindowServerHostingManaged
+ didDismissActionSheet
+ didDismissMiniAlert
+ willDisplayMiniAlert
+ willDismissMiniAlert
+ setHasMiniAlerts:
+ isLocked
+ isPasscodeRequiredToUnlock
+ requestDeviceUnlock
+ canShowAlerts
+ displayIDForURLScheme:isPublic:
+ runModal:
+ stopModal
+ _supportsShakesWhenNotActive
+ unregisterForRemoteNotifications
+ presentLocalNotificationNow:
+ _isViewContentScalingDisabled
+ _requiresHighResolution
+ _fakingRequiresHighResolution
+ _taskSuspendingUnsupported
+ _beginShowingNetworkActivityIndicator
+ _endShowingNetworkActivityIndicator
+ _setIgnoreHeadsetClicks:
+ shouldFenceStatusBarRotation
+ _executableWasLinkedWithUIKit
+ applicationState
+ backgroundTimeRemaining
+ _wakeTimerFired
+ setKeepAliveTimeout:handler:
+ clearKeepAliveTimeout
+ setMinimumBackgroundFetchInterval:
+ backgroundRefreshStatus
+ beginReceivingRemoteControlEvents
+ endReceivingRemoteControlEvents
+ _usesPreMTAlertBehavior
+ _fallbackPresentationViewController
+ _canShowTextServices
+ _showServiceForText:type:fromRect:inView:
+ _setPreferredContentSizeCategoryName:
+ _preferredContentSizeCategory:
+ _lastTimestampWhenFirstTouchCameDown
+ _lastTimestampWhenAllTouchesLifted
+ _setLastTimestampWhenAllTouchesLifted:
+ _lastLocationWhereFirstTouchCameDown
+ _lastLocationWhereAllTouchesLifted
+ _setLastLocationWhereAllTouchesLifted:
+ preferredContentSizeCategoryName
- _alertSheetStackChanged
- _sheetWithRemoteIdentifierDidDismiss:
- beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:
- beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:presentAnimated:
- beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:opaque:presentAnimated:
- endRemoteSheet:returnCode:
- endRemoteSheet:returnCode:dismissAnimated:
- beginRemoteSheet:delegate:didEndSelector:contextInfo:
- endRemoteSheet:
- _accessibilityCaptureSimulatorEvent:
- _accessibilityInit
- _accessibilityApplicationIsSystemWideServer
- _accessibilitySettingsBundle
- _accessibilityBundlePrincipalClass
- _accessibilitySetUpQuickSpeak
- _updateAccessibilitySettingsLoader
- _updateApplicationAccessibility
- _updateLargeTextNotification
- _updateAccessibilityItunesSettings
- _accessibilityStatusChanged:
- _currentTests
- finishedTest:extraResults:
- reportApplicationSuspended
- isRunningQuitTest
- isRunningSuspendTest
- startedTest:
- handleTestURL:
- failedTest:
- startLeaking
- stopLeaking
- runTest:startingBeforeAnimation:stoppingAfterAnimation:
- _noteAnimationStarted:
- _noteAnimationFinished:
- _pathForFrameworkName:inPrivate:
- launchedToTest
- isRunningTest:
- startCHUDRecording:
- enableFramebufferStatisticsGathering
- resultsForTest:
- _purplePPTServerPort
- _sendDictionaryToPPT:
- finishedIPTest:extraResults:
- _getSymbol:forFramework:
- _reportResults:
- stopCHUDRecording
- finishedTest:extraResults:waitForNotification:withTeardownBlock:
- failedTest:withResults:
- _testOrientation:options:
- runTest:options:
- rotateIfNeeded:completion:
- _leak
- setDeviceOrientation:
- runTest:forAnimation:
- shouldRecordExtendedLaunchTime
- isRunningTest
- startedSubTest:forTest:
- finishedSubTest:forTest:
- isPPTAvailable
- startedIPTest:
- finishedIPTest:
- finishedTest:
- finishedTest:extraResults:withTeardownBlock:
- finishedTest:extraResults:waitForNotification:
- testPrep:options:
- rotateIfNeeded:
- setProximitySensingEnabled:
- isProximitySensingEnabled
- setStatusBarHidden:animated:
- _doRestorationIfNecessary
- _saveApplicationPreservationStateIfSupported
- _restoreApplicationPreservationStateWithSessionIdentifier:beginHandler:completionHandler:
- _saveApplicationPreservationState:viewController:sessionIdentifier:beginHandler:completionHandler:
- ignoreSnapshotOnNextApplicationLaunch
- saveApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:
- restoreApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:
- removeApplicationPreservationStateWithSessionIdentifier:
- extendStateRestoration
- completeStateRestoration
- isSuspendedForAnyReason
- dealloc
- statusBarOrientation
- alertInterfaceOrientation
- setDelegate:
- init
- delegate
- _touchesEvent
- setApplicationSupportsShakeToEdit:
- _deactivateForReason:notify:
- _fetchInfoPlistFlags
- _setTextLegibilityEnabled:
- _stopHangTracer
- _startHangTracer
- isSuspended
- _mainStoryboardName
- applicationWillSuspend
- _setHandlingURL:url:
- _handleDelegateCallbacksWithOptions:isSuspended:restoreState:
- _hasStoryboard
- _applicationOpenURL:payload:
- _handleOpportunisticFetchWithSequenceNumber:
- _handleFetchInitiatedByRemoteNotification:remoteNotificationToken:sequenceNumber:notifySpringBoardOfFetchCompletion:
- _handleBackgroundURLSessionEventWithIdentifier:
- _performBlockAfterCATransactionCommits:
- _registerForUserDefaultsChanges
- _registerForSignificantTimeChangeNotification
- _registerForLanguageChangedNotification
- _registerForLocaleWillChangeNotification
- _registerForLocaleChangedNotification
- _registerForAlertItemStateChangeNotification
- _registerForKeyBagLockStatusNotification
- _registerForNameLayerTreeNotification
- _registerForPreferredContentSizeChangedNotification
- _registerForLegibilitySettingChangedNotification
- _registerForBackgroundRefreshStatusChangedNotification
- _installAutoreleasePoolsIfNecessaryForMode:
- _installEventRunLoopSource
- _runWithURL:payload:launchOrientation:statusBarStyle:statusBarHidden:
- _getHangTracerConnection
- displayIdentifier
- _extendLaunchTest
- _legacyAutorotationIsDisabled
- isSuspendedEventsOnly
- systemIsAnimatingApplicationLifecycleEvent
- _supportedInterfaceOrientationsIsEnabled
- _applicationLaunchesIntoPortrait
- _createStatusBarWithRequestedStyle:orientation:hidden:
- _notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:
- setReceivesMemoryWarnings:
- _loadMainInterfaceFile
- _checkBackgroundRefreshAPIAdoption
- _reportAppLaunchFinished
- _isSpringBoardShowingAnAlert
- _callInitializationDelegatesForURL:payload:suspended:
- keyWindow
- _deactivateForReason:
- _stopDeactivatingForReason:
- _writeApplicationDefaultPNGSnapshot
- _loadMainStoryboardFileNamed:bundle:
- _loadMainNibFileNamed:bundle:
- _setDelegate:assumeOwnership:
- _run
- beginBackgroundTaskWithExpirationHandler:
- endBackgroundTask:
- _isClassic
- pushRunLoopMode:requester:
- userInfoDictionaryForRunLoopMode:requester:
- popRunLoopMode:requester:
- nextResponder
- sendAction:to:from:forEvent:
- _targetInChainForAction:sender:
- _setStatusBarShowsProgress:
- _isSpringBoard
- _alwaysHitTestsForMainScreen
- _implicitStatusBarAnimationParametersWithClass:
- _implicitStatusBarStyleAnimationParametersWithViewController:
- _setStatusBarStyle:animationParameters:
- _implicitStatusBarHiddenAnimationParametersWithViewController:animation:
- _setStatusBarHidden:animationParameters:changeApplicationFlag:
- setStatusBarStyle:animationParameters:
- setStatusBarHidden:animationParameters:
- statusBarHeightForOrientation:
- setStatusBarHidden:animationParameters:changeApplicationFlag:
- setStatusBarHidden:duration:changeApplicationFlag:
- setStatusBarHidden:withAnimation:
- setStatusBarOrientation:animationParameters:
- statusBarFrameForOrientation:
- _notifyWillChangeStatusBarFrame:
- _notifyDidChangeStatusBarFrame:
- setStatusBarOrientation:animationParameters:notifySpringBoardAndFence:
- _isAutorotationDisabledForAppWindows
- _setStatusBarOrientation:animated:
- supportedInterfaceOrientationsForWindow:
- statusBar
- removeStatusBarStyleOverrides:
- addStatusBarStyleOverrides:
- setGlowAnimationEnabled:forStyle:
- setDoubleHeightMode:glowAnimationEnabled:
- _updateCurrentTintViewForWindow:
- _isStatusBarTintColorLocked
- _currentTintViewWindow
- _currentTintViewDuration
- _setTopNavBarTintColor:withDuration:
- _shouldTintStatusBar
- _updateCurrentTintViewColor
- _hasStatusBarTintColorLockingController
- applicationWillSuspendForEventsOnly
- applicationDidResumeForEventsOnly
- applicationWillSuspendUnderLock
- applicationDidResumeFromUnderLock
- suspendReturningToLastApp:
- _postSimpleRemoteNotificationForAction:andContext:trackID:
- _startHeadsetButton
- _physicalButtonsBegan:withEvent:
- _finishHeadsetButton
- _handleHeadsetButtonClick
- _handleHeadsetButtonDoubleClick
- _handleHeadsetButtonTripleClick
- _postSimpleRemoteNotificationForAction:andContext:
- _shouldIgnoreHeadsetClicks
- proximityStateChanged:
- setProximityEventsEnabled:
- _snapshotContextWithName:screen:
- windows
- beginBackgroundTaskWithName:expirationHandler:
- interfaceOrientation
- applicationSnapshotRectForScreen:orientation:
- applicationWillTerminate
- _terminateWithStatus:
- defaultImageSnapshotExpiration
- _setSuspendedUnderLock:
- isSuspendedUnderLock
- _setSuspended:
- _setSuspendedEventsOnly:
- _updateDefaultImage
- _saveSnapshotWithName:
- nameOfDefaultImageToUpdateAtSuspension
- _cancelAllInputs
- applicationSuspend:
- _purgeSharedInstances
- _destroyContextsAndNotifySpringBoard
- _isActivated
- _sendOrderedOutContextsAndInvalidate:
- _applicationProxyForURLScheme:publicURLsOnly:
- _canOpenURL:publicURLsOnly:
- openURL:
- applicationOpenToShortCut:
- applicationOpenURL:
- _shouldZoom
- applicationSnapshotRectForOrientation:
- prepareForDefaultImageSnapshotForScreen:
- _createDefaultImageSnapshotForScreen:
- pathToDefaultImageNamed:forScreen:
- _shouldUseHiResForClassic
- prepareForDefaultImageSnapshot
- removeDefaultImage:forScreen:
- userCachesDirectory
- addStatusBarItem:
- addStatusBarImageNamed:
- removeStatusBarItem:
- _setIsClassic:
- _setAlwaysHitTestsForMainScreen:
- _motionEvent
- sendEvent:
- _remoteControlEvent
- _motionKeyWindow
- _needsShakesWhenInactive
- _showEditAlertViewWithUndoManager:window:
- applicationSupportsShakeToEdit
- _showEditAlertView
- _touchMap
- statusBarFrame
- isStatusBarHidden
- activeInterfaceOrientation
- setStatusBarMode:interfaceOrientation:duration:fenceID:animation:startTime:
- setStatusBarOrientation:animation:duration:
- setStatusBarStyle:duration:
- setStatusBarMode:interfaceOrientation:duration:fenceID:animation:
- setStatusBarMode:interfaceOrientation:duration:fenceID:
- setStatusBarMode:interfaceOrientation:duration:
- beginIgnoringInteractionEvents
- endIgnoringInteractionEvents
- _handleUserDefaultsDidChange:
- userDefaultsDidChange:
- setSystemVolumeHUDEnabled:forAudioCategory:
- didReceiveMemoryWarning
- _performMemoryWarning
- _receivedMemoryNotification
- _playbackTimerCallback:
- _startPlaybackTimer
- _physicalButtonForType:
- _setPhysicalButton:forType:
- _keyWindowForScreen:
- _gestureRecognizersForResponder:
- _physicalButtonsEvent
- _cancelTouches:withEvent:
- _cancelGestureRecognizers:
- _cancelTouches:withEvent:includingGestures:notificationBlock:
- _cancelAllTouches
- terminateWithSuccess
- _updateSnapshotAndStateRestorationArchiveForBackgroundEvent:saveState:exitIfCouldNotRestoreState:
- _replyToBackgroundFetchRequestWithResult:remoteNotificationToken:sequenceNumber:updateApplicationSnapshot:
- _handleApplicationSuspend:eventInfo:
- _shouldFakeForegroundTransitionForBackgroundFetch
- _handleApplicationResumeEvent:
- _dispatchFakeSuspensionEvent
- _dispatchBackgroundFetchReplyToSpringBoardForNewDataWithInfo:
- _shouldHandleTestURL:
- _isLaunchedSuspended
- _sendWillEnterForegroundCallbacks
- _callApplicationResumeHandlersForURL:payload:
- applicationDidResume
- applicationResume:
- handleEvent:withNewEvent:
- _handlePhysicalButtonEvent:
- _setShouldZoom:
- anotherApplicationFinishedLaunching:
- statusBarStyle
- _applicationOpenURL:event:
- applicationDidEndResumeAnimation
- _updateOrientation
- applicationDidBeginSuspendAnimation
- applicationSuspended:
- applicationExited:
- applicationSuspendedSettingsUpdated:
- handleKeyEvent:
- lockDevice:
- quitTopApplication:
- _dumpUIHierarchy:
- _dumpScreenContents:
- _processScriptEvent:
- vibrateForDuration:
- setBacklightLevel:
- acceleratedInX:Y:Z:
- statusBarReturnActionTap:
- resetIdleTimerAndUndim
- _sendMotionBegan:
- _sendMotionEnded:
- _handleOpportunisticFetchInitiatedByBackgroundFetchEvent:
- _handleFetchInitiatedByRemoteNotificationBackgroundFetchEvent:
- _handleBackgroundURLSessionEvent:
- GSKeyboardForHWLayout:forceRebuild:
- _prepareButtonEvent:type:phase:timestamp:
- _finishButtonEvent:
- handleKeyUIEvent:
- _handleKeyUIEvent:
- sendAction:toTarget:fromSender:forEvent:
- _handleKeyEvent:
- _sendMoveEventWithDirection:fromEvent:
- _wheelChangedWithEvent:
- becomeFirstResponder
- _rootViewControllers
- setExpectsFaceContact:inLandscape:
- _setBackgroundStyle:
- enabledRemoteNotificationTypes
- registerForRemoteNotificationTypes:
- scheduleLocalNotification:
- cancelLocalNotification:
- cancelAllLocalNotifications
- setScheduledLocalNotifications:
- scheduledLocalNotifications
- setNetworkActivityIndicatorVisible:
- _hideNetworkActivityIndicator
- _backgroundModes
- preferredContentSizeCategory
- _setPreferredContentSizeCategory:
- _setShouldFixMainThreadPriority:
- _setLastTimestampWhenFirstTouchCameDown:
- _setLastLocationWhereFirstTouchCameDown:
- _launchTestName
- _setAmbiguousControlCenterActivationMargin:
- shouldLaunchSafe
- firstLaunchAfterBoot
- isIgnoringInteractionEvents
- setIdleTimerDisabled:
- isIdleTimerDisabled
- _hasApplicationCalledLaunchDelegate
- _isNormalRestorationInProgress
- _isRestorationExtended
- _setRestorationExtended:
- _hasNormalRestorationCompleted
- _addAfterCACommitBlockForViewController:
- _queuePostFlushAnimation:
- _createHangTracerTimerWithDuration:
- _execOrResumeTime
- _launchTime
- _currentExpectedInterfaceOrientation
- _unregisterForSignificantTimeChangeNotification
- _unregisterForLanguageChangedNotification
- _unregisterForLocaleChangedNotification
- _unregisterForTimeChangedNotification
- pushRunLoopMode:
- popRunLoopMode:
- isNetworkActivityIndicatorVisible
- handleDoubleHeightStatusBarTap:
- statusBarWindow
- performDisablingStatusBarStyleValidation:
- _updateCurrentStatusBarViewControllerAppearance
- setStatusBarStyle:animation:startTime:duration:curve:
- setStatusBarStyle:animation:
- setStatusBarStyle:animated:
- setStatusBarStyle:
- _isInStatusBarFadeAnimation
- setStatusBarHidden:duration:
- setStatusBarHidden:
- _setStatusBarOrientation:
- setStatusBarOrientation:animated:
- setStatusBarOrientation:
- _statusBarOrientationForWindow:
- _statusBarOrientationFollowsWindow:
- _setSupportedInterfaceOrientationsIsEnabled:
- _supportedInterfaceOrientationsForWindow:
- statusBarOrientationAnimationDuration
- setDoubleHeightStatusText:forStyle:
- setDoubleHeightMode:
- doubleHeightMode
- setDoubleHeightPrefixText:
- setDoubleHeightStatusText:
- _defaultTopNavBarTintColor
- _setDefaultTopNavBarTintColor:
- _pushTintViewDuration:
- _popTintViewDuration
- _pushStatusBarTintColorLock
- _popStatusBarTintColorLock
- _addViewControllerForLockingStatusBarTintColor:
- _removeViewControllerForLockingStatusBarTintColor:
- isRunningInTaskSwitcher
- _isResuming
- suspend
- _frontmostApplicationPort
- mediaKeyDown:
- mediaKeyUp:
- lockButtonDown:
- lockButtonUp:
- headsetButtonDown:
- headsetButtonUp:
- headsetAvailabilityChanged:
- menuButtonDown:
- menuButtonUp:
- _scrollsToTopInitiatorView:touchesEnded:withEvent:
- ringerChanged:
- setWantsVolumeButtonEvents:
- volumeChanged:
- accessoryKeyStateChanged:
- _physicalButtonsEnded:withEvent:
- _physicalButtonsCancelled:withEvent:
- updateSuspendedSettings:
- canOpenURL:
- isHandlingOpenShortCut
- isHandlingURL
- showTTYPromptForNumber:withID:
- showNetworkPromptsIfNecessary:
- setUsesBackgroundNetwork:
- usesBackgroundNetwork
- userHomeDirectory
- userLibraryDirectory
- _localCachesDirectory
- pathToDefaultImageNamed:
- removeDefaultImage:
- _isInteractionEvent:
- _isMotionEvent:
- launchApplicationWithIdentifier:suspended:
- setNewsstandIconImage:
- addStatusBarImageNamed:removeOnExit:
- removeStatusBarImageNamed:
- addStatusBarItem:removeOnExit:
- setApplicationBadgeString:
- applicationIconBadgeNumber
- setApplicationIconBadgeNumber:
- isProtectedDataAvailable
- userInterfaceLayoutDirection
- addWebClipToHomeScreen:
- homeScreenCanAddIcons
- _overrideDefaultInterfaceOrientationWithOrientation:
- _removeDefaultInterfaceOrientatationOverride
- statusBarMode
- _setStatusBarMode:
- _frontMostAppOrientation
- _setTouchMap:
- _event
- _moveEvent
- _wheelEvent
- _physicalKeyboardEvent
- _sendMotionCancelled:
- _sendRemoteControlEvent:
- alertView:clickedButtonAtIndex:
- alertView:didDismissWithButtonIndex:
- alertViewCancel:
- _alertWindowShouldRotate
- motionEnded:withEvent:
- _exclusiveTouchWindows
- _setRotationDisabledDuringTouch:
- _rotationDisabledDuringTouch
- _isTrackingAnyTouch
- _setUserDefaultsSyncEnabled:
- statusBar:styleForRequestedStyle:overrides:
- statusBar:willAnimateFromHeight:toHeight:duration:animation:
- statusBar:didAnimateFromHeight:toHeight:animation:
- statusBarHeightForOrientation:ignoreHidden:
- statusBarHeight
- _getSpringBoardOrientation
- setStatusBarMode:duration:
- windowRotationDuration
- setStatusBarShowsProgress:
- _usesEmoji
- setIgnoresInteractionEvents:
- ignoresInteractionEvents
- blockInteractionEventsCount
- significantTimeChange
- batteryStatusDidChange:
- _clearTouchesForView:
- _cancelCurrentTouchEvent
- _unregisterForUserDefaultsChanges
- _isSensitiveUIEnabled
- backlightLevel
- setSuspensionAnimationDelay:
- setSystemVolumeHUDEnabled:
- _isHandlingMemoryWarning
- _stopPlayback
- _addRecorder:
- _removeRecorder:
- _playbackEvents:atPlaybackRate:messageWhenDone:withSelector:
- _eatCurrentTouch
- _didEatCurrentTouch
- _shouldDelayTouchesForControlCenter
- _shouldDisableTouchCoalescing
- _disableTouchCoalescingWithCount:
- _enableTouchCoalescingWithCount:
- _cancelPhysicalButtonsWithType:
- _cancelGestureRecognizersForView:
- _cancelViewProcessingOfTouches:withEvent:sendingTouchesCancelledToViewsOfTouches:
- _isSendingEventForProgrammaticTouchCancellation
- _cancelUnfinishedTouchesForEvent:
- _updateSnapshotForBackgroundApplication:
- _handleHIDEvent:
- handleEvent:
- handleKeyHIDEvent:
- keyCommands
- textInputMode
- setHardwareKeyboardLayoutName:
- clearHardwareKeyboardState
- setExpectsFaceContact:
- _setApplicationIsOpaque:
- _setApplicationBackdropStyle:
- applicationWillOrderInContext:windowLevel:screen:
- applicationDidOrderOutContext:screen:
- _bringContextToFront:
- _isWindowServerHostingManaged
- didDismissActionSheet
- didDismissMiniAlert
- willDisplayMiniAlert
- willDismissMiniAlert
- setHasMiniAlerts:
- isLocked
- isPasscodeRequiredToUnlock
- requestDeviceUnlock
- canShowAlerts
- displayIDForURLScheme:isPublic:
- runModal:
- stopModal
- _supportsShakesWhenNotActive
- unregisterForRemoteNotifications
- presentLocalNotificationNow:
- _isViewContentScalingDisabled
- _requiresHighResolution
- _fakingRequiresHighResolution
- _taskSuspendingUnsupported
- _beginShowingNetworkActivityIndicator
- _endShowingNetworkActivityIndicator
- _setIgnoreHeadsetClicks:
- shouldFenceStatusBarRotation
- _executableWasLinkedWithUIKit
- applicationState
- backgroundTimeRemaining
- _wakeTimerFired
- setKeepAliveTimeout:handler:
- clearKeepAliveTimeout
- setMinimumBackgroundFetchInterval:
- backgroundRefreshStatus
- beginReceivingRemoteControlEvents
- endReceivingRemoteControlEvents
- _usesPreMTAlertBehavior
- _fallbackPresentationViewController
- _canShowTextServices
- _showServiceForText:type:fromRect:inView:
- _setPreferredContentSizeCategoryName:
- _preferredContentSizeCategory:
- _lastTimestampWhenFirstTouchCameDown
- _lastTimestampWhenAllTouchesLifted
- _setLastTimestampWhenAllTouchesLifted:
- _lastLocationWhereFirstTouchCameDown
- _lastLocationWhereAllTouchesLifted
- _setLastLocationWhereAllTouchesLifted:
- preferredContentSizeCategoryName
@end
