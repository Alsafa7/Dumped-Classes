@interface SBIconController : NSObject
{
	id _visibleTags;
	id _hiddenTags;
	id _iconModel;
	id _contentView;
	BOOL _needsRelayout;
	BOOL _sendITunesNotification;
	id _bbObserver;
	id _displayIDsWithBadgingDisabled;
	id _rootFolderController;
	id _closingFolder;
	id _folderToOpenWhenScrollingEnds;
	BOOL _rotating;
	long long _orientation;
	id _launchingIcon;
	id _highlightedIcon;
	id _iconToReveal;
	id _grabbedIcon;
	id _recipientIcon;
	id _droppedIconsAnimatingIntoPlace;
	id _droppedIconsInToOrOutOfFolder;
	usigned long long _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
	id _lastTouchedIcon;
	BOOL _isEditing;
	BOOL _animatingFolder;
	BOOL _grabbedIconIsDraggedOutOfFolderView;
	id _grabbedIconSourceFolder;
	BOOL _allowsUninstall;
	double _iconAlpha;
	double _oldScrollOffset;
	id _lastTouch;
	id _folderSpringloadTimer;
	BOOL _keyboardIsRotating;
	BOOL _isAnimatingFolderCreation;
	BOOL _isAnimatingForUnscatter;
	id _folderIconLoadingBackgroundQueue;
	usigned long long _maxIconViewsInHierarchy;
	usigned long long _maxNewsstandItemViewsInHierarchy;
	id _iconColorSettings;
	BOOL _showingSearch;
	id _legibilitySettings;
	id _indexPathToResetTo;
}

@end
