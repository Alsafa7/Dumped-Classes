@interface ABAssistantManager : NSObject
{
	pointer _addressBook;
	pointer _addressBookForCallbacks;
	id _delegate;
	int _sequenceNumber;
	BOOL _addressBookChanged;
}

+ meCard
+ setAddressBookChanged:
+ addressBookForCallbacks
+ checkIfMeCardChanged
+ setAddressBookForCallbacks:
+ handleAddressBookChanged
+ newSAPersonFromABPerson:
+ sources
+ sequenceNumber
+ dealloc
+ setDelegate:
+ init
+ delegate
+ setSequenceNumber:
+ addressBook
+ setAddressBook:
+ .cxx_destruct
+ addressBookChanged
- meCard
- setAddressBookChanged:
- addressBookForCallbacks
- checkIfMeCardChanged
- setAddressBookForCallbacks:
- handleAddressBookChanged
- newSAPersonFromABPerson:
- sources
- sequenceNumber
- dealloc
- setDelegate:
- init
- delegate
- setSequenceNumber:
- addressBook
- setAddressBook:
- .cxx_destruct
- addressBookChanged
@end
