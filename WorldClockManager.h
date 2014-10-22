@interface WorldClockManager : NSObject
{
	BOOL _dirty;
	id _cities;
	id lastModified;
}

+ setLastModified:
+ dealloc
+ saveCities
+ cities
+ canAddCity
+ loadCities
+ checkIfCitiesModified
+ cityWithIdUrl:
+ addCity:
+ removeCity:
+ removeCityAtIndex:
+ moveCityFromIndex:toIndex:
+ removeAllCities
+ lastModified
- setLastModified:
- dealloc
- saveCities
- cities
- canAddCity
- loadCities
- checkIfCitiesModified
- cityWithIdUrl:
- addCity:
- removeCity:
- removeCityAtIndex:
- moveCityFromIndex:toIndex:
- removeAllCities
- lastModified
@end
