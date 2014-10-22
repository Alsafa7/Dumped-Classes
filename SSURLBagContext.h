@interface SSURLBagContext : NSObject
{
	long long _allowedRetryCount;
	BOOL _allowsExpiredBags;
	long long _bagType;
	id _httpHeaders;
	BOOL _ignoresCaches;
	id _userIdentifier;
	BOOL _usesCachedBagsOnly;
}

+ userIdentifier
+ valueForHTTPHeaderField:
+ setValue:forHTTPHeaderField:
+ dealloc
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ cacheKey
+ setIgnoresCaches:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ allowedRetryCount
+ bagType
+ allHTTPHeaders
+ setAllHTTPHeaders:
+ allowsExpiredBags
+ setAllowsExpiredBags:
+ ignoresCaches
+ usesCachedBagsOnly
+ setUsesCachedBagsOnly:
+ setBagType:
+ setUserIdentifier:
+ setAllowedRetryCount:
- userIdentifier
- valueForHTTPHeaderField:
- setValue:forHTTPHeaderField:
- dealloc
- init
- isEqual:
- hash
- description
- copyWithZone:
- cacheKey
- setIgnoresCaches:
- initWithXPCEncoding:
- copyXPCEncoding
- allowedRetryCount
- bagType
- allHTTPHeaders
- setAllHTTPHeaders:
- allowsExpiredBags
- setAllowsExpiredBags:
- ignoresCaches
- usesCachedBagsOnly
- setUsesCachedBagsOnly:
- setBagType:
- setUserIdentifier:
- setAllowedRetryCount:
@end
