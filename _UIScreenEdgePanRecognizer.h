@interface _UIScreenEdgePanRecognizer : NSObject
{
	struct _screenBounds;
	BOOL _useGrapeFlags;
	BOOL _hasRecordedData;
	BOOL _hasDoneInitialBackProjectionTest;
	double _gestureRestrictionFactor;
	struct _initialTouchLocation;
	double _initialTouchTimestamp;
	long long _initialInterfaceOrientation;
	usigned long long _touchedRegion;
	id _recognitionTimer;
	struct _lastTouchLocation;
	double _lastTouchTimestamp;
	long long _type;
	BOOL _requiresLongPress;
	BOOL _requiresFlatThumb;
	usigned long long _targetEdges;
	long long _state;
	usigned long long _recognizedRegion;
	id _delegate;
	id _settings;
}

+ dealloc
+ setDelegate:
+ delegate
+ state
+ initWithType:
+ _type
+ settings:changedValueForKey:
+ reset
+ setTargetEdges:
+ _setState:
+ _incorporateIncrementalSampleAtLocation:timestamp:modifier:interfaceOrientation:
+ _incorporateInitialTouchAtLocation:timestamp:modifier:interfaceOrientation:
+ _targetEdges
+ screenBounds
+ _longPressTimerElapsed:
+ _idleTimerElapsed:
+ _createOrDestoryAnalysisWindowIfNeeded
+ isRequiringLongPress
+ incorporateTouchSampleAtLocation:timestamp:modifier:interfaceOrientation:
+ setScreenBounds:
+ setSettings:
+ setRequiresFlatThumb:
+ targetEdges
+ requiresFlatThumb
+ recognizedRegion
+ settings
- dealloc
- setDelegate:
- delegate
- state
- initWithType:
- _type
- settings:changedValueForKey:
- reset
- setTargetEdges:
- _setState:
- _incorporateIncrementalSampleAtLocation:timestamp:modifier:interfaceOrientation:
- _incorporateInitialTouchAtLocation:timestamp:modifier:interfaceOrientation:
- _targetEdges
- screenBounds
- _longPressTimerElapsed:
- _idleTimerElapsed:
- _createOrDestoryAnalysisWindowIfNeeded
- isRequiringLongPress
- incorporateTouchSampleAtLocation:timestamp:modifier:interfaceOrientation:
- setScreenBounds:
- setSettings:
- setRequiresFlatThumb:
- targetEdges
- requiresFlatThumb
- recognizedRegion
- settings
@end
