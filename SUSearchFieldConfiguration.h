@interface SUSearchFieldConfiguration : NSObject
{
	id _cancelString;
	id _clientInterface;
	pointer _hintURLs;
	long long _location;
	id _placeholder;
	BOOL _rootViewOnly;
	pointer _searchURLs;
	id _userDefaultsKey;
	double _width;
	double _widthLandscape;
	double _widthPortrait;
}

+ dealloc
+ init
+ initWithDictionary:
+ copyWithZone:
+ width
+ location
+ initWithDictionary:clientInterface:
+ loadFromDictionary:
+ searchURLRequestPropertiesForNetworkType:
+ isRootViewOnly
+ _initWithClientInterface:
+ _urlRequestPropertiesForURLBagKey:networkType:
+ _setHintURLsFromDictionary:
+ _locationForString:
+ _setSearchURLsFromDictionary:
+ _newQueryStringDictionaryForNetworkType:
+ _newURLsDictionaryWithDictionary:
+ URLRequestPropertiesWithBaseURL:forNetworkType:
+ hintsURLRequestPropertiesForNetworkType:
+ widthForOrientation:
+ cancelString
+ placeholderString
+ userDefaultsKey
- dealloc
- init
- initWithDictionary:
- copyWithZone:
- width
- location
- initWithDictionary:clientInterface:
- loadFromDictionary:
- searchURLRequestPropertiesForNetworkType:
- isRootViewOnly
- _initWithClientInterface:
- _urlRequestPropertiesForURLBagKey:networkType:
- _setHintURLsFromDictionary:
- _locationForString:
- _setSearchURLsFromDictionary:
- _newQueryStringDictionaryForNetworkType:
- _newURLsDictionaryWithDictionary:
- URLRequestPropertiesWithBaseURL:forNetworkType:
- hintsURLRequestPropertiesForNetworkType:
- widthForOrientation:
- cancelString
- placeholderString
- userDefaultsKey
@end
