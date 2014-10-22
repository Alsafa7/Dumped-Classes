@interface ChunkedGridLayout : UICollectionViewLayout
{
	long long _rowsPerChunk;
	long long _columnsPerChunk;
	int _scrollDirection;
	int _fillFirstDirection;
	int _updatesMovementAllowed;
	int _boundsChangeMovementAllowed;
	id _delegate;
	struct _itemSize;
	struct _currentBoundsSize;
	id _sectionFrames;
	id _allItemFrames;
	id _cachedAttributes;
	id _previousCachedAttributes;
	id _finalAttributes;
	id _initialAttributes;
}

+ chunkIndexForItemAtIndexPath:
+ setRowsPerChunk:
+ setColumnsPerChunk:
+ columnsPerChunk
+ rowsPerChunk
+ setFillFirstDirection:
+ setUpdatesMovementAllowed:
+ setBoundsChangeMovementAllowed:
+ resetAllFramesWithInvalidation:
+ calculateAllFrames
+ indexPathsForElementsInRect:
+ calculateAnimationLayoutAttributesWithMovementAllowed:updates:
+ fillFirstDirection
+ updatesMovementAllowed
+ boundsChangeMovementAllowed
+ dealloc
+ setDelegate:
+ init
+ debugDescription
+ delegate
+ setScrollDirection:
+ collectionViewContentSize
+ layoutAttributesForItemAtIndexPath:
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ shouldInvalidateLayoutForBoundsChange:
+ prepareForAnimatedBoundsChange:
+ finalLayoutAttributesForDisappearingItemAtIndexPath:
+ initialLayoutAttributesForAppearingItemAtIndexPath:
+ finalizeAnimatedBoundsChange
+ prepareForCollectionViewUpdates:
+ finalizeCollectionViewUpdates
+ scrollDirection
+ frameForItemAtIndexPath:
+ frameForSection:
- chunkIndexForItemAtIndexPath:
- setRowsPerChunk:
- setColumnsPerChunk:
- columnsPerChunk
- rowsPerChunk
- setFillFirstDirection:
- setUpdatesMovementAllowed:
- setBoundsChangeMovementAllowed:
- resetAllFramesWithInvalidation:
- calculateAllFrames
- indexPathsForElementsInRect:
- calculateAnimationLayoutAttributesWithMovementAllowed:updates:
- fillFirstDirection
- updatesMovementAllowed
- boundsChangeMovementAllowed
- dealloc
- setDelegate:
- init
- debugDescription
- delegate
- setScrollDirection:
- collectionViewContentSize
- layoutAttributesForItemAtIndexPath:
- prepareLayout
- layoutAttributesForElementsInRect:
- shouldInvalidateLayoutForBoundsChange:
- prepareForAnimatedBoundsChange:
- finalLayoutAttributesForDisappearingItemAtIndexPath:
- initialLayoutAttributesForAppearingItemAtIndexPath:
- finalizeAnimatedBoundsChange
- prepareForCollectionViewUpdates:
- finalizeCollectionViewUpdates
- scrollDirection
- frameForItemAtIndexPath:
- frameForSection:
@end
