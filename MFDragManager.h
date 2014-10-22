@interface MFDragManager : NSObject
{
	id _dragContextValues;
	id _dragDestinations;
	id _dragSources;
	id _gestureRecognizersForSource;
	id _sourceForGestureRecognizer;
	id _draggedItem;
	id _draggedItemView;
	id _currentDestination;
	id _currentGestureBeingProcessed;
	id _dragWindow;
	id _gobblerGestureRecognizer;
	id _scrollTimer;
	struct _offsetCenterOfDraggedView;
	struct _previousGestureLocation;
	double _timeOfLastBigUpdate;
	struct _draggedItemOriginalFrame;
	BOOL _dragWasSuccessful;
	BOOL _scrollingForDrag;
}

+ _handleLongPress:
+ addDragContext:
+ removeDragContext:
+ cancelCurrentDragOperation
+ enumerateDragContextsUsingBlock:
+ _processGestureUpdate
+ _cleanUpAfterDragCompleted
+ _scrollViewIfNecessary
+ addDragDestination:
+ removeDragDestination:
+ addDragSource:
+ removeDragSource:
+ dealloc
+ init
+ gestureRecognizerShouldBegin:
+ _gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:
- _handleLongPress:
- addDragContext:
- removeDragContext:
- cancelCurrentDragOperation
- enumerateDragContextsUsingBlock:
- _processGestureUpdate
- _cleanUpAfterDragCompleted
- _scrollViewIfNecessary
- addDragDestination:
- removeDragDestination:
- addDragSource:
- removeDragSource:
- dealloc
- init
- gestureRecognizerShouldBegin:
- _gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:
@end
