@interface SBFolder : NSObject
{
	id _displayName;
	id _defaultDisplayName;
	BOOL _open;
	id _icon;
	BOOL _cancelable;
	id _addedIcons;
	id _removedIcons;
	id _coalesceChangesRequests;
	id _nodeObservers;
	id _folderObservers;
	id _lists;
}

+ isNewsstandFolder
+ visibleIcons
+ canAddIcon
+ startCoalescingContentChangesWithRequestID:
+ stopCoalescingContentChangesForRequestID:
+ indexPathForIcon:
+ folderContainingIndexPath:relativeIndexPath:
+ iconAtIndexPath:
+ listContainingLeafIconWithIdentifier:
+ placeIcon:atIndexPath:
+ performCascadingIconInsertion:indexPath:
+ removeIconAtIndexPath:
+ compactIconsAndLists
+ removeEmptyList:
+ setCancelable:
+ nodeIdentifier
+ indexPathForNodeIdentifier:
+ containsNodeIdentifier:
+ iconsOfClass:
+ setIsOpen:
+ leafIcons
+ allIcons
+ matchesRepresentation:
+ resetWithRepresentation:model:leafIdentifiersAdded:
+ purgeLists
+ indexPathForIconWithIdentifier:
+ compactLists
+ indexPathForFirstFreeSlotAvoidingFirstList:
+ insertIcon:atIndexPath:
+ isIconStateDirty
+ markIconStateClean
+ addNodeObserver:
+ addFolderObserver:
+ removeNodeObserver:
+ removeFolderObserver:
+ purgeIconImages
+ containedNodeIdentifiers
+ indexPathsForContainedNodeIdentifier:prefixPath:
+ nodesAlongIndexPath:consumedIndexes:
+ nodeDescriptionWithPrefix:
+ indexOfList:
+ addEmptyList
+ _listsForCompaction
+ _removeLists:
+ _createNewListWithIcon:
+ _addList:
+ listModelClass
+ performCascadingIconInsertion:listIndex:iconIndex:
+ listViewClass
+ stopCoalescingContentChangesForRequestID:forceReload:
+ _addListsForRepresentation:model:leafIdentifiersAdded:
+ _setDisplayNameFromRepresentation:
+ _isCoalescingContentChanges
+ iconList:didRemoveIcon:
+ iconList:didAddIcon:
+ list:didAddContainedNodeIdentifiers:
+ list:didRemoveContainedNodeIdentifiers:
+ iconList:didReplaceIcon:withIcon:
+ controllerClass
+ shouldRemoveWhenEmpty
+ canRemoveIcons
+ canEditDisplayName
+ folderIcons
+ listContainingIcon:
+ indexPathForIcon:includingPlaceholders:
+ isFull
+ isOpen
+ icon
+ dealloc
+ init
+ representation
+ isEmpty
+ setIcon:
+ displayName
+ listAtIndex:
+ folderType
+ addIcon:
+ listCount
+ setDisplayName:
+ lists
+ isCancelable
- isNewsstandFolder
- visibleIcons
- canAddIcon
- startCoalescingContentChangesWithRequestID:
- stopCoalescingContentChangesForRequestID:
- indexPathForIcon:
- folderContainingIndexPath:relativeIndexPath:
- iconAtIndexPath:
- listContainingLeafIconWithIdentifier:
- placeIcon:atIndexPath:
- performCascadingIconInsertion:indexPath:
- removeIconAtIndexPath:
- compactIconsAndLists
- removeEmptyList:
- setCancelable:
- nodeIdentifier
- indexPathForNodeIdentifier:
- containsNodeIdentifier:
- iconsOfClass:
- setIsOpen:
- leafIcons
- allIcons
- matchesRepresentation:
- resetWithRepresentation:model:leafIdentifiersAdded:
- purgeLists
- indexPathForIconWithIdentifier:
- compactLists
- indexPathForFirstFreeSlotAvoidingFirstList:
- insertIcon:atIndexPath:
- isIconStateDirty
- markIconStateClean
- addNodeObserver:
- addFolderObserver:
- removeNodeObserver:
- removeFolderObserver:
- purgeIconImages
- containedNodeIdentifiers
- indexPathsForContainedNodeIdentifier:prefixPath:
- nodesAlongIndexPath:consumedIndexes:
- nodeDescriptionWithPrefix:
- indexOfList:
- addEmptyList
- _listsForCompaction
- _removeLists:
- _createNewListWithIcon:
- _addList:
- listModelClass
- performCascadingIconInsertion:listIndex:iconIndex:
- listViewClass
- stopCoalescingContentChangesForRequestID:forceReload:
- _addListsForRepresentation:model:leafIdentifiersAdded:
- _setDisplayNameFromRepresentation:
- _isCoalescingContentChanges
- iconList:didRemoveIcon:
- iconList:didAddIcon:
- list:didAddContainedNodeIdentifiers:
- list:didRemoveContainedNodeIdentifiers:
- iconList:didReplaceIcon:withIcon:
- controllerClass
- shouldRemoveWhenEmpty
- canRemoveIcons
- canEditDisplayName
- folderIcons
- listContainingIcon:
- indexPathForIcon:includingPlaceholders:
- isFull
- isOpen
- icon
- dealloc
- init
- representation
- isEmpty
- setIcon:
- displayName
- listAtIndex:
- folderType
- addIcon:
- listCount
- setDisplayName:
- lists
- isCancelable
@end
