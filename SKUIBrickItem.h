@interface SKUIBrickItem : NSObject
{
	id _accessibilityLabel;
	id _artwork;
	long long _brickIdentifier;
	id _countdown;
	id _editorial;
	id _link;
}

+ artwork
+ description
+ accessibilityLabel
+ link
+ initWithCustomPageContext:
+ countdown
+ initWithComponentContext:
+ _setLinkItem:
+ initWithBannerRoomContext:
+ editorial
+ brickIdentifier
+ _setLinkInfoWithLinkDictionary:context:
+ .cxx_destruct
- artwork
- description
- accessibilityLabel
- link
- initWithCustomPageContext:
- countdown
- initWithComponentContext:
- _setLinkItem:
- initWithBannerRoomContext:
- editorial
- brickIdentifier
- _setLinkInfoWithLinkDictionary:context:
- .cxx_destruct
@end
