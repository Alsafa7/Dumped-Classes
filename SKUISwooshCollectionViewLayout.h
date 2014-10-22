@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout
{
	id _backgroundColor;
	BOOL _snapsToItemBoundaries;
	BOOL _snapsToItemCenters;
}

+ setBackgroundColor:
+ backgroundColor
+ init
+ layoutAttributesForElementsInRect:
+ targetContentOffsetForProposedContentOffset:withScrollingVelocity:
+ setSnapsToItemBoundaries:
+ snapsToItemBoundaries
+ snapsToItemCenters
+ setSnapsToItemCenters:
+ .cxx_destruct
- setBackgroundColor:
- backgroundColor
- init
- layoutAttributesForElementsInRect:
- targetContentOffsetForProposedContentOffset:withScrollingVelocity:
- setSnapsToItemBoundaries:
- snapsToItemBoundaries
- snapsToItemCenters
- setSnapsToItemCenters:
- .cxx_destruct
@end
