@interface GEOCountryConfiguration : NSObject
{
	id _countryCode;
	id _oldProvidersInfo;
	id _oldCountryCode;
	BOOL _isObservingReachability;
	BOOL _isUpdating;
	BOOL _currentCountrySupportsTraffic;
	BOOL _currentCountrySupportsDirections;
}

+ dealloc
+ init
+ countryDefaultForKey:
+ setCountryCode:
+ _updatedSupportedFeatures
+ _useCountryCodeProvider:
+ _checkCountryCode
+ _checkCountryProviders
+ _registerNetworkDefaults
+ countryDefaultForKey:sourcePtr:
+ defaultForKey:defaultValue:sourcePtr:
+ currentCountrySupportsNavigation
+ currentCountrySupportsDirections
+ currentCountrySupportsTraffic
+ _reachabilityChanged:
+ countryCode
+ defaultForKey:defaultValue:
+ updateProvidersForCurrentCountry
+ resourceManifestManagerWillChangeActiveTileGroup:
+ resourceManifestManagerDidChangeActiveTileGroup:
- dealloc
- init
- countryDefaultForKey:
- setCountryCode:
- _updatedSupportedFeatures
- _useCountryCodeProvider:
- _checkCountryCode
- _checkCountryProviders
- _registerNetworkDefaults
- countryDefaultForKey:sourcePtr:
- defaultForKey:defaultValue:sourcePtr:
- currentCountrySupportsNavigation
- currentCountrySupportsDirections
- currentCountrySupportsTraffic
- _reachabilityChanged:
- countryCode
- defaultForKey:defaultValue:
- updateProvidersForCurrentCountry
- resourceManifestManagerWillChangeActiveTileGroup:
- resourceManifestManagerDidChangeActiveTileGroup:
@end
