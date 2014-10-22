@interface AlarmScheduleLayoutData : NSObject
{
	id _alarmId;
	long long _hour;
	long long _minute;
	usigned long long _daySetting;
	BOOL _active;
	BOOL _snoozed;
	id _title;
	double _timePositionForItems;
	Array _daysForItems;
	Array _cellLayoutForItems;
}

+ compareToHour:minute:
+ layout:dayForItem:
+ layout:itemForDay:
+ compareToTime:
+ cellLayoutForDay:
+ setCellLayout:forDay:
+ allDaysForLayout:
+ doesOverlapWithLayoutData:fullOverlapOnly:
+ layout:frameForItem:
+ layout:itemsInDayRange:
+ visualFirstItemWithLayout:
+ setSnoozed:
+ dealloc
+ init
+ setTitle:
+ description
+ debugDescription
+ isActive
+ title
+ hour
+ setActive:
+ minute
+ reset
+ setHour:minute:
+ setDaySetting:
+ daySetting
+ isSnoozed
+ alarmId
+ setAlarmId:
- compareToHour:minute:
- layout:dayForItem:
- layout:itemForDay:
- compareToTime:
- cellLayoutForDay:
- setCellLayout:forDay:
- allDaysForLayout:
- doesOverlapWithLayoutData:fullOverlapOnly:
- layout:frameForItem:
- layout:itemsInDayRange:
- visualFirstItemWithLayout:
- setSnoozed:
- dealloc
- init
- setTitle:
- description
- debugDescription
- isActive
- title
- hour
- setActive:
- minute
- reset
- setHour:minute:
- setDaySetting:
- daySetting
- isSnoozed
- alarmId
- setAlarmId:
@end
