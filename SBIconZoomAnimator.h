@interface SBIconZoomAnimator : SBIconAnimator
{
	id _listIconToViewMap;
	id _dockIconToViewMap;
	id _criticalIconNodeIdentifiers;
	id _iconListModel;
	id _iconListView;
	id _dockListView;
}

+ _prepareAnimation
+ iconViewForIcon:
+ _cleanupAnimation
+ dockListView
+ initWithFolderController:
+ setCriticalIconNodeIdentifiers:
+ enumerateIconsAndIconViewsWithHandler:
+ iconListView
+ node:didAddContainedNodeIdentifiers:
+ node:didRemoveContainedNodeIdentifiers:
+ _iconModelDidRelayout
+ _iconModelDidReload
+ _clearObservers
+ _setIconListView:
+ _setDockListView:
+ _invalidateAnimationForSignificantIconModelChangesForReason:
+ listIconCount
+ dockIconCount
+ criticalIconNodeIdentifiers
+ dealloc
- _prepareAnimation
- iconViewForIcon:
- _cleanupAnimation
- dockListView
- initWithFolderController:
- setCriticalIconNodeIdentifiers:
- enumerateIconsAndIconViewsWithHandler:
- iconListView
- node:didAddContainedNodeIdentifiers:
- node:didRemoveContainedNodeIdentifiers:
- _iconModelDidRelayout
- _iconModelDidReload
- _clearObservers
- _setIconListView:
- _setDockListView:
- _invalidateAnimationForSignificantIconModelChangesForReason:
- listIconCount
- dockIconCount
- criticalIconNodeIdentifiers
- dealloc
@end
