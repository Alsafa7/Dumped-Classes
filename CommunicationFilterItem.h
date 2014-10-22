@interface CommunicationFilterItem : NSObject
{
	pointer _phoneNumber;
	id _emailAddress;
}

+ initWithEmailAddress:
+ dealloc
+ description
+ phoneNumber
+ dictionaryRepresentation
+ matchesFilterItem:
+ _dictionaryRepresentationWithRedaction
+ _acceptItemType:
+ _acceptVersion:
+ initWithPhoneNumber:
+ unformattedID
+ emailAddress
+ initWithDictionaryRepresentation:
+ isPhoneNumber
- initWithEmailAddress:
- dealloc
- description
- phoneNumber
- dictionaryRepresentation
- matchesFilterItem:
- _dictionaryRepresentationWithRedaction
- _acceptItemType:
- _acceptVersion:
- initWithPhoneNumber:
- unformattedID
- emailAddress
- initWithDictionaryRepresentation:
- isPhoneNumber
@end
