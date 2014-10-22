@interface GKLeaderboardUpdate : NSObject
{
	id _insertedIndexes;
	id _updatedIndexes;
	id _removedIndexes;
}

+ indexPathsForIndexes:section:
+ removedIndexes
+ setRemovedIndexes:
+ dealloc
+ init
+ description
+ insertedIndexes
+ updatedIndexes
+ setInsertedIndexes:
+ setUpdatedIndexes:
- indexPathsForIndexes:section:
- removedIndexes
- setRemovedIndexes:
- dealloc
- init
- description
- insertedIndexes
- updatedIndexes
- setInsertedIndexes:
- setUpdatedIndexes:
@end
