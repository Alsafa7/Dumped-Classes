@interface SFAirDropActivityViewController : UIViewController
{
	long long _attachmentCount;
	id _sessionID;
	long long _sharedItemsRequestID;
	id _titleLabel;
	id _airDropIconView;
	id _airDropIconLeftConstraint;
	id _airDropActiveIconView;
	id _airDropActiveIconLeftConstraint;
	id _noWifiLabel;
	id _noWifiRightConstraint;
	id _instructionsLabel;
	id _instructionsRightConstraint;
	id _collectionView;
	id _flowLayout;
	id _browser;
	id _progressToken;
	id _personToProgress;
	id _personToStoredTransferFinalState;
	id _personToSharedItemsRequestID;
	id _sharedItemsRequestIDToPreviewPhoto;
	id _wirelessSettings;
	id _cachedSharedItems;
	BOOL _itemsRequested;
	BOOL _itemsReady;
	id _operationQueue;
	id _objectChanges;
	id _assetsLibrary;
	long long _generatedPreviews;
	BOOL _sharedItemsAvailable;
	BOOL _otherActivityViewPresented;
	BOOL _darkStyleOnLegacyApp;
	id _delegate;
}

@end
