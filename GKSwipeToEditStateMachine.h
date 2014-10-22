@interface GKSwipeToEditStateMachine : GKStateMachine
{
	int _debounce;
	id _collectionView;
	id _gkDataSource;
	id _editModeCancelRecognizer;
	id _panGestureRecognizer;
	id _editingCell;
	double _startTrackingX;
	id _openAnimation;
}

+ initWithCollectionView:
+ gkDataSource
+ trackedIndexPath
+ segmentedSectionDataSource:inSection:didSelectDataSourceWithIndex:
+ shutActionPaneForEditingCellAnimated:
+ setGkDataSource:
+ handleCancelTap:
+ xPositionForTranslation:
+ setOpenAnimation:
+ setEditingCell:
+ didEnterEditingState
+ didExitEditingState
+ didExitNothingState
+ didEnterNothingState
+ didEnterAnimatingShutState
+ didEnterAnimatingOpenState
+ didExitAnimatingOpenState
+ editModeCancelRecognizer
+ setEditModeCancelRecognizer:
+ setPanGestureRecognizer:
+ editingCell
+ startTrackingX
+ setStartTrackingX:
+ openAnimation
+ dealloc
+ setDelegate:
+ gestureRecognizerShouldBegin:
+ handlePan:
+ panGestureRecognizer
+ viewDidDisappear:
+ collectionView
+ setCollectionView:
- initWithCollectionView:
- gkDataSource
- trackedIndexPath
- segmentedSectionDataSource:inSection:didSelectDataSourceWithIndex:
- shutActionPaneForEditingCellAnimated:
- setGkDataSource:
- handleCancelTap:
- xPositionForTranslation:
- setOpenAnimation:
- setEditingCell:
- didEnterEditingState
- didExitEditingState
- didExitNothingState
- didEnterNothingState
- didEnterAnimatingShutState
- didEnterAnimatingOpenState
- didExitAnimatingOpenState
- editModeCancelRecognizer
- setEditModeCancelRecognizer:
- setPanGestureRecognizer:
- editingCell
- startTrackingX
- setStartTrackingX:
- openAnimation
- dealloc
- setDelegate:
- gestureRecognizerShouldBegin:
- handlePan:
- panGestureRecognizer
- viewDidDisappear:
- collectionView
- setCollectionView:
@end
