@interface WeatherUpdater : WeatherXMLHTTPRequest
{
	id _updatingCities;
	id _pendingCities;
	id _delegate;
	id _weatherCompletionUpdaterHandler;
}

+ dealloc
+ setDelegate:
+ init
+ failWithError:
+ isUpdatingCity:
+ aggregateDictionaryDomain
+ processDocument:
+ didProcessDocument
+ runAndClearWeatherCompletionWithDetail:
+ handleCompletionForCity:withUpdateDetail:
+ failCity:
+ _failed:
+ handleNilCity
+ isDataValid:
+ parsedResultCity:
+ weatherCompletionUpdaterHandler
+ _updateNextPendingCity
+ addUpdatingCity:
+ removeAllUpdatingCities
+ addCityToPendingQueue:
+ loadRequestURL:parameters:
+ setWeatherCompletionUpdaterHandler:
- dealloc
- setDelegate:
- init
- failWithError:
- isUpdatingCity:
- aggregateDictionaryDomain
- processDocument:
- didProcessDocument
- runAndClearWeatherCompletionWithDetail:
- handleCompletionForCity:withUpdateDetail:
- failCity:
- _failed:
- handleNilCity
- isDataValid:
- parsedResultCity:
- weatherCompletionUpdaterHandler
- _updateNextPendingCity
- addUpdatingCity:
- removeAllUpdatingCities
- addCityToPendingQueue:
- loadRequestURL:parameters:
- setWeatherCompletionUpdaterHandler:
@end
