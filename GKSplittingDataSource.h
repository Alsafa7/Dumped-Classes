@interface GKSplittingDataSource : GKCollectionViewDataSource
{
	id _underlyingDataSource;
	id _sectionToSectionInfo;
}

+ refreshContentsForDataType:userInfo:updateNotifier:
+ configureDataSource
+ setUnderlyingDataSource:
+ addSectionWithTitle:sortDescriptors:
+ itemsForSection:
+ filteredItemsForRawItems:
+ itemAtIndexPath:
+ removeItemAtIndexPath:
+ _gkDescriptionWithChildren:
+ sectionInfoForSection:
+ setItems:forSection:
+ setFilterPredicate:forSection:
+ setSortDescriptors:forSection:
+ removeSection:
+ removeAllSections
+ titleForSection:
+ collectionViewDidBecomeInactive:
+ indexPathsForItem:
+ underlyingDataSource
+ sectionToSectionInfo
+ setSectionToSectionInfo:
+ dealloc
+ init
+ collectionView:numberOfItemsInSection:
+ numberOfSectionsInCollectionView:
+ sectionCount
- refreshContentsForDataType:userInfo:updateNotifier:
- configureDataSource
- setUnderlyingDataSource:
- addSectionWithTitle:sortDescriptors:
- itemsForSection:
- filteredItemsForRawItems:
- itemAtIndexPath:
- removeItemAtIndexPath:
- _gkDescriptionWithChildren:
- sectionInfoForSection:
- setItems:forSection:
- setFilterPredicate:forSection:
- setSortDescriptors:forSection:
- removeSection:
- removeAllSections
- titleForSection:
- collectionViewDidBecomeInactive:
- indexPathsForItem:
- underlyingDataSource
- sectionToSectionInfo
- setSectionToSectionInfo:
- dealloc
- init
- collectionView:numberOfItemsInSection:
- numberOfSectionsInCollectionView:
- sectionCount
@end
