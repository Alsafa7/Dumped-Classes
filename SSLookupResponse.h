@interface SSLookupResponse : NSObject
{
	id _expirationDate;
	id _itemOrder;
	id _metricsPageEvent;
	id _response;
}

+ mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:
+ mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:
+ mpIsPersonalizedOffer
+ initWithResponseDictionary:
+ responseDictionary
+ dealloc
+ valueForProperty:
+ expirationDate
+ metricsPageEvent
+ metricsConfiguration
+ itemForKey:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ _setMetricsPageEvent:
+ initWithLocationResponseDictionary:
+ setExpirationDate:
+ _enumerateItemsWithBlock:
+ appStoreURLWithReason:initialIndex:
+ allItems
- mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:
- mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:
- mpIsPersonalizedOffer
- initWithResponseDictionary:
- responseDictionary
- dealloc
- valueForProperty:
- expirationDate
- metricsPageEvent
- metricsConfiguration
- itemForKey:
- initWithXPCEncoding:
- copyXPCEncoding
- _setMetricsPageEvent:
- initWithLocationResponseDictionary:
- setExpirationDate:
- _enumerateItemsWithBlock:
- appStoreURLWithReason:initialIndex:
- allItems
@end
