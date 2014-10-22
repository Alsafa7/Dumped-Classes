@interface PLIndexMapper : NSObject
{
	id _dataSource;
}

+ backingIndexForIndex:
+ initWithDataSource:
+ applyContainerChangeNotification:changeTypes:toFilteredIndexes:
+ indexForBackingIndex:
+ backingIndexesForIndexes:
+ indexesForBackingIndexes:
- backingIndexForIndex:
- initWithDataSource:
- applyContainerChangeNotification:changeTypes:toFilteredIndexes:
- indexForBackingIndex:
- backingIndexesForIndexes:
- indexesForBackingIndexes:
@end
