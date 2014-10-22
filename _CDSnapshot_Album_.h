@interface _CDSnapshot_Album_ : _CDSnapshot
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
	id keyAsset;
	id secondaryKeyAsset;
	id tertiaryKeyAsset;
	id albumLists;
	id assets;
}

@end
