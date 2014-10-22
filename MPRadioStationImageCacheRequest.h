@interface MPRadioStationImageCacheRequest : MPImageCacheRequest
{
	BOOL _usePlaceholderAsFallback;
	id _radioStation;
}

+ initWithRadioStation:
+ setUsePlaceholderAsFallback:
+ placeholderImage
+ radioStation
+ uniqueKey
+ copyRawImageReturningError:
+ canRequestSynchronously
+ usePlaceholderAsFallback
+ .cxx_destruct
- initWithRadioStation:
- setUsePlaceholderAsFallback:
- placeholderImage
- radioStation
- uniqueKey
- copyRawImageReturningError:
- canRequestSynchronously
- usePlaceholderAsFallback
- .cxx_destruct
@end
