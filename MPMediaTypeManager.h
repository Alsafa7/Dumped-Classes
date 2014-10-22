@interface MPMediaTypeManager : NSObject
{
	BOOL _installed;
	usigned long long _mediaType;
	id _bundleID;
	id _supportsMediaKey;
	id _defaultsKey;
	id _alertLocalizationKey;
	id _activeAlert;
}

+ initWithMediaType:bundleID:supportsMediaKey:defaultsKey:alertLocalizationKey:
+ bundleID
+ supportsMediaKey
+ defaultsKey
+ alertLocalizationKey
+ installed
+ setInstalled:
+ activeAlert
+ setActiveAlert:
+ mediaType
+ .cxx_destruct
- initWithMediaType:bundleID:supportsMediaKey:defaultsKey:alertLocalizationKey:
- bundleID
- supportsMediaKey
- defaultsKey
- alertLocalizationKey
- installed
- setInstalled:
- activeAlert
- setActiveAlert:
- mediaType
- .cxx_destruct
@end
