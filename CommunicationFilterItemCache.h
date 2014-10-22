@interface CommunicationFilterItemCache : NSObject
{
	id _filterItem;
	long long _isInList;
}

+ dealloc
+ initWithFilterItem:isInList:
+ matchesItem:
+ isInList
+ setIsInList:
- dealloc
- initWithFilterItem:isInList:
- matchesItem:
- isInList
- setIsInList:
@end
