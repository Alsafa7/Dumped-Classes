@interface RadioStoreBag : NSObject
{
	id _mescalRequestWhitelist;
	id _mescalResponseWhitelist;
	id _mescalSetupCertURLString;
	id _mescalSetupURLString;
	id _platformContext;
	id _srdnldURLString;
	id _tiltDictionary;
}

+ streamingDownloadURLString
+ radioConfigurationDictionary
+ baseURLString
+ _initWithURLBagDictionary:
+ shouldMescalSignRequestWithURL:
+ shouldMescalVerifyResponseFromURL:
+ _initWithCacheRepresentation:
+ _cacheRepresentation
+ _platformContext
+ mescalCertificateURLString
+ mescalSetupURLString
+ .cxx_destruct
- streamingDownloadURLString
- radioConfigurationDictionary
- baseURLString
- _initWithURLBagDictionary:
- shouldMescalSignRequestWithURL:
- shouldMescalVerifyResponseFromURL:
- _initWithCacheRepresentation:
- _cacheRepresentation
- _platformContext
- mescalCertificateURLString
- mescalSetupURLString
- .cxx_destruct
@end
