@interface ALCityManager : NSObject
{
	pointer _db;
	pointer _localizedDb;
	id _citySearchMatcher;
}

+ allCities
+ citiesMatchingName:
+ defaultCityForTimeZone:
+ localeWithCode:
+ dealloc
+ init
+ citiesMatchingQualifier:
+ localizeCities:
+ citiesWithIdentifiers:
+ defaultCitiesForLocaleCode:options:
+ defaultCitiesForLocaleCode:
+ citySearchMatcher
+ citiesWithTimeZone:
+ citiesMatchingName:localized:
+ cityForClassicIdentifier:
+ bestCityForLegacyCity:
- allCities
- citiesMatchingName:
- defaultCityForTimeZone:
- localeWithCode:
- dealloc
- init
- citiesMatchingQualifier:
- localizeCities:
- citiesWithIdentifiers:
- defaultCitiesForLocaleCode:options:
- defaultCitiesForLocaleCode:
- citySearchMatcher
- citiesWithTimeZone:
- citiesMatchingName:localized:
- cityForClassicIdentifier:
- bestCityForLegacyCity:
@end
