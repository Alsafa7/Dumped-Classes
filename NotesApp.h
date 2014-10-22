@interface NotesApp : UIApplication
{
	id _window;
	id _mainViewController;
	id _navigationController;
	id _noteContext;
	bit[1] _isLaunching;
	bit[1] _isTransitioningToNotesList;
	bit[1] _ignoreSelectionChange;
	bit[1] _isBackgrounding;
	bit[1] _shouldHandleExternalChangeOnResume;
	bit[1] _refreshIsPendingForStoresList;
	bit[1] _refreshIsPendingForAllNotes;
	id _collectionIDsPendingRefresh;
}

+ startScrollListTest:
+ startScrollNoteTest:
+ startShowNoteTest:
+ _showNote
+ _showNoteList
+ didShowNote
+ didShowList
+ didChangeOrientation:
+ finishedTest:extraResults:
+ failedTest:
+ runTest:options:
+ displayNotesList:
+ listController
+ _saveState
+ _cancelAllPendingRefreshes
+ notesChangedExternally:
+ refreshOrphanedAccountsIfNeeded
+ refreshNotesIfNeededForCollection:
+ refreshStoresListIfNeeded
+ ignoreSelectionChange:
+ configureNavigationBar:
+ _configureBarLetterpress:
+ noteNavigationSupportsSwiping
+ localeChanged:
+ addOrRemoveAccountsController
+ accountsController
+ noteAtIndex:
+ refreshDatesAndTimes
+ _displayNotesList:
+ displayNotesList:animated:
+ _unmarkRefreshAsPendingForCollectionWithId:
+ _refreshIsPendingForCollectionWithId:
+ _markRefreshAsPendingForCollectionWithId:
+ _performRefreshIfNeededForCollectionWithId:
+ _unmarkRefreshAsPendingForStoresList
+ _refreshIsPendingForStoresList
+ _markRefreshAsPendingForStoresList
+ _performRefreshIfNeededForStoresList
+ _performRefreshIfNeededForOrphanedAccounts
+ _updateLetterpressRendering
+ updateViewsForListController
+ updateViewsForDisplayController
+ addNote
+ isLaunching
+ isIgnoringSelectionChange
+ notesDisplayController:didDisplayNote:
+ displayNote:highlightOnly:
+ mainViewController
+ dealloc
+ application:openURL:sourceApplication:annotation:
+ applicationSignificantTimeChange:
+ applicationDidEnterBackground:
+ applicationWillEnterForeground:
+ application:didFinishLaunchingWithOptions:
+ applicationWillSuspendForEventsOnly
+ applicationWillTerminate
+ nameOfDefaultImageToUpdateAtSuspension
+ openURL:
+ prepareForDefaultImageSnapshotForScreen:
+ contentView
+ navigationController
+ displayController
+ noteContext
+ .cxx_destruct
+ timeZoneChanged:
- startScrollListTest:
- startScrollNoteTest:
- startShowNoteTest:
- _showNote
- _showNoteList
- didShowNote
- didShowList
- didChangeOrientation:
- finishedTest:extraResults:
- failedTest:
- runTest:options:
- displayNotesList:
- listController
- _saveState
- _cancelAllPendingRefreshes
- notesChangedExternally:
- refreshOrphanedAccountsIfNeeded
- refreshNotesIfNeededForCollection:
- refreshStoresListIfNeeded
- ignoreSelectionChange:
- configureNavigationBar:
- _configureBarLetterpress:
- noteNavigationSupportsSwiping
- localeChanged:
- addOrRemoveAccountsController
- accountsController
- noteAtIndex:
- refreshDatesAndTimes
- _displayNotesList:
- displayNotesList:animated:
- _unmarkRefreshAsPendingForCollectionWithId:
- _refreshIsPendingForCollectionWithId:
- _markRefreshAsPendingForCollectionWithId:
- _performRefreshIfNeededForCollectionWithId:
- _unmarkRefreshAsPendingForStoresList
- _refreshIsPendingForStoresList
- _markRefreshAsPendingForStoresList
- _performRefreshIfNeededForStoresList
- _performRefreshIfNeededForOrphanedAccounts
- _updateLetterpressRendering
- updateViewsForListController
- updateViewsForDisplayController
- addNote
- isLaunching
- isIgnoringSelectionChange
- notesDisplayController:didDisplayNote:
- displayNote:highlightOnly:
- mainViewController
- dealloc
- application:openURL:sourceApplication:annotation:
- applicationSignificantTimeChange:
- applicationDidEnterBackground:
- applicationWillEnterForeground:
- application:didFinishLaunchingWithOptions:
- applicationWillSuspendForEventsOnly
- applicationWillTerminate
- nameOfDefaultImageToUpdateAtSuspension
- openURL:
- prepareForDefaultImageSnapshotForScreen:
- contentView
- navigationController
- displayController
- noteContext
- .cxx_destruct
- timeZoneChanged:
@end