@interface _UIModalItemsCoordinator : NSObject
{
	id _presentingSessionsMapTable;
	id _sessionForItemMapTable;
	id __viewControllerForSBAlerts;
	id __hostingWindowForSBAlerts;
	id __viewControllerForAlerts;
	id __hostingWindowForAlerts;
}

+ dealloc
+ init
+ noteOrientationChangingTo:animated:
+ _notifyDelegateModalItem:tappedButtonAtIndex:
+ _dismissItem:withTappedButtonIndex:animated:notifyDelegate:
+ _notifyDelegateWillDismissItem:withIndex:
+ _notifyDelegateDidDismissItem:withIndex:
+ _notifyDelegateWillPresentItem:
+ _notifyDelegateDidPresentItem:
+ _updateItem:animated:
+ presentingViewControllerForItem:create:
+ _addItemToStack:replacingItem:forPresentingViewController:
+ _presentItem:replacingItem:inViewController:animated:
+ _getRidOfViewControllerForSBAlerts
+ _getRidOfViewControllerForAlerts
+ _presentingViewControllerForSBCompatibility
+ _presentingViewControllerForAlertCompatibility
+ _presentingViewControllerForAlertCompatibilityCreateIfNeeded:
+ _showModalItemsForType:presentingViewController:undimSpotlightView:animated:
+ _hideModalItemsForType:presentingViewController:dimSpotlightView:animated:
+ _viewControllerForSBAlerts
+ set_viewControllerForSBAlerts:
+ set_hostingWindowForSBAlerts:
+ _hostingWindowForSBAlerts
+ _viewControllerForAlerts
+ set_viewControllerForAlerts:
+ set_hostingWindowForAlerts:
+ _hostingWindowForAlerts
+ sessionForItemMapTable
+ presentingSessionsMapTable
+ _showNextModalItemIfNecessaryAfterHidingItem:showingItem:animate:
+ _notifyDissmissedItem:
+ setPresentingSessionsMapTable:
+ setSessionForItemMapTable:
+ _presentingSessionForViewController:ofItemsType:
+ _rootViewControllerForModalItem:
+ hostingViewControllerForViewController:andModalItem:create:
+ _hidePresentingSessionForModalItem:keepDimmingView:animated:
+ hideForSpringBoardAlert:
+ showAfterSpringBoardAlert:
- dealloc
- init
- noteOrientationChangingTo:animated:
- _notifyDelegateModalItem:tappedButtonAtIndex:
- _dismissItem:withTappedButtonIndex:animated:notifyDelegate:
- _notifyDelegateWillDismissItem:withIndex:
- _notifyDelegateDidDismissItem:withIndex:
- _notifyDelegateWillPresentItem:
- _notifyDelegateDidPresentItem:
- _updateItem:animated:
- presentingViewControllerForItem:create:
- _addItemToStack:replacingItem:forPresentingViewController:
- _presentItem:replacingItem:inViewController:animated:
- _getRidOfViewControllerForSBAlerts
- _getRidOfViewControllerForAlerts
- _presentingViewControllerForSBCompatibility
- _presentingViewControllerForAlertCompatibility
- _presentingViewControllerForAlertCompatibilityCreateIfNeeded:
- _showModalItemsForType:presentingViewController:undimSpotlightView:animated:
- _hideModalItemsForType:presentingViewController:dimSpotlightView:animated:
- _viewControllerForSBAlerts
- set_viewControllerForSBAlerts:
- set_hostingWindowForSBAlerts:
- _hostingWindowForSBAlerts
- _viewControllerForAlerts
- set_viewControllerForAlerts:
- set_hostingWindowForAlerts:
- _hostingWindowForAlerts
- sessionForItemMapTable
- presentingSessionsMapTable
- _showNextModalItemIfNecessaryAfterHidingItem:showingItem:animate:
- _notifyDissmissedItem:
- setPresentingSessionsMapTable:
- setSessionForItemMapTable:
- _presentingSessionForViewController:ofItemsType:
- _rootViewControllerForModalItem:
- hostingViewControllerForViewController:andModalItem:create:
- _hidePresentingSessionForModalItem:keepDimmingView:animated:
- hideForSpringBoardAlert:
- showAfterSpringBoardAlert:
@end
