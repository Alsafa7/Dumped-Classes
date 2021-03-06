@interface ALCity : NSObject
{
	int _identifier;
	id _localeCode;
	id _timeZone;
	float _longitude;
	float _latitude;
	id _yahooCode;
	id _name;
	id _unlocalizedName;
	id _countryName;
	id _unlocalizedCountryName;
	id _countryOverride;
	id _unlocalizedCountryOverride;
	id _identifierForCPCity;
	BOOL _localizationAttempted;
}

+ countryName
+ setCountryName:
+ setLatitude:
+ setLongitude:
+ displayNameIncludingCountry:
+ dealloc
+ init
+ isEqual:
+ hash
+ description
+ setTimeZone:
+ setName:
+ name
+ identifier
+ timeZone
+ setIdentifier:
+ properties
+ initWithProperties:
+ localeCode
+ setCountryOverride:
+ unlocalizedName
+ initWithSQLRow:
+ countryOverride
+ displayNameIncludingCountry:withFormat:
+ ensureLocalized
+ unlocalizedCountryOverride
+ classicIdentifier
+ setUnlocalizedName:
+ setLocaleCode:
+ yahooCode
+ setYahooCode:
+ setUnlocalizedCountryOverride:
+ latitude
+ longitude
+ unlocalizedCountryName
+ setUnlocalizedCountryName:
- countryName
- setCountryName:
- setLatitude:
- setLongitude:
- displayNameIncludingCountry:
- dealloc
- init
- isEqual:
- hash
- description
- setTimeZone:
- setName:
- name
- identifier
- timeZone
- setIdentifier:
- properties
- initWithProperties:
- localeCode
- setCountryOverride:
- unlocalizedName
- initWithSQLRow:
- countryOverride
- displayNameIncludingCountry:withFormat:
- ensureLocalized
- unlocalizedCountryOverride
- classicIdentifier
- setUnlocalizedName:
- setLocaleCode:
- yahooCode
- setYahooCode:
- setUnlocalizedCountryOverride:
- latitude
- longitude
- unlocalizedCountryName
- setUnlocalizedCountryName:
@end
