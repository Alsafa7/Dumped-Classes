@interface UICollectionReusableView : UIView
{
	id _layoutAttributes;
	id _reuseIdentifier;
	id _collectionView;
	struct _reusableViewFlags;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ reuseIdentifier
+ prepareForReuse
+ applyLayoutAttributes:
+ _collectionView
+ _setBaseLayoutAttributes:
+ _disableRasterizeInAnimations
+ _setLayoutAttributes:
+ _setCollectionView:
+ _isInUpdateAnimation
+ _layoutAttributes
+ _wasDequeued
+ _markAsDequeued
+ willTransitionFromLayout:toLayout:
+ _addUpdateAnimation
+ didTransitionFromLayout:toLayout:
+ _clearUpdateAnimation
+ _setReuseIdentifier:
- dealloc
- initWithCoder:
- encodeWithCoder:
- reuseIdentifier
- prepareForReuse
- applyLayoutAttributes:
- _collectionView
- _setBaseLayoutAttributes:
- _disableRasterizeInAnimations
- _setLayoutAttributes:
- _setCollectionView:
- _isInUpdateAnimation
- _layoutAttributes
- _wasDequeued
- _markAsDequeued
- willTransitionFromLayout:toLayout:
- _addUpdateAnimation
- didTransitionFromLayout:toLayout:
- _clearUpdateAnimation
- _setReuseIdentifier:
@end
