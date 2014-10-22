@interface SSVPlatformRequestOperation : NSOperation
{
	id _additionalParameters;
	id _context;
	id _dispatchQueue;
	id _itemIdentifiers;
	id _imageProfile;
	id _keyProfile;
	id _responseBlock;
	id _storeFrontSuffix;
}

+ setKeyProfile:
+ setValue:forRequestParameter:
+ responseBlock
+ init
+ main
+ setStoreFrontSuffix:
+ setItemIdentifiers:
+ setResponseBlock:
+ imageProfile
+ setImageProfile:
+ itemIdentifiers
+ storeFrontSuffix
+ _lookupWithRequest:error:
+ initWithPlatformContext:
+ _makeLocalMescalRequest
+ _makeLocalJSSignRequest
+ _callerValue
+ _enumerateQueryParametersUsingBlock:
+ _makeLookupRequest
+ .cxx_destruct
+ valueForRequestParameter:
+ keyProfile
- setKeyProfile:
- setValue:forRequestParameter:
- responseBlock
- init
- main
- setStoreFrontSuffix:
- setItemIdentifiers:
- setResponseBlock:
- imageProfile
- setImageProfile:
- itemIdentifiers
- storeFrontSuffix
- _lookupWithRequest:error:
- initWithPlatformContext:
- _makeLocalMescalRequest
- _makeLocalJSSignRequest
- _callerValue
- _enumerateQueryParametersUsingBlock:
- _makeLookupRequest
- .cxx_destruct
- valueForRequestParameter:
- keyProfile
@end
