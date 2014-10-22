@interface UICollectionViewData : NSObject
{
	id _collectionView;
	id _layout;
	id _screenPageMap;
	pointer _globalItems;
	id _supplementaryLayoutAttributes;
	id _decorationLayoutAttributes;
	id _invalidatedSupplementaryViews;
	struct _validLayoutRect;
	long long _numItems;
	long long _numSections;
	pointer _sectionItemCounts;
	long long _lastSectionTestedForNumberOfItemsBeforeSection;
	long long _lastResultForNumberOfItemsBeforeSection;
	struct _contentSize;
	struct _collectionViewDataFlags;
	id _clonedLayoutAttributes;
}

@end
