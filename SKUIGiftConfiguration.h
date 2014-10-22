@interface SKUIGiftConfiguration : NSObject
{
	id _charities;
	id _charityImages;
	id _clientContext;
	id _currencySymbol;
	long long _currencySymbolPosition;
	id _fixedGiftAmountLabels;
	id _fixedGiftAmountValues;
	id _senderName;
	struct _giftAmountRange;
	id _giftPurchaseURL;
	id _giftValidationURL;
	long long _maximumMessageLength;
	id _observers;
	id _operationQueue;
	id _senderEmailAddress;
	id _storeFrontName;
	id _themes;
}

+ currencySymbol
+ removeObserver:
+ addObserver:
+ themes
+ senderEmailAddress
+ clientContext
+ initWithOperationQueue:clientContext:
+ loadConfigurationWithCompletionBlock:
+ senderName
+ giftValidationURL
+ storeFrontName
+ maximumMessageLength
+ fixedGiftAmountLabels
+ fixedGiftAmountValues
+ currencySymbolPosition
+ _finishLoadWithResponse:error:block:
+ _setLogoImage:forCharity:
+ _loadThemeImages
+ _finishLoadAccountInfoWithResponse:error:block:
+ _setHeaderImage:forTheme:
+ charityForIdentifier:
+ loadCachedConfiguration
+ loadLogoForCharity:
+ logoImageForCharity:
+ giftAmountRange
+ giftPurchaseURL
+ .cxx_destruct
- currencySymbol
- removeObserver:
- addObserver:
- themes
- senderEmailAddress
- clientContext
- initWithOperationQueue:clientContext:
- loadConfigurationWithCompletionBlock:
- senderName
- giftValidationURL
- storeFrontName
- maximumMessageLength
- fixedGiftAmountLabels
- fixedGiftAmountValues
- currencySymbolPosition
- _finishLoadWithResponse:error:block:
- _setLogoImage:forCharity:
- _loadThemeImages
- _finishLoadAccountInfoWithResponse:error:block:
- _setHeaderImage:forTheme:
- charityForIdentifier:
- loadCachedConfiguration
- loadLogoForCharity:
- logoImageForCharity:
- giftAmountRange
- giftPurchaseURL
- .cxx_destruct
@end
