@interface StackController : NSObject
{
	id _dataSource;
	id _delegate;
	usigned long long _transitionEdge;
	id _stackContainerView;
	struct _stackCenterOffset;
	id _defaultItem;
	id _defaultView;
	id _previousDefaultItem;
	id _itemsToDisplay;
	id _stackedItems;
	id _orderedItems;
	id _stackElementsByItem;
	id _loadRequestDatesByItem;
	id _revealGroup;
	double _lastDisplayedItemsUpdateRequest;
	double _lastTransitionToStackState;
	usigned long long _transactionCount;
	BOOL _updateNeeded;
	BOOL _loadingData;
	BOOL _waitingForTransitionToStackState;
	BOOL _animateStateTransitions;
	BOOL _isAnimating;
	BOOL _isTerminating;
	BOOL _isSuspended;
}

+ setTransitionEdge:
+ displayStackedViewsForItems:animated:
+ stackedViews
+ removeStackedViews:
+ stackDataSourceDidLoadItemData:
+ setAnimateStateTransitions:
+ setItemsToDisplay:
+ setNeedsToUpdateDisplayedItems:immediately:
+ updateDisplayedItems
+ animateStateTransitions
+ itemsToDisplay
+ addStackedItem:
+ defaultItem
+ stackElementForItem:createIfNeeded:
+ revealGroup
+ stackContainerView
+ keyForItem:
+ updateStackElements
+ updateStackElement:
+ updateIsAnimating
+ isAnyStackElementBeingStacked
+ isDataAvailableForStackElement:loadIfNeeded:
+ stackElement:delayForAnimation:
+ stackElementToReshowUnderneathStackElement:
+ removeStackElement:
+ orderedStackedElementsAboveStackElement:
+ transitionEdge
+ setRevealGroup:
+ updateOrientationForStackElement:
+ setNeedsToUpdateStackElements
+ stackedViewForItem:
+ orderedStackedElementsWithOrientation:
+ stackCenterOffset
+ stackIsTerminating
+ viewForStackElement:
+ stackElementOuterViewClass
+ stackElement:willRemoveView:
+ stackElement:currentStateDidChangeFrom:to:
+ stackElement:targetStateDidChangeFrom:to:
+ stackRevealGroupDidReveal:
+ stackRevealGroupDidFinish:
+ maxNumberOfOrientations
+ beginTransaction
+ endTransaction
+ dealloc
+ setDataSource:
+ setDelegate:
+ init
+ dataSource
+ delegate
+ isAnimating
+ setIsAnimating:
+ defaultView
- setTransitionEdge:
- displayStackedViewsForItems:animated:
- stackedViews
- removeStackedViews:
- stackDataSourceDidLoadItemData:
- setAnimateStateTransitions:
- setItemsToDisplay:
- setNeedsToUpdateDisplayedItems:immediately:
- updateDisplayedItems
- animateStateTransitions
- itemsToDisplay
- addStackedItem:
- defaultItem
- stackElementForItem:createIfNeeded:
- revealGroup
- stackContainerView
- keyForItem:
- updateStackElements
- updateStackElement:
- updateIsAnimating
- isAnyStackElementBeingStacked
- isDataAvailableForStackElement:loadIfNeeded:
- stackElement:delayForAnimation:
- stackElementToReshowUnderneathStackElement:
- removeStackElement:
- orderedStackedElementsAboveStackElement:
- transitionEdge
- setRevealGroup:
- updateOrientationForStackElement:
- setNeedsToUpdateStackElements
- stackedViewForItem:
- orderedStackedElementsWithOrientation:
- stackCenterOffset
- stackIsTerminating
- viewForStackElement:
- stackElementOuterViewClass
- stackElement:willRemoveView:
- stackElement:currentStateDidChangeFrom:to:
- stackElement:targetStateDidChangeFrom:to:
- stackRevealGroupDidReveal:
- stackRevealGroupDidFinish:
- maxNumberOfOrientations
- beginTransaction
- endTransaction
- dealloc
- setDataSource:
- setDelegate:
- init
- dataSource
- delegate
- isAnimating
- setIsAnimating:
- defaultView
@end
