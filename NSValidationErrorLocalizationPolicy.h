@interface NSValidationErrorLocalizationPolicy : NSObject
{
	id _url;
	id _localizationBundle;
	id _modelStringsFileName;
	id _localizationDictionary;
	BOOL _hasSetLocalizationDictionary;
}

+ localizedEntityNameForEntity:
+ localizedPropertyNameForProperty:
+ localizedModelStringForKey:
+ _ensureFullLocalizationDictionaryIsLoaded
+ localizationDictionary
+ setLocalizationDictionary:
+ _ensureLocalizationDictionaryIsInitialized
+ _localizedStringForKey:value:
+ _cachedObjectForKey:value:
+ _localizedPropertyNameForProperty:entity:
+ dealloc
+ copyWithZone:
+ initWithURL:
- localizedEntityNameForEntity:
- localizedPropertyNameForProperty:
- localizedModelStringForKey:
- _ensureFullLocalizationDictionaryIsLoaded
- localizationDictionary
- setLocalizationDictionary:
- _ensureLocalizationDictionaryIsInitialized
- _localizedStringForKey:value:
- _cachedObjectForKey:value:
- _localizedPropertyNameForProperty:entity:
- dealloc
- copyWithZone:
- initWithURL:
@end
