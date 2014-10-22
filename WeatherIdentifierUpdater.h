@interface WeatherIdentifierUpdater : WeatherUpdater
{
	id _woeidWeatherHandler;
	id _requestedCities;
	id _parsedCities;
}

+ dealloc
+ updateWeatherForCity:
+ aggregateDictionaryDomain
+ handleCompletionForCity:withUpdateDetail:
+ _failed:
+ updateWeatherForCities:withCompletionHandler:
+ requestedCities
+ setRequestedCities:
+ parsedCities
+ setParsedCities:
- dealloc
- updateWeatherForCity:
- aggregateDictionaryDomain
- handleCompletionForCity:withUpdateDetail:
- _failed:
- updateWeatherForCities:withCompletionHandler:
- requestedCities
- setRequestedCities:
- parsedCities
- setParsedCities:
@end
