@interface AOSFMFAccountInfo : NSObject
{
	int _appAuthTokenStatus;
	id _dsid;
	id _username;
	id _appAuthToken;
	id _additionalInfo;
	id _aosServerHost;
	id _aosServerProtocolScheme;
	id _aosAPSEnvironment;
	id _internalAuthToken;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ setDsid:
+ setAppAuthToken:
+ setAosServerHost:
+ setAosServerProtocolScheme:
+ setAosAPSEnvironment:
+ setInternalAuthToken:
+ setAppAuthTokenStatus:
+ appAuthToken
+ appAuthTokenStatus
+ internalAuthToken
+ aosServerHost
+ aosServerProtocolScheme
+ aosAPSEnvironment
+ setUsername:
+ username
+ additionalInfo
+ setAdditionalInfo:
+ dsid
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- setDsid:
- setAppAuthToken:
- setAosServerHost:
- setAosServerProtocolScheme:
- setAosAPSEnvironment:
- setInternalAuthToken:
- setAppAuthTokenStatus:
- appAuthToken
- appAuthTokenStatus
- internalAuthToken
- aosServerHost
- aosServerProtocolScheme
- aosAPSEnvironment
- setUsername:
- username
- additionalInfo
- setAdditionalInfo:
- dsid
@end
