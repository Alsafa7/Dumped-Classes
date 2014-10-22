@interface PBController : UIViewController
{
	int _currentMode;
	pointer _album;
	id _effectsController;
	id _pageController;
	id _stackController;
	id _contentView;
	id _glassShelf;
	id _photoShelf;
	id _bottomBar;
	id _cameraButton;
	id _curtain;
	id _defaultStackView;
	id _currentActionSheet;
	id _dragSelectionHandler;
	id _selectedItems;
	id _cachedItems;
	id _tiles;
	id _highlightedTile;
	id _previousHighlightedTile;
	id _mediaStreamContext;
	struct _autoscrollPosition;
	id _autoscrollTimer;
	id _actionBlockMap;
	id _didEndScrollingBlock;
	id _didStopStackingBlock;
	bit[1] _enableAnimations;
	bit[1] _showStatusBar;
	bit[1] _isPortraitLayout;
	bit[1] _ignoreDidStopSession;
	id _keepDaemonAliveAssertion;
	id __captureBarButtonItems;
	id __selectionBarButtonItems;
	id __editBarButtonItems;
	id __filterBarButtonItem;
	id __shutterBarButtonItem;
	id __flipBarButtonItem;
	id __shareBarButtonItem;
	id __selectionLabelBarButtonItem;
	id __editBarButtonItem;
	id __deleteBarButtonItem;
	id __cancelBarButtonItem;
	id __filterButton;
	id __shutterButton;
	id __flipButton;
	id __selectionLabel;
	id __sharingPopoverController;
}

@end
