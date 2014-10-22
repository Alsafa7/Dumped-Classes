@interface MusicPlaylistsDataSource : MusicQueryDataSource
{
	BOOL _hasParentPlaylist;
	id _cachedDurations;
	id _cachedCounts;
	id _cachedRepresentativeItems;
	id _cacheQueue;
}

+ _networkTypeDidChangeNotification:
+ dealloc
+ initWithQuery:entityType:
+ entityIsNowPlayingAtIndex:
+ entityCountFormat
+ showsEntityCountFooter
+ showsIndexBar
+ cachedDurationForEntityAtIndex:
+ cachedCountForEntityAtIndex:
+ cachedRepresentativeItemForEntityAtIndex:
+ invalidateWithInsertedObjects:updatedObjects:deletedObjects:
+ durationForEntityAtIndex:
+ countForEntityAtIndex:
+ representativeItemForEntityAtIndex:
+ canEditEntityAtIndex:
+ deleteEntityAtIndex:
+ .cxx_destruct
+ resetCaches
- _networkTypeDidChangeNotification:
- dealloc
- initWithQuery:entityType:
- entityIsNowPlayingAtIndex:
- entityCountFormat
- showsEntityCountFooter
- showsIndexBar
- cachedDurationForEntityAtIndex:
- cachedCountForEntityAtIndex:
- cachedRepresentativeItemForEntityAtIndex:
- invalidateWithInsertedObjects:updatedObjects:deletedObjects:
- durationForEntityAtIndex:
- countForEntityAtIndex:
- representativeItemForEntityAtIndex:
- canEditEntityAtIndex:
- deleteEntityAtIndex:
- .cxx_destruct
- resetCaches
@end
