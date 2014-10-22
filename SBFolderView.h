@interface SBFolderView : UIView
{
	id _iconListViews;
	id _rotatingIconList;
	long long _minVisibleListViewIndex;
	long long _maxVisibleListViewIndex;
	long long _minAnimatingListViewIndex;
	long long _maxAnimatingListViewIndex;
	long long _disableUpdatingCurrentIconListCount;
	long long _firstDisplayedColumnOnCurrentList;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	id _viewMap;
	id _scrollFrames;
	usigned long long _scrollFrameCount;
	BOOL _isN90;
	id _pageControl;
	id _scrollView;
	id _titleTextField;
	id _scalingView;
	BOOL _isEditing;
	BOOL _isScrolling;
	long long _currentPageIndex;
	double _statusBarHeight;
	id _delegate;
	id _folder;
	long long _orientation;
	id _legibilitySettings;
}

+ viewMap
+ initWithFolder:orientation:
+ setCurrentPageIndex:animated:
+ iconListViewAtIndex:
+ layoutIconLists:domino:forceRelayout:
+ iconListViews
+ currentIconListView
+ iconListViewForTouch:
+ noteUserIsInteractingWithIcons
+ borrowScalingView
+ returnScalingView
+ fadeContentForMagnificationFraction:
+ pageControl:didRecieveTouchInDirection:
+ _showsTitle
+ _titleFontSize
+ willAnimate
+ didAnimate
+ doesPageContainIconListView:
+ resetIconListViews
+ _offsetToCenterPageControlInSpaceForPageControl
+ _frameForScalingView
+ locationCountsAsInsideFolder:
+ fadeContentForMinificationFraction:
+ initWithFolder:orientation:viewMap:
+ _disableUserInteractionBeforeSignificantAnimation
+ _enableUserInteractionAfterSignificantAnimation
+ iconListViewAtPoint:
+ tearDownListViews
+ _purgeListViews
+ _scrollViewThinksItsScrolling
+ _setAnimatedScrolling:
+ updateIconListIndexAndVisibility
+ _setCurrentPageIndex:deferringPageControlUpdate:
+ _isValidPageIndex:
+ _scrollOffsetForPageAtIndex:
+ _setCurrentPageIndex:
+ _updateIconListFrames
+ _minusPageCount
+ _pageWidth
+ _scrollOffsetForFirstListView
+ _iconListViewAtIndex:
+ _createIconListViewForList:
+ _addIconListView:
+ updateIconListIndexAndVisibility:
+ _addIconListViewsForModels:
+ _iconListViewForList:
+ _resetIconListViews
+ _updateIconListViews
+ _shouldDisableUpdatingCurrentIconList
+ _pageIndexForOffset:
+ lowestVisibleIconListIndexAndColumn:columnsOnScreen:totalLists:columnsPerList:
+ _pushDisableUpdateCurrentIconListCount
+ _currentIconListView
+ _popDisableUpdateCurrentIconListCount
+ _setFolderName:
+ iconScrollViewWillCancelTouchTracking:
+ iconScrollViewDidCancelTouchTracking:
+ iconScrollView:willSetContentOffset:
+ scalingViewFrame
+ _hasMinusPages
+ _removeIconListView:
+ updateIconListViews
+ noteUserHasGrabbedIcon:
+ prepareToOpen
+ cleanupAfterClosing
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ setNeedsLayout
+ layoutSubviews
+ scrollViewDidScroll:
+ scrollViewWillBeginDragging:
+ scrollViewDidEndDragging:willDecelerate:
+ scrollViewDidEndDecelerating:
+ scrollViewDidEndScrollingAnimation:
+ delegate
+ orientation
+ statusBarHeight
+ willMoveToWindow:
+ willRotateToInterfaceOrientation:
+ willAnimateRotationToInterfaceOrientation:
+ isEditing
+ setEditing:animated:
+ textFieldShouldBeginEditing:
+ textFieldDidEndEditing:
+ textFieldShouldReturn:
+ didRotateFromInterfaceOrientation:
+ setOrientation:
+ scrollView
+ isScrolling
+ currentPageIndex
+ setStatusBarHeight:
+ setFolder:
+ folder
+ legibilitySettings
+ _layoutSubviews
+ _updateEditingStateAnimated:
+ setLegibilitySettings:
+ setScrolling:
- viewMap
- initWithFolder:orientation:
- setCurrentPageIndex:animated:
- iconListViewAtIndex:
- layoutIconLists:domino:forceRelayout:
- iconListViews
- currentIconListView
- iconListViewForTouch:
- noteUserIsInteractingWithIcons
- borrowScalingView
- returnScalingView
- fadeContentForMagnificationFraction:
- pageControl:didRecieveTouchInDirection:
- _showsTitle
- _titleFontSize
- willAnimate
- didAnimate
- doesPageContainIconListView:
- resetIconListViews
- _offsetToCenterPageControlInSpaceForPageControl
- _frameForScalingView
- locationCountsAsInsideFolder:
- fadeContentForMinificationFraction:
- initWithFolder:orientation:viewMap:
- _disableUserInteractionBeforeSignificantAnimation
- _enableUserInteractionAfterSignificantAnimation
- iconListViewAtPoint:
- tearDownListViews
- _purgeListViews
- _scrollViewThinksItsScrolling
- _setAnimatedScrolling:
- updateIconListIndexAndVisibility
- _setCurrentPageIndex:deferringPageControlUpdate:
- _isValidPageIndex:
- _scrollOffsetForPageAtIndex:
- _setCurrentPageIndex:
- _updateIconListFrames
- _minusPageCount
- _pageWidth
- _scrollOffsetForFirstListView
- _iconListViewAtIndex:
- _createIconListViewForList:
- _addIconListView:
- updateIconListIndexAndVisibility:
- _addIconListViewsForModels:
- _iconListViewForList:
- _resetIconListViews
- _updateIconListViews
- _shouldDisableUpdatingCurrentIconList
- _pageIndexForOffset:
- lowestVisibleIconListIndexAndColumn:columnsOnScreen:totalLists:columnsPerList:
- _pushDisableUpdateCurrentIconListCount
- _currentIconListView
- _popDisableUpdateCurrentIconListCount
- _setFolderName:
- iconScrollViewWillCancelTouchTracking:
- iconScrollViewDidCancelTouchTracking:
- iconScrollView:willSetContentOffset:
- scalingViewFrame
- _hasMinusPages
- _removeIconListView:
- updateIconListViews
- noteUserHasGrabbedIcon:
- prepareToOpen
- cleanupAfterClosing
- dealloc
- setDelegate:
- hitTest:withEvent:
- setNeedsLayout
- layoutSubviews
- scrollViewDidScroll:
- scrollViewWillBeginDragging:
- scrollViewDidEndDragging:willDecelerate:
- scrollViewDidEndDecelerating:
- scrollViewDidEndScrollingAnimation:
- delegate
- orientation
- statusBarHeight
- willMoveToWindow:
- willRotateToInterfaceOrientation:
- willAnimateRotationToInterfaceOrientation:
- isEditing
- setEditing:animated:
- textFieldShouldBeginEditing:
- textFieldDidEndEditing:
- textFieldShouldReturn:
- didRotateFromInterfaceOrientation:
- setOrientation:
- scrollView
- isScrolling
- currentPageIndex
- setStatusBarHeight:
- setFolder:
- folder
- legibilitySettings
- _layoutSubviews
- _updateEditingStateAnimated:
- setLegibilitySettings:
- setScrolling:
@end
