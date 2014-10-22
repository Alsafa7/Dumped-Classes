@interface MusicPlaylistSongsDataSource : MusicQueryDataSource
{
	id _mediaLibrary;
}

+ playlist
+ _mediaLibraryDynamicPropertiesDidChangeNotification:
+ moveItemFromIndex:toIndex:
+ dealloc
+ initWithQuery:entityType:
+ removeEntityAtIndex:
+ entityIsSeedItemAtIndex:
+ entityCountFormat
+ showsEntityCountFooter
+ .cxx_destruct
- playlist
- _mediaLibraryDynamicPropertiesDidChangeNotification:
- moveItemFromIndex:toIndex:
- dealloc
- initWithQuery:entityType:
- removeEntityAtIndex:
- entityIsSeedItemAtIndex:
- entityCountFormat
- showsEntityCountFooter
- .cxx_destruct
@end
