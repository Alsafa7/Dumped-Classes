@interface SBIconModel : NSObject
{
	id _desiredIconState;
	id _desiredIconStateFlattened;
	id _leafIconsByIdentifier;
	id _hiddenIconTags;
	id _visibleIconTags;
	BOOL _tagsHaveBeenSet;
	id _rootFolder;
	id _newsstandIcon;
	id _store;
	id _applicationDataSource;
	id _delegate;
	BOOL _allowsSaving;
}

+ localeChanged
+ newsstandIcon
+ newsstandFolder
+ applicationIconForDisplayIdentifier:
+ isIconVisible:
+ rootFolder
+ clearDesiredIconState
+ addBookmarkIconForWebClip:
+ leafIconForWebClipIdentifier:
+ leafIconForIdentifier:
+ addDownloadingIconForBundleID:withIdentifier:
+ downloadingIconForIdentifier:
+ exportState:
+ exportPendingState:includeMissingIcons:
+ exportFlattenedState:includeMissingIcons:
+ removeIcon:
+ visibleIconIdentifiers
+ hasDesiredIconState
+ saveIconState
+ indexPathForNewIcon:isDesignatedLocation:replaceExistingIconAtIndexPath:
+ initWithStore:applicationDataSource:
+ loadAllIcons
+ setVisibilityOfIconsWithVisibleTags:hiddenTags:
+ importState:
+ leafIcons
+ _postIconVisibilityChangedNotificationShowing:hiding:
+ _canAddDownloadingIconForBundleID:
+ removeIconForIdentifier:
+ addIconForApplication:
+ addDownloadingIconForDownload:
+ removeApplicationIconForDownloadingIcon:
+ _addNewsstandIcon
+ _iconState
+ iconState
+ deleteIconState
+ _addNewIconToDesignatedLocation:
+ _indexPathForIdentifier:inListsRepresentation:
+ _indexPathForIdentifier:inListRepresentation:
+ _flattenIconState:
+ indexPathForIconInPlatformState:
+ _indexPathForFirstFreeNewsstandSlot
+ _replaceAppIconsWithDownloadingIcons:
+ _flattenIconListState:intoArray:
+ newsstandFolderFromIconState:
+ _replaceAppIconsWithDownloadingIcons
+ _createIconLists
+ clearDesiredIconStateIfPossible
+ _saveDesiredIconState
+ setLeafIconsByIdentifier:
+ _iTunesIconListForList:preApex:forPending:
+ _iTunesIconListsForLists:preApex:forPending:
+ forecastedLayoutForIconState:includeMissingIcons:
+ _iTunesIconCellForCell:preApex:forPending:
+ _iTunesDictionaryForLeafIcon:
+ _iTunesDictionaryForDownloadingIcon:
+ _iTunesDictionaryForLeafIdentifier:
+ createFolderIconForFolderType:
+ leafIconForWebClip:
+ _applicationIcons
+ expectedIconForDisplayIdentifier:
+ _newsstandIconIdentifiersFromIconState:
+ leafIconsByIdentifier
+ allowsSaving
+ setAllowsSaving:
+ applicationDataSource
+ store
+ dealloc
+ setDelegate:
+ delegate
+ layout
+ addIcon:
- localeChanged
- newsstandIcon
- newsstandFolder
- applicationIconForDisplayIdentifier:
- isIconVisible:
- rootFolder
- clearDesiredIconState
- addBookmarkIconForWebClip:
- leafIconForWebClipIdentifier:
- leafIconForIdentifier:
- addDownloadingIconForBundleID:withIdentifier:
- downloadingIconForIdentifier:
- exportState:
- exportPendingState:includeMissingIcons:
- exportFlattenedState:includeMissingIcons:
- removeIcon:
- visibleIconIdentifiers
- hasDesiredIconState
- saveIconState
- indexPathForNewIcon:isDesignatedLocation:replaceExistingIconAtIndexPath:
- initWithStore:applicationDataSource:
- loadAllIcons
- setVisibilityOfIconsWithVisibleTags:hiddenTags:
- importState:
- leafIcons
- _postIconVisibilityChangedNotificationShowing:hiding:
- _canAddDownloadingIconForBundleID:
- removeIconForIdentifier:
- addIconForApplication:
- addDownloadingIconForDownload:
- removeApplicationIconForDownloadingIcon:
- _addNewsstandIcon
- _iconState
- iconState
- deleteIconState
- _addNewIconToDesignatedLocation:
- _indexPathForIdentifier:inListsRepresentation:
- _indexPathForIdentifier:inListRepresentation:
- _flattenIconState:
- indexPathForIconInPlatformState:
- _indexPathForFirstFreeNewsstandSlot
- _replaceAppIconsWithDownloadingIcons:
- _flattenIconListState:intoArray:
- newsstandFolderFromIconState:
- _replaceAppIconsWithDownloadingIcons
- _createIconLists
- clearDesiredIconStateIfPossible
- _saveDesiredIconState
- setLeafIconsByIdentifier:
- _iTunesIconListForList:preApex:forPending:
- _iTunesIconListsForLists:preApex:forPending:
- forecastedLayoutForIconState:includeMissingIcons:
- _iTunesIconCellForCell:preApex:forPending:
- _iTunesDictionaryForLeafIcon:
- _iTunesDictionaryForDownloadingIcon:
- _iTunesDictionaryForLeafIdentifier:
- createFolderIconForFolderType:
- leafIconForWebClip:
- _applicationIcons
- expectedIconForDisplayIdentifier:
- _newsstandIconIdentifiersFromIconState:
- leafIconsByIdentifier
- allowsSaving
- setAllowsSaving:
- applicationDataSource
- store
- dealloc
- setDelegate:
- delegate
- layout
- addIcon:
@end
