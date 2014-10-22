@interface CKTranscriptCollectionView : CKEditableCollectionView
{
	BOOL _ignoresContentOffsetChanges;
}

+ reloadData
+ setContentOffset:
+ setContentOffset:animated:
+ setContentInset:
+ setIgnoresContentOffsetChanges:
+ ignoresContentOffsetChanges
+ isFastAnimationAvailableForContentOffset
- reloadData
- setContentOffset:
- setContentOffset:animated:
- setContentInset:
- setIgnoresContentOffsetChanges:
- ignoresContentOffsetChanges
- isFastAnimationAvailableForContentOffset
@end
