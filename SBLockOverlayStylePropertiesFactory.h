@interface SBLockOverlayStylePropertiesFactory : NSObject
{
	id _deviceQualityToProperties;
	usigned long long _style;
}

+ propertiesWithDeviceDefaultGraphicsQuality
+ propertiesWithGraphicsQuality:
+ _fetchAndCachePropsForDeviceQuality:
+ dealloc
+ style
+ initWithStyle:
- propertiesWithDeviceDefaultGraphicsQuality
- propertiesWithGraphicsQuality:
- _fetchAndCachePropsForDeviceQuality:
- dealloc
- style
- initWithStyle:
@end
