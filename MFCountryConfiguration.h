@interface MFCountryConfiguration : NSObject
{
	int _lock;
	id _generatorLock;
	id _lastCountryCode;
	id _countryCode;
}

+ dealloc
+ init
+ invalidate
+ _cellSimCountryCode
+ _networkCountryCode
+ _countryCodeWithGenerator:
+ updateCurrentCountry
+ countryCode
- dealloc
- init
- invalidate
- _cellSimCountryCode
- _networkCountryCode
- _countryCodeWithGenerator:
- updateCurrentCountry
- countryCode
@end
