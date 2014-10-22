@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout
{
	BOOL _holdingBoundsInvalidation;
	BOOL _useInitialLayoutAttributesForRotation;
	BOOL _easingUp;
	BOOL _hasContactPhotos;
	double _anchorYPosition;
	id _layoutAttributes;
	id _displayLink;
	double _prevTimestamp;
	double _contactPhotoDrawerInset;
	struct _targetContentOffset;
	struct _contentSize;
	struct _visibleBounds;
}

+ dealloc
+ reloadData
+ visibleBounds
+ contentSize
+ setContentSize:
+ setDisplayLink:
+ displayLink
+ collectionViewContentSize
+ layoutAttributesForItemAtIndexPath:
+ setVisibleBounds:
+ invalidateDisplayLink
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ layoutAttributesForSupplementaryViewOfKind:atIndexPath:
+ shouldInvalidateLayoutForBoundsChange:
+ finalLayoutAttributesForDisappearingItemAtIndexPath:
+ initialLayoutAttributesForAppearingItemAtIndexPath:
+ layoutAttributesForDecorationViewOfKind:atIndexPath:
+ setUseInitialLayoutAttributesForRotation:
+ setAnchorYPosition:
+ setTargetContentOffset:
+ setHoldingBoundsInvalidation:
+ layoutAttributes
+ prevTimestamp
+ setEasingUp:
+ setPrevTimestamp:
+ updateContentSize
+ isUsingInitialLayoutAttributesForRotation
+ isHoldingBoundsInvalidation
+ setLayoutAttributes:
+ setHasContactPhotos:
+ hasContactPhotos
+ bezierPointForPercentage:anchor1:anchor2:control1:control2:
+ anchorYPosition
+ targetContentOffset
+ easingUp
+ contactPhotoDrawerInset
+ setContactPhotoDrawerInset:
+ _layoutAttributesForItemAtIndexPath:
- dealloc
- reloadData
- visibleBounds
- contentSize
- setContentSize:
- setDisplayLink:
- displayLink
- collectionViewContentSize
- layoutAttributesForItemAtIndexPath:
- setVisibleBounds:
- invalidateDisplayLink
- prepareLayout
- layoutAttributesForElementsInRect:
- layoutAttributesForSupplementaryViewOfKind:atIndexPath:
- shouldInvalidateLayoutForBoundsChange:
- finalLayoutAttributesForDisappearingItemAtIndexPath:
- initialLayoutAttributesForAppearingItemAtIndexPath:
- layoutAttributesForDecorationViewOfKind:atIndexPath:
- setUseInitialLayoutAttributesForRotation:
- setAnchorYPosition:
- setTargetContentOffset:
- setHoldingBoundsInvalidation:
- layoutAttributes
- prevTimestamp
- setEasingUp:
- setPrevTimestamp:
- updateContentSize
- isUsingInitialLayoutAttributesForRotation
- isHoldingBoundsInvalidation
- setLayoutAttributes:
- setHasContactPhotos:
- hasContactPhotos
- bezierPointForPercentage:anchor1:anchor2:control1:control2:
- anchorYPosition
- targetContentOffset
- easingUp
- contactPhotoDrawerInset
- setContactPhotoDrawerInset:
- _layoutAttributesForItemAtIndexPath:
@end