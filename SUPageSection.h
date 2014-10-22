@interface SUPageSection : NSObject
{
	double _expirationTime;
	id _identifier;
	id _image;
	long long _structuredPageType;
	id _title;
	id _urlRequestProperties;
	id _userInfo;
}

+ _setURL:
+ dealloc
+ setImage:
+ init
+ setTitle:
+ isEqual:
+ image
+ userInfo
+ title
+ identifier
+ setIdentifier:
+ setUserInfo:
+ loadFromDictionary:
+ URLRequestProperties
+ setURLRequestProperties:
+ setExpirationTime:
+ expirationTime
+ setStructuredPageType:
+ _setURLBagKey:
+ segmentedControlItem
+ structuredPageType
- _setURL:
- dealloc
- setImage:
- init
- setTitle:
- isEqual:
- image
- userInfo
- title
- identifier
- setIdentifier:
- setUserInfo:
- loadFromDictionary:
- URLRequestProperties
- setURLRequestProperties:
- setExpirationTime:
- expirationTime
- setStructuredPageType:
- _setURLBagKey:
- segmentedControlItem
- structuredPageType
@end
