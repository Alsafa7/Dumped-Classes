@interface SKUIItemOffer : NSObject
{
	id _actionParameters;
	id _buttonText;
	id _confirmationText;
	long long _fileSize;
	id _fileSizeText;
	float _price;
}

+ price
+ fileSize
+ initWithCacheRepresentation:
+ cacheRepresentation
+ _setFileSizeWithAssets:
+ _setFileSizeWithFlavors:
+ initWithButtonText:
+ initWithOfferDictionary:
+ initWithRedownloadToken:
+ _addActionParameterWithName:value:
+ actionParameters
+ buttonText
+ confirmationText
+ fileSizeText
+ .cxx_destruct
+ initWithLookupDictionary:
- price
- fileSize
- initWithCacheRepresentation:
- cacheRepresentation
- _setFileSizeWithAssets:
- _setFileSizeWithFlavors:
- initWithButtonText:
- initWithOfferDictionary:
- initWithRedownloadToken:
- _addActionParameterWithName:value:
- actionParameters
- buttonText
- confirmationText
- fileSizeText
- .cxx_destruct
- initWithLookupDictionary:
@end
