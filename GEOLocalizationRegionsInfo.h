@interface GEOLocalizationRegionsInfo : NSObject
{
	id _regions;
	id _regionsLock;
}

+ dealloc
+ init
+ reset
+ needsLocalizationForKey:language:
- dealloc
- init
- reset
- needsLocalizationForKey:language:
@end
