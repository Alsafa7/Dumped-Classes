@interface MCCertificateWrapperProfile : MCConfigurationProfile
{

}

+ createHandler
+ stubDictionary
+ initWithDictionary:allowEmptyPayload:outError:
+ earliestCertificateExpiryDate
+ isSigned
+ _certificatePayload
+ trustLevel
- createHandler
- stubDictionary
- initWithDictionary:allowEmptyPayload:outError:
- earliestCertificateExpiryDate
- isSigned
- _certificatePayload
- trustLevel
@end
