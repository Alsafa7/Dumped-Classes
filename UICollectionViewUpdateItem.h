@interface UICollectionViewUpdateItem : NSObject
{
	id _initialIndexPath;
	id _finalIndexPath;
	long long _updateAction;
	id _gap;
}

+ dealloc
+ description
+ inverseCompareIndexPaths:
+ compareIndexPaths:
+ _indexPath
+ initWithOldIndexPath:newIndexPath:
+ _action
+ _gap
+ _newIndexPath
+ _isSectionOperation
+ _setGap:
+ initWithAction:forIndexPath:
+ initWithInitialIndexPath:finalIndexPath:updateAction:
+ _setNewIndexPath:
+ updateAction
+ indexPathBeforeUpdate
+ indexPathAfterUpdate
- dealloc
- description
- inverseCompareIndexPaths:
- compareIndexPaths:
- _indexPath
- initWithOldIndexPath:newIndexPath:
- _action
- _gap
- _newIndexPath
- _isSectionOperation
- _setGap:
- initWithAction:forIndexPath:
- initWithInitialIndexPath:finalIndexPath:updateAction:
- _setNewIndexPath:
- updateAction
- indexPathBeforeUpdate
- indexPathAfterUpdate
@end
