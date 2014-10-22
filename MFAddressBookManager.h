@interface MFAddressBookManager : NSObject
{
	pointer _addressBook;
	int _lock;
	pointer _clients;
}

+ _applicationResumed:
+ _handleAddressBookChangeNotification
+ _clientWeakReferences
+ _handleAddressBookPrefsChangeNotification
+ dealloc
+ init
+ addClient:
+ removeClient:
+ addressBook
- _applicationResumed:
- _handleAddressBookChangeNotification
- _clientWeakReferences
- _handleAddressBookPrefsChangeNotification
- dealloc
- init
- addClient:
- removeClient:
- addressBook
@end
