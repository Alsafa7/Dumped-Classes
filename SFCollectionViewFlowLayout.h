@interface SFCollectionViewFlowLayout : UICollectionViewFlowLayout
{
	id _insertedIndexPaths;
	id _movedIndexPaths;
	id _deletedIndexPaths;
	id _handledIndexPaths;
}

+ init
+ finalLayoutAttributesForDisappearingItemAtIndexPath:
+ initialLayoutAttributesForAppearingItemAtIndexPath:
+ _animationForReusableView:toLayoutAttributes:type:
+ prepareForCollectionViewUpdates:
+ finalizeCollectionViewUpdates
+ _applyToLayoutAttributes:toView:
+ .cxx_destruct
- init
- finalLayoutAttributesForDisappearingItemAtIndexPath:
- initialLayoutAttributesForAppearingItemAtIndexPath:
- _animationForReusableView:toLayoutAttributes:type:
- prepareForCollectionViewUpdates:
- finalizeCollectionViewUpdates
- _applyToLayoutAttributes:toView:
- .cxx_destruct
@end
