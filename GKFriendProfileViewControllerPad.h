@interface GKFriendProfileViewControllerPad : GKPlayerProfileCollectionViewController
{
	BOOL _readyToFloatIn;
	id _gamesBubble;
	id _pointsBubble;
	id _friendsBubble;
	id _lastPlayer;
	usigned long long _previousSelectedSegmentIndex;
	id _bubbleAnimatorView;
	id _rotationUnlockBlock;
	id _segmentedHeaderView;
}

@end
