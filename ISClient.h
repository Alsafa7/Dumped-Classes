@interface ISClient : NSObject
{
	id _appleClientApplication;
	id _appleClientVersions;
	id _identifier;
	id _lock;
	id _partnerHeader;
	id _userAgent;
}

+ dealloc
+ init
+ identifier
+ setIdentifier:
+ setUserAgent:
+ appleClientApplication
+ appleClientVersions
+ setPartnerHeader:
+ _softwareMapInvalidatedNotification:
+ _appleClientVersions
+ localStoreFrontID
+ partnerHeader
+ userAgent
+ setAppleClientApplication:
- dealloc
- init
- identifier
- setIdentifier:
- setUserAgent:
- appleClientApplication
- appleClientVersions
- setPartnerHeader:
- _softwareMapInvalidatedNotification:
- _appleClientVersions
- localStoreFrontID
- partnerHeader
- userAgent
- setAppleClientApplication:
@end
