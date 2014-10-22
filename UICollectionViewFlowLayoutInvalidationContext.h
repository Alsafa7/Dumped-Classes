@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
	struct _flowLayoutInvalidationFlags;
}

+ init
+ setInvalidateFlowLayoutAttributes:
+ invalidateFlowLayoutAttributes
+ setInvalidateFlowLayoutDelegateMetrics:
+ invalidateFlowLayoutDelegateMetrics
- init
- setInvalidateFlowLayoutAttributes:
- invalidateFlowLayoutAttributes
- setInvalidateFlowLayoutDelegateMetrics:
- invalidateFlowLayoutDelegateMetrics
@end
