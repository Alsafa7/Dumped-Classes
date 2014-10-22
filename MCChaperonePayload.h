@interface MCChaperonePayload : MCPayload
{
	id _pairingCertificateData;
	BOOL _nonChaperonePairingAllowed;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ pairingCertificateData
+ nonChaperonePairingAllowed
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- pairingCertificateData
- nonChaperonePairingAllowed
- .cxx_destruct
@end
