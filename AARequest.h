@interface AARequest : NSObject
{
	id _urlString;
	BOOL _flushCache;
	pointer _cookieStorage;
	id _oneTimePassword;
	id _machineId;
}

+ dealloc
+ urlString
+ urlRequest
+ setFlushCache:
+ setCookieStorage:
+ redactedBodyStringWithPropertyList:
+ initWithURLString:
+ setDeviceProvisioningOneTimePassword:
+ setDeviceProvisioningMachineId:
+ urlCredential
+ flushCache
+ bodyDictionary
+ .cxx_destruct
+ performRequestWithHandler:
- dealloc
- urlString
- urlRequest
- setFlushCache:
- setCookieStorage:
- redactedBodyStringWithPropertyList:
- initWithURLString:
- setDeviceProvisioningOneTimePassword:
- setDeviceProvisioningMachineId:
- urlCredential
- flushCache
- bodyDictionary
- .cxx_destruct
- performRequestWithHandler:
@end
