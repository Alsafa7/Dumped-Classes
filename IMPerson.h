@interface IMPerson : NSObject
{
	BOOL _registered;
	int _recordID;
}

+ imHandleRegistrarGUID
+ groups
+ phoneNumbers
+ setPhoneNumbers:
+ save
+ dealloc
+ init
+ isEqual:
+ hash
+ description
+ name
+ displayName
+ status
+ _recordRef
+ uniqueID
+ companyName
+ valuesForIMProperty:
+ initWithABRecordID:
+ appendID:toProperty:
+ setValues:forProperty:
+ isEqualToIMPerson:
+ abbreviatedName
+ setFirstName:lastName:
+ imageDataWithoutLoading
+ allHandlesForProperty:
+ isCompany
+ emailHandlesForService:includeBaseEmail:
+ valuesForProperty:
+ containsHandle:forServiceProperty:
+ emailHandlesForService:
+ isInAddressBook
+ setValues:forIMProperty:
+ mobileNumbers
+ _abPersonChanged:
+ _recordID
+ _registered
+ imageData
+ setImageData:
+ firstName
+ lastName
+ fullName
+ emails
+ setEmails:
+ setFirstName:
+ setLastName:
+ recordID
+ allEmails
+ finalize
+ nickname
+ setNickname:
- imHandleRegistrarGUID
- groups
- phoneNumbers
- setPhoneNumbers:
- save
- dealloc
- init
- isEqual:
- hash
- description
- name
- displayName
- status
- _recordRef
- uniqueID
- companyName
- valuesForIMProperty:
- initWithABRecordID:
- appendID:toProperty:
- setValues:forProperty:
- isEqualToIMPerson:
- abbreviatedName
- setFirstName:lastName:
- imageDataWithoutLoading
- allHandlesForProperty:
- isCompany
- emailHandlesForService:includeBaseEmail:
- valuesForProperty:
- containsHandle:forServiceProperty:
- emailHandlesForService:
- isInAddressBook
- setValues:forIMProperty:
- mobileNumbers
- _abPersonChanged:
- _recordID
- _registered
- imageData
- setImageData:
- firstName
- lastName
- fullName
- emails
- setEmails:
- setFirstName:
- setLastName:
- recordID
- allEmails
- finalize
- nickname
- setNickname:
@end
