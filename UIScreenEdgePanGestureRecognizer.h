@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer
{
	id _recognizer;
	usigned long long _edges;
}

+ dealloc
+ initWithTarget:action:
+ setEdges:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ reset
+ _edgeRegionSize
+ screenEdgePanRecognizerStateDidChange:
+ isRequiringLongPress
+ _shouldTryToBeginWithEvent:
+ edges
- dealloc
- initWithTarget:action:
- setEdges:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- reset
- _edgeRegionSize
- screenEdgePanRecognizerStateDidChange:
- isRequiringLongPress
- _shouldTryToBeginWithEvent:
- edges
@end
