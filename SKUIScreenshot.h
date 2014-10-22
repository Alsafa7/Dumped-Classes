@interface SKUIScreenshot : NSObject
{
	id _orientation;
	long long _uniqueIdentifier;
	id _urls;
	id _sizes;
}

+ orientationString
+ init
+ copyWithZone:
+ uniqueIdentifier
+ initWithCacheRepresentation:
+ cacheRepresentation
+ setArtwork:forVariant:
+ numberOfVariants
+ _initSKUIScreenshot
+ _addURLsFromDictionary:withRemoteLocalKeysMap:
+ _firstVariant
+ initWithScreenshotDictionary:
+ sizeForVariant:
+ URLForVariant:
+ .cxx_destruct
- orientationString
- init
- copyWithZone:
- uniqueIdentifier
- initWithCacheRepresentation:
- cacheRepresentation
- setArtwork:forVariant:
- numberOfVariants
- _initSKUIScreenshot
- _addURLsFromDictionary:withRemoteLocalKeysMap:
- _firstVariant
- initWithScreenshotDictionary:
- sizeForVariant:
- URLForVariant:
- .cxx_destruct
@end
