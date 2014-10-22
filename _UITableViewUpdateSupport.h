@interface _UITableViewUpdateSupport : NSObject
{
	long long oldSection;
	long long newSection;
	long long oldGlobalRow;
	long long newGlobalRow;
	id tableView;
	struct visibleRows;
	id updateItems;
	id oldRowData;
	id newRowData;
	struct oldRowRange;
	struct newRowRange;
	id rows;
	id movedRows;
	id movedSections;
	struct oldTableViewVisibleBounds;
	struct newTableViewVisibleBounds;
	struct tableViewVisibleBoundsUnion;
	double tableViewVisibleBoundsOffset;
	long long oldSectionCount;
	long long newSectionCount;
	pointer oldSectionMap;
	pointer newSectionMap;
	long long oldGlobalRowCount;
	long long newGlobalRowCount;
	pointer oldGlobalRowMap;
	pointer newGlobalRowMap;
	pointer animatedCells;
	pointer animatedHeaders;
	pointer animatedFooters;
	long long globalReorderingRow;
	id _context;
	id viewAnimations;
	id deletedSections;
	id insertedSections;
	id gaps;
}

+ _setupInsertAnimationForHeaderInSection:withTargetRect:forUpdateItem:
+ _setupInsertAnimationForFooterInSection:withTargetRect:forUpdateItem:
+ _addBottomShadowViewViewForViewAnimation:
+ _setupDeleteAnimationForHeaderInSection:withTargetRect:forUpdateItem:
+ _setupDeleteAnimationForFooterInSection:withTargetRect:forUpdateItem:
+ _isReloadSectionUpdate
+ _imageViewForView:
+ _validateAnimatedCells
+ _computeVisibleBounds
+ _computeSectionUpdates
+ _computeRowUpdates
+ _setupAnimationStructures
+ _computeGaps
+ _computeAutomaticAnimationTypes
+ _setupAnimationsForExistingVisibleCells
+ _setupAnimationForReorderingRow
+ _setupAnimationsForNewlyInsertedCells
+ _setupAnimationsForInsertedHeadersAndFooters
+ _setupAnimationsForDeletedCells
+ _setupAnimationsForDeletedHeadersAndFooters
+ _setupAnimationsForExistingOffscreenCells
+ _setupAnimationsForExistingHeadersAndFooters
+ _setupAnimationForTableHeader
+ _setupAnimationForTableFooter
+ dealloc
+ initWithTableView:updateItems:oldRowData:newRowData:oldRowRange:newRowRange:context:
+ _setupAnimations
- _setupInsertAnimationForHeaderInSection:withTargetRect:forUpdateItem:
- _setupInsertAnimationForFooterInSection:withTargetRect:forUpdateItem:
- _addBottomShadowViewViewForViewAnimation:
- _setupDeleteAnimationForHeaderInSection:withTargetRect:forUpdateItem:
- _setupDeleteAnimationForFooterInSection:withTargetRect:forUpdateItem:
- _isReloadSectionUpdate
- _imageViewForView:
- _validateAnimatedCells
- _computeVisibleBounds
- _computeSectionUpdates
- _computeRowUpdates
- _setupAnimationStructures
- _computeGaps
- _computeAutomaticAnimationTypes
- _setupAnimationsForExistingVisibleCells
- _setupAnimationForReorderingRow
- _setupAnimationsForNewlyInsertedCells
- _setupAnimationsForInsertedHeadersAndFooters
- _setupAnimationsForDeletedCells
- _setupAnimationsForDeletedHeadersAndFooters
- _setupAnimationsForExistingOffscreenCells
- _setupAnimationsForExistingHeadersAndFooters
- _setupAnimationForTableHeader
- _setupAnimationForTableFooter
- dealloc
- initWithTableView:updateItems:oldRowData:newRowData:oldRowRange:newRowRange:context:
- _setupAnimations
@end
