@interface WeatherUpdateController : NSObject
{
	id _locationManager;
	id searchCompletion;
	id currentLocationCompletion;
	id weatherInfoCompletion;
	id locationManager;
}

+ didFailWithError:
+ dealloc
+ locationManager:didUpdateLocations:
+ locationManager:didFailWithError:
+ didValidateLocation:
+ setSearchCompletion:
+ setCurrentLocationCompletion:
+ setWeatherInfoCompletion:
+ locationManager
+ setLocationManager:
+ citiesInWeatherAppList
+ searchCompletion
+ currentLocationCompletion
+ searchForCitiesWithName:withCompletionHandler:
+ activeCity
+ addCityToWeatherAppList:
+ weatherListContainsCity:
+ removeAllCities
+ weatherInformationForLocation:withCompletionHandler:
+ weatherInformationForIDs:withCompletionHandler:
+ weatherInfoCompletion
- didFailWithError:
- dealloc
- locationManager:didUpdateLocations:
- locationManager:didFailWithError:
- didValidateLocation:
- setSearchCompletion:
- setCurrentLocationCompletion:
- setWeatherInfoCompletion:
- locationManager
- setLocationManager:
- citiesInWeatherAppList
- searchCompletion
- currentLocationCompletion
- searchForCitiesWithName:withCompletionHandler:
- activeCity
- addCityToWeatherAppList:
- weatherListContainsCity:
- removeAllCities
- weatherInformationForLocation:withCompletionHandler:
- weatherInformationForIDs:withCompletionHandler:
- weatherInfoCompletion
@end
