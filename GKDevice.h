@interface GKDevice : NSObject
{
	id _udid;
	id _deviceName;
	id _osVersion;
	id _buildVersion;
	id _gameKitVersion;
	double _mainScreenScale;
}

+ _initPlatform
+ _platformUDID
+ userAgentWithProcessName:protocolVersion:
+ gameKitVersion
+ storeUserAgent
+ protocolVersionHeader
+ buildVersionHeader
+ udid
+ osVersion
+ processNameHeader
+ dealloc
+ init
+ buildVersion
+ deviceName
+ mainScreenScale
+ userAgent
- _initPlatform
- _platformUDID
- userAgentWithProcessName:protocolVersion:
- gameKitVersion
- storeUserAgent
- protocolVersionHeader
- buildVersionHeader
- udid
- osVersion
- processNameHeader
- dealloc
- init
- buildVersion
- deviceName
- mainScreenScale
- userAgent
@end
