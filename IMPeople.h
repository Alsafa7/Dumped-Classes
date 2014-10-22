@interface IMPeople : NSObject
{
	id _people;
	int _coalesceCount;
	BOOL _hidePeople;
}

+ groups
+ people
+ dealloc
+ count
+ setShouldHidePeople:
+ beginCoalescedChanges
+ imHandle:buddyStatusChanged:
+ endCoalescedChanges
+ removeIMHandle:
+ addIMHandle:
+ hidePeople
+ coalescingChanges
+ addedIMHandle:
+ removedIMHandle:
+ _addedPeople:
+ addPeopleFromArray:skipMe:
+ removeNotificationObserver:
+ addNotificationObserver:selector:
+ containsIMHandle:
+ removePeopleFromArray:
+ addPeopleFromArray:
- groups
- people
- dealloc
- count
- setShouldHidePeople:
- beginCoalescedChanges
- imHandle:buddyStatusChanged:
- endCoalescedChanges
- removeIMHandle:
- addIMHandle:
- hidePeople
- coalescingChanges
- addedIMHandle:
- removedIMHandle:
- _addedPeople:
- addPeopleFromArray:skipMe:
- removeNotificationObserver:
- addNotificationObserver:selector:
- containsIMHandle:
- removePeopleFromArray:
- addPeopleFromArray:
@end
