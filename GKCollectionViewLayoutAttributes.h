@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
	BOOL _allSectionItemsVisible;
	BOOL _isPinned;
	BOOL _isPartOfGlobalPinningGroup;
	BOOL _doesAbutLeftOfCollectionView;
	id _collectionView;
	double _unpinnedY;
	id _dataSource;
	id _sectionMetrics;
	id _supplementaryMetrics;
	usigned long long _currentVisibleItemCount;
	usigned long long _currentTotalItemCount;
	usigned long long _maxTotalItemCount;
	double _incrementalRevealTextOffset;
	usigned long long _gridLayoutLocation;
}

+ doesAbutLeftOfCollectionView
+ supplementaryMetrics
+ maxTotalItemCount
+ currentVisibleItemCount
+ sectionMetrics
+ incrementalRevealTextOffset
+ setIsPinned:
+ currentTotalItemCount
+ allSectionItemsVisible
+ setAllSectionItemsVisible:
+ setIsPartOfGlobalPinningGroup:
+ setUnpinnedY:
+ setSectionMetrics:
+ setSupplementaryMetrics:
+ setCurrentVisibleItemCount:
+ setCurrentTotalItemCount:
+ setMaxTotalItemCount:
+ setGridLayoutLocation:
+ setDoesAbutLeftOfCollectionView:
+ setIncrementalRevealTextOffset:
+ unpinnedY
+ isPartOfGlobalPinningGroup
+ gridLayoutLocation
+ dealloc
+ setDataSource:
+ init
+ isEqual:
+ hash
+ description
+ dataSource
+ copyWithZone:
+ isPinned
+ collectionView
+ setCollectionView:
- doesAbutLeftOfCollectionView
- supplementaryMetrics
- maxTotalItemCount
- currentVisibleItemCount
- sectionMetrics
- incrementalRevealTextOffset
- setIsPinned:
- currentTotalItemCount
- allSectionItemsVisible
- setAllSectionItemsVisible:
- setIsPartOfGlobalPinningGroup:
- setUnpinnedY:
- setSectionMetrics:
- setSupplementaryMetrics:
- setCurrentVisibleItemCount:
- setCurrentTotalItemCount:
- setMaxTotalItemCount:
- setGridLayoutLocation:
- setDoesAbutLeftOfCollectionView:
- setIncrementalRevealTextOffset:
- unpinnedY
- isPartOfGlobalPinningGroup
- gridLayoutLocation
- dealloc
- setDataSource:
- init
- isEqual:
- hash
- description
- dataSource
- copyWithZone:
- isPinned
- collectionView
- setCollectionView:
@end
