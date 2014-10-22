@interface SKUIGift : NSObject
{
	long long _category;
	id _deliveryDate;
	long long _giftAmount;
	id _giftAmountString;
	id _item;
	id _message;
	id _recipientAddresses;
	id _senderEmailAddress;
	id _senderName;
	id _theme;
	id _totalGiftAmountString;
}

+ initWithItem:
+ copyWithZone:
+ message
+ item
+ setMessage:
+ reset
+ theme
+ setTheme:
+ senderEmailAddress
+ setSenderEmailAddress:
+ deliveryDate
+ giftAmount
+ recipientAddresses
+ senderName
+ HTTPBodyDictionary
+ setDeliveryDate:
+ setGiftAmount:
+ giftAmountString
+ setGiftAmountString:
+ giftCategory
+ setRecipientAddresses:
+ setSenderName:
+ totalGiftAmountString
+ setTotalGiftAmountString:
+ .cxx_destruct
+ initWithGiftCategory:
- initWithItem:
- copyWithZone:
- message
- item
- setMessage:
- reset
- theme
- setTheme:
- senderEmailAddress
- setSenderEmailAddress:
- deliveryDate
- giftAmount
- recipientAddresses
- senderName
- HTTPBodyDictionary
- setDeliveryDate:
- setGiftAmount:
- giftAmountString
- setGiftAmountString:
- giftCategory
- setRecipientAddresses:
- setSenderName:
- totalGiftAmountString
- setTotalGiftAmountString:
- .cxx_destruct
- initWithGiftCategory:
@end
