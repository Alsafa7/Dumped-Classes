@interface UICollectionViewLayoutInvalidationContext : NSObject
{
	id _invalidatedSupplementaryViews;
	id _updateItems;
	struct _invalidationContextFlags;
}

+ dealloc
+ _updateItems
+ _setInvalidateDataSourceCounts:
+ _setInvalidateEverything:
+ _setUpdateItems:
+ _invalidatedSupplementaryViews
+ invalidateEverything
+ _setInvalidatedSupplementaryViews:
+ _invalidateSupplementaryElementsOfKind:atIndexPaths:
+ invalidateDataSourceCounts
- dealloc
- _updateItems
- _setInvalidateDataSourceCounts:
- _setInvalidateEverything:
- _setUpdateItems:
- _invalidatedSupplementaryViews
- invalidateEverything
- _setInvalidatedSupplementaryViews:
- _invalidateSupplementaryElementsOfKind:atIndexPaths:
- invalidateDataSourceCounts
@end
