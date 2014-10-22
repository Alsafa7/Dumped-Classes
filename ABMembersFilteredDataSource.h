@interface ABMembersFilteredDataSource : NSObject
{
	id _records;
	pointer _addressBook;
	id _delegate;
	id _styleProvider;
	BOOL _isInPopover;
}

+ styleProvider
+ setStyleProvider:
+ removeAllRecords
+ addRecords:
+ setIsInPopover:
+ dealloc
+ setDelegate:
+ count
+ tableView:willDisplayCell:forRowAtIndexPath:
+ tableView:heightForRowAtIndexPath:
+ tableView:didSelectRowAtIndexPath:
+ scrollViewWillBeginDragging:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ delegate
+ records
+ isInPopover
+ addressBook
+ setAddressBook:
- styleProvider
- setStyleProvider:
- removeAllRecords
- addRecords:
- setIsInPopover:
- dealloc
- setDelegate:
- count
- tableView:willDisplayCell:forRowAtIndexPath:
- tableView:heightForRowAtIndexPath:
- tableView:didSelectRowAtIndexPath:
- scrollViewWillBeginDragging:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- delegate
- records
- isInPopover
- addressBook
- setAddressBook:
@end
