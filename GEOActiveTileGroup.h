@interface GEOActiveTileGroup : PBCodable
{
	id _addressCorrectionInitURL;
	id _addressCorrectionUpdateURL;
	id _attributions;
	id _autocompleteURL;
	id _batchReverseGeocoderURL;
	id _directionsURL;
	id _etaURL;
	id _forwardGeocoderURL;
	unsigned int _identifier;
	id _locationShiftURL;
	id _mapMatchURL;
	id _polyLocationShiftURL;
	id _problemStatusURL;
	id _problemSubmissionURL;
	id _regionalResourceRegions;
	id _regionalResourceTiles;
	id _regionalResourcesURL;
	id _releaseInfo;
	id _resources;
	id _resourcesURL;
	id _reverseGeocoderURL;
	id _searchAttributionManifestURL;
	id _searchURL;
	id _simpleETAURL;
	id _tileSets;
	id _uniqueIdentifier;
}

+ activeTileSetForKey:
+ multiTileURLStringForTileKey:useStatusCodes:
+ languageForTileKey:
+ _resetBestLanguages
+ localizationURLStringForTileKey:
+ timeToLiveForTileKey:
+ isAvailableForTileKey:
+ supportsTileStyle:size:scale:
+ _activeTileSetForStyle:size:scale:
+ activeTileSetForTileType:scale:
+ flatRegionalResourceTilesForMapRect:
+ regionalResourceRegionsForMapRect:
+ hasRegionalResourcesForTileKey:
+ largestRegionalResourceZoomLevelContainingTileKey:
+ regionalResourceKeysForTileKey:
+ versionForTileKey:
+ baseURLStringForTileKey:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ identifier
+ dictionaryRepresentation
+ setIdentifier:
+ uniqueIdentifier
+ setUniqueIdentifier:
+ addAttribution:
+ clearAttributions
+ attributionAtIndex:
+ setTileSets:
+ addTileSet:
+ tileSetsCount
+ clearTileSets
+ tileSetAtIndex:
+ tileSets
+ forwardGeocoderURL
+ reverseGeocoderURL
+ batchReverseGeocoderURL
+ setResourcesURL:
+ setSearchURL:
+ setSearchAttributionManifestURL:
+ setAutocompleteURL:
+ setReverseGeocoderURL:
+ setForwardGeocoderURL:
+ setDirectionsURL:
+ setEtaURL:
+ setLocationShiftURL:
+ setReleaseInfo:
+ setBatchReverseGeocoderURL:
+ setMapMatchURL:
+ setSimpleETAURL:
+ setAddressCorrectionInitURL:
+ setAddressCorrectionUpdateURL:
+ setPolyLocationShiftURL:
+ setProblemSubmissionURL:
+ setProblemStatusURL:
+ hasResourcesURL
+ resourcesURL
+ hasSearchURL
+ searchURL
+ hasSearchAttributionManifestURL
+ searchAttributionManifestURL
+ hasAutocompleteURL
+ autocompleteURL
+ hasReverseGeocoderURL
+ hasForwardGeocoderURL
+ hasDirectionsURL
+ directionsURL
+ hasEtaURL
+ etaURL
+ hasLocationShiftURL
+ locationShiftURL
+ hasReleaseInfo
+ releaseInfo
+ hasBatchReverseGeocoderURL
+ hasMapMatchURL
+ mapMatchURL
+ hasSimpleETAURL
+ simpleETAURL
+ hasAddressCorrectionInitURL
+ addressCorrectionInitURL
+ hasAddressCorrectionUpdateURL
+ addressCorrectionUpdateURL
+ hasPolyLocationShiftURL
+ polyLocationShiftURL
+ hasProblemSubmissionURL
+ problemSubmissionURL
+ hasProblemStatusURL
+ problemStatusURL
+ resourcesCount
+ regionalResourceTiles
+ regionalResourceRegions
+ regionalResourceTilesCount
+ addResource:
+ addRegionalResourceRegion:
+ addRegionalResourceTile:
+ regionalResourceRegionsCount
+ setRegionalResourcesURL:
+ setRegionalResourceTiles:
+ setRegionalResourceRegions:
+ clearResources
+ resourceAtIndex:
+ hasUniqueIdentifier
+ clearRegionalResourceTiles
+ regionalResourceTileAtIndex:
+ clearRegionalResourceRegions
+ regionalResourceRegionAtIndex:
+ hasRegionalResourcesURL
+ regionalResourcesURL
+ resources
+ setResources:
+ readFrom:
+ attributions
+ writeTo:
+ copyTo:
+ attributionsCount
+ setAttributions:
- activeTileSetForKey:
- multiTileURLStringForTileKey:useStatusCodes:
- languageForTileKey:
- _resetBestLanguages
- localizationURLStringForTileKey:
- timeToLiveForTileKey:
- isAvailableForTileKey:
- supportsTileStyle:size:scale:
- _activeTileSetForStyle:size:scale:
- activeTileSetForTileType:scale:
- flatRegionalResourceTilesForMapRect:
- regionalResourceRegionsForMapRect:
- hasRegionalResourcesForTileKey:
- largestRegionalResourceZoomLevelContainingTileKey:
- regionalResourceKeysForTileKey:
- versionForTileKey:
- baseURLStringForTileKey:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- identifier
- dictionaryRepresentation
- setIdentifier:
- uniqueIdentifier
- setUniqueIdentifier:
- addAttribution:
- clearAttributions
- attributionAtIndex:
- setTileSets:
- addTileSet:
- tileSetsCount
- clearTileSets
- tileSetAtIndex:
- tileSets
- forwardGeocoderURL
- reverseGeocoderURL
- batchReverseGeocoderURL
- setResourcesURL:
- setSearchURL:
- setSearchAttributionManifestURL:
- setAutocompleteURL:
- setReverseGeocoderURL:
- setForwardGeocoderURL:
- setDirectionsURL:
- setEtaURL:
- setLocationShiftURL:
- setReleaseInfo:
- setBatchReverseGeocoderURL:
- setMapMatchURL:
- setSimpleETAURL:
- setAddressCorrectionInitURL:
- setAddressCorrectionUpdateURL:
- setPolyLocationShiftURL:
- setProblemSubmissionURL:
- setProblemStatusURL:
- hasResourcesURL
- resourcesURL
- hasSearchURL
- searchURL
- hasSearchAttributionManifestURL
- searchAttributionManifestURL
- hasAutocompleteURL
- autocompleteURL
- hasReverseGeocoderURL
- hasForwardGeocoderURL
- hasDirectionsURL
- directionsURL
- hasEtaURL
- etaURL
- hasLocationShiftURL
- locationShiftURL
- hasReleaseInfo
- releaseInfo
- hasBatchReverseGeocoderURL
- hasMapMatchURL
- mapMatchURL
- hasSimpleETAURL
- simpleETAURL
- hasAddressCorrectionInitURL
- addressCorrectionInitURL
- hasAddressCorrectionUpdateURL
- addressCorrectionUpdateURL
- hasPolyLocationShiftURL
- polyLocationShiftURL
- hasProblemSubmissionURL
- problemSubmissionURL
- hasProblemStatusURL
- problemStatusURL
- resourcesCount
- regionalResourceTiles
- regionalResourceRegions
- regionalResourceTilesCount
- addResource:
- addRegionalResourceRegion:
- addRegionalResourceTile:
- regionalResourceRegionsCount
- setRegionalResourcesURL:
- setRegionalResourceTiles:
- setRegionalResourceRegions:
- clearResources
- resourceAtIndex:
- hasUniqueIdentifier
- clearRegionalResourceTiles
- regionalResourceTileAtIndex:
- clearRegionalResourceRegions
- regionalResourceRegionAtIndex:
- hasRegionalResourcesURL
- regionalResourcesURL
- resources
- setResources:
- readFrom:
- attributions
- writeTo:
- copyTo:
- attributionsCount
- setAttributions:
@end
