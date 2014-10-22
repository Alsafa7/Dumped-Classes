@interface _CDSnapshot_FetchingAlbum_ : _CDSnapshot
{
	short kind;
	int cachedCount;
	int cachedPhotosCount;
	int cachedVideosCount;
	int pendingItemsCount;
	int pendingItemsType;
	id importSessionID;
	id title;
	id uuid;
	id slideshowSettings;
	id fetchRequest;
	id fetchedAssets;
	id fetchedAssetsSet;
	id keyAsset;
	id secondaryKeyAsset;
	id tertiaryKeyAsset;
	id albumLists;
}

@end
