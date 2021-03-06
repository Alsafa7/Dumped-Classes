@interface UICollectionViewTransitionLayout : UICollectionViewLayout
{
	id _fromLayout;
	id _toLayout;
	struct _fromVisibleBounds;
	struct _toVisibleBounds;
	struct _contentSize;
	BOOL _haveValidInfos;
	double _transitionProgress;
	id _transitionInformationsDict;
	id _currentLayoutInfos;
	BOOL _layoutIsValid;
	id _disappearingLayoutAttributes;
	id _appearingLayoutAttributes;
	double _accuracy;
}

+ dealloc
+ collectionViewContentSize
+ layoutAttributesForItemAtIndexPath:
+ invalidateLayout
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ layoutAttributesForSupplementaryViewOfKind:atIndexPath:
+ _oldVisibleBounds
+ _newVisibleBounds
+ _setCollectionView:
+ targetContentOffsetForProposedContentOffset:
+ layoutAttributesForDecorationViewOfKind:atIndexPath:
+ _prepareForTransitionToLayout:
+ _prepareForTransitionFromLayout:
+ setTransitionProgress:
+ _supportsAdvancedTransitionAnimations
+ _finalizeLayoutTransition
+ initWithCurrentLayout:nextLayout:
+ currentLayout
+ nextLayout
+ transitionProgress
+ interpolatedLayoutAttributesFromLayoutAttributes:toLayoutAttributes:progress:
+ updateValue:forAnimatedKey:
+ valueForAnimatedKey:
- dealloc
- collectionViewContentSize
- layoutAttributesForItemAtIndexPath:
- invalidateLayout
- prepareLayout
- layoutAttributesForElementsInRect:
- layoutAttributesForSupplementaryViewOfKind:atIndexPath:
- _oldVisibleBounds
- _newVisibleBounds
- _setCollectionView:
- targetContentOffsetForProposedContentOffset:
- layoutAttributesForDecorationViewOfKind:atIndexPath:
- _prepareForTransitionToLayout:
- _prepareForTransitionFromLayout:
- setTransitionProgress:
- _supportsAdvancedTransitionAnimations
- _finalizeLayoutTransition
- initWithCurrentLayout:nextLayout:
- currentLayout
- nextLayout
- transitionProgress
- interpolatedLayoutAttributesFromLayoutAttributes:toLayoutAttributes:progress:
- updateValue:forAnimatedKey:
- valueForAnimatedKey:
@end
