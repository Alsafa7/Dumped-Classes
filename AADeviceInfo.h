@interface AADeviceInfo : NSObject
{
	id _apsConnection;
	BOOL _tokenDone;
	id _token;
	id _tokenSema;
}

+ udid
+ osVersion
+ buildVersion
+ apnsToken
+ deviceInfoDictionary
+ osName
+ regionCode
+ wifiMacAddress
+ appleIDClientIdentifier
+ serialNumber
+ deviceClass
+ productType
+ productVersion
+ init
+ .cxx_destruct
- udid
- osVersion
- buildVersion
- apnsToken
- deviceInfoDictionary
- osName
- regionCode
- wifiMacAddress
- appleIDClientIdentifier
- serialNumber
- deviceClass
- productType
- productVersion
- init
- .cxx_destruct
@end
