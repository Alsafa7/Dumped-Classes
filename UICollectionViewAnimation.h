@interface UICollectionViewAnimation : NSObject
{
	id _view;
	id _finalLayoutAttributes;
	double _startFraction;
	double _endFraction;
	int _viewType;
	id _completionHandlers;
	id _startupHandlers;
	id _animationBlock;
	struct _collectionViewAnimationFlags;
}

+ dealloc
+ description
+ view
+ startFraction
+ endFraction
+ animateFromCurrentPosition
+ start
+ initWithView:viewType:finalLayoutAttributes:startFraction:endFraction:animateFromCurrentPostion:deleteAfterAnimation:customAnimations:
+ deleteAfterAnimation
+ setRasterizeAfterAnimation:
+ rasterizeAfterAnimation
+ setResetRasterizationAfterAnimation:
+ resetRasterizationAfterAnimation
+ addCompletionHandler:
+ addStartupHandler:
+ viewType
+ finalLayoutAttributes
- dealloc
- description
- view
- startFraction
- endFraction
- animateFromCurrentPosition
- start
- initWithView:viewType:finalLayoutAttributes:startFraction:endFraction:animateFromCurrentPostion:deleteAfterAnimation:customAnimations:
- deleteAfterAnimation
- setRasterizeAfterAnimation:
- rasterizeAfterAnimation
- setResetRasterizationAfterAnimation:
- resetRasterizationAfterAnimation
- addCompletionHandler:
- addStartupHandler:
- viewType
- finalLayoutAttributes
@end
