@interface MCConfigurationProfile : MCProfile
{
	id _payloads;
	BOOL _isCloudProfile;
	BOOL _isCloudLocked;
	id _OTAProfile;
}

+ createHandler
+ description
+ stubDictionary
+ _addObjectsOfClass:fromArray:toArray:
+ initWithDictionary:allowEmptyPayload:outError:
+ _sortPayloads
+ installationWarningsIncludeUnsignedProfileWarning:
+ payloads
+ payloadWithUUID:
+ isManagedByProfileService
+ localizedPayloadSummaryByType
+ earliestCertificateExpiryDate
+ OTAProfile
+ setOTAProfile:
+ isCloudProfile
+ setIsCloudProfile:
+ isCloudLocked
+ setIsCloudLocked:
+ .cxx_destruct
- createHandler
- description
- stubDictionary
- _addObjectsOfClass:fromArray:toArray:
- initWithDictionary:allowEmptyPayload:outError:
- _sortPayloads
- installationWarningsIncludeUnsignedProfileWarning:
- payloads
- payloadWithUUID:
- isManagedByProfileService
- localizedPayloadSummaryByType
- earliestCertificateExpiryDate
- OTAProfile
- setOTAProfile:
- isCloudProfile
- setIsCloudProfile:
- isCloudLocked
- setIsCloudLocked:
- .cxx_destruct
@end
