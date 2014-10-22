@interface MCAppLayerVPNPayload : MCVPNPayloadBase
{
	id _VPNUUID;
	id _SafariDomains;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ VPNUUID
+ SafariDomains
+ setVPNUUID:
+ setSafariDomains:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- stubDictionary
- VPNUUID
- SafariDomains
- setVPNUUID:
- setSafariDomains:
- .cxx_destruct
@end
