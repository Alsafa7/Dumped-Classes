@interface AlarmScheduleLayoutAttributes : UICollectionViewLayoutAttributes
{
	id _alarmId;
	long long _day;
	BOOL _active;
	BOOL _showsTitle;
	id _title;
}

+ setTitle:
+ isEqual:
+ description
+ isActive
+ copyWithZone:
+ title
+ setDay:
+ setActive:
+ day
+ showsTitle
+ setShowsTitle:
+ alarmId
+ setAlarmId:
- setTitle:
- isEqual:
- description
- isActive
- copyWithZone:
- title
- setDay:
- setActive:
- day
- showsTitle
- setShowsTitle:
- alarmId
- setAlarmId:
@end
