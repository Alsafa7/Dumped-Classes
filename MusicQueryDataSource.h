@interface MusicQueryDataSource : MPUCompletionQueryDataSource
{

}

+ dealloc
+ initWithQuery:entityType:
+ entityIsNowPlayingAtIndex:
+ playbackContextForIndex:
+ entityCountFormat
+ _updateQueryPredicatesAndOrdering
+ queryIsNowPlayingAtIndex:
+ _queryForNowPlayingComparisonAtIndex:
+ _defaultsDidChangeNotification
- dealloc
- initWithQuery:entityType:
- entityIsNowPlayingAtIndex:
- playbackContextForIndex:
- entityCountFormat
- _updateQueryPredicatesAndOrdering
- queryIsNowPlayingAtIndex:
- _queryForNowPlayingComparisonAtIndex:
- _defaultsDidChangeNotification
@end
