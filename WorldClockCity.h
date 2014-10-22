@interface WorldClockCity : NSObject
{
	id _alCity;
	id _weatherCity;
	id _timeZone;
	id _name;
	id _countryName;
	id _countryCode;
	id _unlocalizedName;
	id _unlocalizedCountryName;
}

+ countryName
+ dealloc
+ isEqual:
+ hash
+ description
+ name
+ timeZone
+ properties
+ initWithProperties:
+ initWithALCity:
+ idUrl
+ initWithALCityIdentifier:
+ initWithTimeZone:countryCode:name:countryName:unlocalizedName:unlocalizedCountryName:
+ alCity
+ weatherCity
+ setWeatherCity:
+ countryCode
+ alCityId
+ unlocalizedCityName
+ unlocalizedCountryName
- countryName
- dealloc
- isEqual:
- hash
- description
- name
- timeZone
- properties
- initWithProperties:
- initWithALCity:
- idUrl
- initWithALCityIdentifier:
- initWithTimeZone:countryCode:name:countryName:unlocalizedName:unlocalizedCountryName:
- alCity
- weatherCity
- setWeatherCity:
- countryCode
- alCityId
- unlocalizedCityName
- unlocalizedCountryName
@end
