@interface AFBulletin : NSObject
{
	BOOL _read;
	BOOL _allDay;
	id _bulletinID;
	id _date;
	id _endDate;
	id _message;
	id _modalAlertContentMessage;
	id _recencyDate;
	id _sectionID;
	id _subtitle;
	id _timeZone;
	id _title;
	id _displayName;
}

+ isAllDay
+ initWithCoder:
+ encodeWithCoder:
+ date
+ title
+ message
+ subtitle
+ timeZone
+ displayName
+ modalAlertContentMessage
+ bulletinID
+ sectionID
+ recencyDate
+ setBulletin:
+ isRead
+ setRead:
+ setDisplayName:
+ endDate
+ .cxx_destruct
- isAllDay
- initWithCoder:
- encodeWithCoder:
- date
- title
- message
- subtitle
- timeZone
- displayName
- modalAlertContentMessage
- bulletinID
- sectionID
- recencyDate
- setBulletin:
- isRead
- setRead:
- setDisplayName:
- endDate
- .cxx_destruct
@end
