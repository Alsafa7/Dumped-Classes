@interface CKTranscriptCollectionViewController : CKViewController
{
	BOOL _updatesAnimatingContentOffset;
	BOOL _peeking;
	BOOL _initialLoad;
	id _transcriptDispatchQueue;
	id _conversation;
	id _transcriptData;
	id _collectionView;
	id _delegate;
	id _gradientReferenceView;
	id _updateAnimationGroup;
	id _hiddenItems;
	id _loggingTapGestureRecognizer;
	id _alertHandler;
	double _transcriptDrawerWidth;
	struct _peekSampleTranslation;
}

@end
