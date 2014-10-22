@interface AVFigAssetInspector : AVAssetInspector
{
	pointer _figAsset;
	pointer _formatReader;
	long long _formatReaderOnce;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;
}

@end
