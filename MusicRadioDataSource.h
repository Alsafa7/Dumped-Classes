@interface MusicRadioDataSource : MPUDataSource
{
	id _featuredStations;
	id _radioDataSource;
	id _stations;
	id _userStations;
}

+ initWithEntityType:
+ dealloc
+ entityIsNowPlayingAtIndex:
+ playbackContextForIndex:
+ invalidateCalculatedEntities
+ _prefetchStationArtwork
+ checkAcceptedTermsWithCompletionHandler:
+ optInWithActiveAccountWithCompletionHandler:
+ deauthenticateIfNecessary
+ refreshFeaturedStations
+ synchronizeStationsAsAutomaticUpdate:withCompletionHandler:
+ radioDataSourceDidDeauthenticate:
+ radioDataSourceDidInvalidate:
+ radioDataSourceShouldPrefetchStationArtwork:
+ editingTypeForEntityAtIndex:
+ userStations
+ featuredStations
+ .cxx_destruct
+ entities
- initWithEntityType:
- dealloc
- entityIsNowPlayingAtIndex:
- playbackContextForIndex:
- invalidateCalculatedEntities
- _prefetchStationArtwork
- checkAcceptedTermsWithCompletionHandler:
- optInWithActiveAccountWithCompletionHandler:
- deauthenticateIfNecessary
- refreshFeaturedStations
- synchronizeStationsAsAutomaticUpdate:withCompletionHandler:
- radioDataSourceDidDeauthenticate:
- radioDataSourceDidInvalidate:
- radioDataSourceShouldPrefetchStationArtwork:
- editingTypeForEntityAtIndex:
- userStations
- featuredStations
- .cxx_destruct
- entities
@end
