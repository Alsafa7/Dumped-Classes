@interface SBNewsstandFolderView : SBFolderView
{
	id _storeButton;
	id _emptyImageButton;
	id _backgroundView;
}

+ initWithFolder:orientation:
+ node:didAddContainedNodeIdentifiers:
+ node:didRemoveContainedNodeIdentifiers:
+ _storeButtonTapped:
+ _updateEmptyState
+ _newsstandStoreAvailabilityDidChangeNotification:
+ _showsTitle
+ _titleFontSize
+ dealloc
+ setFolder:
+ _layoutSubviews
+ setLegibilitySettings:
- initWithFolder:orientation:
- node:didAddContainedNodeIdentifiers:
- node:didRemoveContainedNodeIdentifiers:
- _storeButtonTapped:
- _updateEmptyState
- _newsstandStoreAvailabilityDidChangeNotification:
- _showsTitle
- _titleFontSize
- dealloc
- setFolder:
- _layoutSubviews
- setLegibilitySettings:
@end
