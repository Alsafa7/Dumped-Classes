@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer
{
	usigned long long m_offscreenEdge;
	BOOL m_shouldUseUIKitHeuristics;
	double m_edgeMargin;
	double m_falseEdge;
	int m_touchesChecked;
	struct m_firstTouch;
	double m_edgeCenter;
	double m_allowableDistanceFromEdgeCenter;
	BOOL m_requiresSecondTouchInRange;
	id m_recognizer;
}

+ setAllowableDistanceFromEdgeCenter:
+ updateForBeganOrMovedTouches:
+ _firstTouchInRange:
+ setEdgeCenter:
+ _updateAnimationDistanceAndEdgeCenter
+ firstTouchQualifies:
+ secondTouchQualifies:
+ initForOffscreenEdge:
+ isHandlingLongPress
+ setFalseEdge:
+ activeScreenBounds
+ shouldUseUIKitHeuristics
+ setShouldUseUIKitHeuristics:
+ edgeMargin
+ setEdgeMargin:
+ falseEdge
+ allowableDistanceFromEdgeCenter
+ requiresSecondTouchInRange
+ setRequiresSecondTouchInRange:
+ edgeCenter
+ dealloc
+ setState:
+ reset
+ screenEdgePanRecognizerStateDidChange:
+ setSettings:
+ settings
- setAllowableDistanceFromEdgeCenter:
- updateForBeganOrMovedTouches:
- _firstTouchInRange:
- setEdgeCenter:
- _updateAnimationDistanceAndEdgeCenter
- firstTouchQualifies:
- secondTouchQualifies:
- initForOffscreenEdge:
- isHandlingLongPress
- setFalseEdge:
- activeScreenBounds
- shouldUseUIKitHeuristics
- setShouldUseUIKitHeuristics:
- edgeMargin
- setEdgeMargin:
- falseEdge
- allowableDistanceFromEdgeCenter
- requiresSecondTouchInRange
- setRequiresSecondTouchInRange:
- edgeCenter
- dealloc
- setState:
- reset
- screenEdgePanRecognizerStateDidChange:
- setSettings:
- settings
@end
