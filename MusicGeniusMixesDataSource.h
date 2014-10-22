@interface MusicGeniusMixesDataSource : MusicQueryDataSource
{
	id _mixes;
}

+ isEmpty
+ entityIsNowPlayingAtIndex:
+ playbackContextForIndex:
+ editingTypeForEntityAtIndex:
+ showsIndexBar
+ invalidateWithInsertedObjects:updatedObjects:deletedObjects:
+ deleteEntityAtIndex:
+ canSelectEntityAtIndex:
+ dataSourceFromEntityAtIndex:
+ indexOfEntity:
+ _updateQueryPredicatesAndOrdering
+ .cxx_destruct
+ entities
- isEmpty
- entityIsNowPlayingAtIndex:
- playbackContextForIndex:
- editingTypeForEntityAtIndex:
- showsIndexBar
- invalidateWithInsertedObjects:updatedObjects:deletedObjects:
- deleteEntityAtIndex:
- canSelectEntityAtIndex:
- dataSourceFromEntityAtIndex:
- indexOfEntity:
- _updateQueryPredicatesAndOrdering
- .cxx_destruct
- entities
@end
