@interface CNMutableContact : CNContact
{

}

+ initWithRecord:
+ deleteContact
+ addProperties:excludingProperties:fromContact:
+ saveContactInAddressBook:
+ linkToContact:
+ unlinkContact
+ addToGroup:
+ setPhoneNumbers:
+ saveContact
+ initWithRecord:unify:
+ isEqualToContact:includeIdentifiers:
+ isEqualToContact:
+ _setMultiValueForProperty:values:valueFromCNValue:
+ _setStringMultiValueForProperty:values:
+ _ABLabelFromCNLabel:
+ setGivenName:
+ setMiddleName:
+ setFamilyName:
+ setPreviousFamilyName:
+ setPhoneticGivenName:
+ setPhoneticMiddleName:
+ setPhoneticFamilyName:
+ setOrganizationName:
+ setDepartmentName:
+ setJobTitle:
+ setBirthday:
+ setNote:
+ setPreferredForName
+ setPreferredForPhoto
+ setUrlAddresses:
+ setDates:
+ setInstantMessageAddresses:
+ setRelatedNames:
+ setSocialProfiles:
+ setPostalAddresses:
+ setRingtone:
+ setTextTone:
+ init
+ isEqual:
+ setEmailAddresses:
+ setNamePrefix:
+ setNameSuffix:
+ setNickname:
- initWithRecord:
- deleteContact
- addProperties:excludingProperties:fromContact:
- saveContactInAddressBook:
- linkToContact:
- unlinkContact
- addToGroup:
- setPhoneNumbers:
- saveContact
- initWithRecord:unify:
- isEqualToContact:includeIdentifiers:
- isEqualToContact:
- _setMultiValueForProperty:values:valueFromCNValue:
- _setStringMultiValueForProperty:values:
- _ABLabelFromCNLabel:
- setGivenName:
- setMiddleName:
- setFamilyName:
- setPreviousFamilyName:
- setPhoneticGivenName:
- setPhoneticMiddleName:
- setPhoneticFamilyName:
- setOrganizationName:
- setDepartmentName:
- setJobTitle:
- setBirthday:
- setNote:
- setPreferredForName
- setPreferredForPhoto
- setUrlAddresses:
- setDates:
- setInstantMessageAddresses:
- setRelatedNames:
- setSocialProfiles:
- setPostalAddresses:
- setRingtone:
- setTextTone:
- init
- isEqual:
- setEmailAddresses:
- setNamePrefix:
- setNameSuffix:
- setNickname:
@end