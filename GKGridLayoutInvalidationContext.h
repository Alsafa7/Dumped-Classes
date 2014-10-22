@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
	BOOL _invalidateIncrementalReveal;
	BOOL _invalidateBoundsChange;
	BOOL _invalidatePlaceholderVisibility;
}

+ invalidateIncrementalReveal
+ setInvalidateIncrementalReveal:
+ invalidateBoundsChange
+ setInvalidateBoundsChange:
+ invalidatePlaceholderVisibility
+ setInvalidatePlaceholderVisibility:
- invalidateIncrementalReveal
- setInvalidateIncrementalReveal:
- invalidateBoundsChange
- setInvalidateBoundsChange:
- invalidatePlaceholderVisibility
- setInvalidatePlaceholderVisibility:
@end
