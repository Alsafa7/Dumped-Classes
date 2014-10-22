@interface UICollectionViewFlowLayout : UICollectionViewLayout
{
	struct _gridLayoutFlags;
	double _interitemSpacing;
	double _lineSpacing;
	struct _itemSize;
	struct _headerReferenceSize;
	struct _footerReferenceSize;
	struct _sectionInset;
	id _data;
	struct _currentLayoutSize;
	id _insertedItemsAttributesDict;
	id _insertedSectionHeadersAttributesDict;
	id _insertedSectionFootersAttributesDict;
	id _deletedItemsAttributesDict;
	id _deletedSectionHeadersAttributesDict;
	id _deletedSectionFootersAttributesDict;
	long long _scrollDirection;
	id _rowAlignmentsOptionsDictionary;
	struct _visibleBounds;
}

+ _setRowAlignmentsOptions:
+ _rowAlignmentOptions
+ finalizeCollectionViewUpdates
+ _fetchItemsInfo
+ _frameForHeaderInSection:usingData:
+ _frameForFooterInSection:usingData:
+ _frameForItemAtSection:andRow:usingData:
+ _updateDelegateFlags
+ _getSizingInfos
+ _updateItemsLayout
+ initialLayoutAttributesForInsertedItemAtIndexPath:
+ initialLayoutAttributesForHeaderInInsertedSection:
+ initialLayoutAttributesForFooterInInsertedSection:
+ finalLayoutAttributesForDeletedItemAtIndexPath:
+ finalLayoutAttributesForHeaderInDeletedSection:
+ finalLayoutAttributesForFooterInDeletedSection:
+ synchronizeLayout
+ _invalidateButKeepDelegateInfo
+ _invalidateButKeepAllInfo
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ setScrollDirection:
+ setMinimumInteritemSpacing:
+ setMinimumLineSpacing:
+ collectionViewContentSize
+ layoutAttributesForItemAtIndexPath:
+ indexPathForItemAtPoint:
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ layoutAttributesForSupplementaryViewOfKind:atIndexPath:
+ shouldInvalidateLayoutForBoundsChange:
+ invalidationContextForBoundsChange:
+ _layoutAttributesForItemsInRect:
+ invalidateLayoutWithContext:
+ layoutAttributesForHeaderInSection:usingData:
+ layoutAttributesForFooterInSection:usingData:
+ layoutAttributesForItemAtIndexPath:usingData:
+ itemSize
+ indexesForSectionHeadersInRect:usingData:
+ indexesForSectionFootersInRect:usingData:
+ indexPathsForItemsInRect:usingData:
+ indexesForSectionHeadersInRect:
+ indexesForSectionFootersInRect:
+ layoutAttributesForHeaderInSection:
+ layoutAttributesForFooterInSection:
+ scrollDirection
+ setItemSize:
+ setHeaderReferenceSize:
+ setFooterReferenceSize:
+ setSectionInset:
+ minimumLineSpacing
+ minimumInteritemSpacing
+ headerReferenceSize
+ footerReferenceSize
+ sectionInset
- _setRowAlignmentsOptions:
- _rowAlignmentOptions
- finalizeCollectionViewUpdates
- _fetchItemsInfo
- _frameForHeaderInSection:usingData:
- _frameForFooterInSection:usingData:
- _frameForItemAtSection:andRow:usingData:
- _updateDelegateFlags
- _getSizingInfos
- _updateItemsLayout
- initialLayoutAttributesForInsertedItemAtIndexPath:
- initialLayoutAttributesForHeaderInInsertedSection:
- initialLayoutAttributesForFooterInInsertedSection:
- finalLayoutAttributesForDeletedItemAtIndexPath:
- finalLayoutAttributesForHeaderInDeletedSection:
- finalLayoutAttributesForFooterInDeletedSection:
- synchronizeLayout
- _invalidateButKeepDelegateInfo
- _invalidateButKeepAllInfo
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- setScrollDirection:
- setMinimumInteritemSpacing:
- setMinimumLineSpacing:
- collectionViewContentSize
- layoutAttributesForItemAtIndexPath:
- indexPathForItemAtPoint:
- prepareLayout
- layoutAttributesForElementsInRect:
- layoutAttributesForSupplementaryViewOfKind:atIndexPath:
- shouldInvalidateLayoutForBoundsChange:
- invalidationContextForBoundsChange:
- _layoutAttributesForItemsInRect:
- invalidateLayoutWithContext:
- layoutAttributesForHeaderInSection:usingData:
- layoutAttributesForFooterInSection:usingData:
- layoutAttributesForItemAtIndexPath:usingData:
- itemSize
- indexesForSectionHeadersInRect:usingData:
- indexesForSectionFootersInRect:usingData:
- indexPathsForItemsInRect:usingData:
- indexesForSectionHeadersInRect:
- indexesForSectionFootersInRect:
- layoutAttributesForHeaderInSection:
- layoutAttributesForFooterInSection:
- scrollDirection
- setItemSize:
- setHeaderReferenceSize:
- setFooterReferenceSize:
- setSectionInset:
- minimumLineSpacing
- minimumInteritemSpacing
- headerReferenceSize
- footerReferenceSize
- sectionInset
@end