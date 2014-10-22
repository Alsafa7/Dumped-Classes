@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout
{
	id _collectionView;
	long long _numberOfRows;
	long long _numberOfColumns;
	id _sectionCounts;
	struct _headerSize;
}

+ init
+ layoutAttributesForItemAtIndexPath:
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ layoutAttributesForSupplementaryViewOfKind:atIndexPath:
+ layoutAttributesForDecorationViewOfKind:atIndexPath:
+ _indexPathForGlobalIndex:
+ _globalIndexForIndexPath:
+ .cxx_destruct
- init
- layoutAttributesForItemAtIndexPath:
- prepareLayout
- layoutAttributesForElementsInRect:
- layoutAttributesForSupplementaryViewOfKind:atIndexPath:
- layoutAttributesForDecorationViewOfKind:atIndexPath:
- _indexPathForGlobalIndex:
- _globalIndexForIndexPath:
- .cxx_destruct
@end
