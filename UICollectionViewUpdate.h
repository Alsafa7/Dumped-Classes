@interface UICollectionViewUpdate : NSObject
{
	id _collectionView;
	id _updateItems;
	id _oldModel;
	id _newModel;
	struct _oldVisibleBounds;
	struct _newVisibleBounds;
	id _movedItems;
	id _movedSections;
	id _deletedSections;
	id _insertedSections;
	pointer _oldSectionMap;
	pointer _newSectionMap;
	pointer _oldGlobalItemMap;
	pointer _newGlobalItemMap;
	id _deletedSupplementaryIndexesSectionArray;
	id _insertedSupplementaryIndexesSectionArray;
	id _deletedSupplementaryTopLevelIndexesDict;
	id _insertedSupplementaryTopLevelIndexesDict;
	pointer _animatedItems;
	pointer _animatedHeaders;
	pointer _animatedFooters;
	id _viewAnimations;
	id _gaps;
}

+ dealloc
+ _computeSectionUpdates
+ _computeGaps
+ _computeItemUpdates
+ initWithCollectionView:updateItems:oldModel:newModel:oldVisibleBounds:newVisibleBounds:
+ _computeSupplementaryUpdates
+ newIndexPathForSupplementaryElementOfKind:oldIndexPath:
+ oldIndexPathForSupplementaryElementOfKind:newIndexPath:
- dealloc
- _computeSectionUpdates
- _computeGaps
- _computeItemUpdates
- initWithCollectionView:updateItems:oldModel:newModel:oldVisibleBounds:newVisibleBounds:
- _computeSupplementaryUpdates
- newIndexPathForSupplementaryElementOfKind:oldIndexPath:
- oldIndexPathForSupplementaryElementOfKind:newIndexPath:
@end
