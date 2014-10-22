@interface MBServiceRestoreSession : NSObject
{
	id _backupUDID;
	usigned long long _snapshotID;
	id _startDate;
	BOOL _finishing;
	BOOL _cancelled;
}

+ isFinishing
+ setBackupUDID:
+ setSnapshotID:
+ setFinishing:
+ saveAtPath:
+ propertyList
+ dealloc
+ init
+ description
+ setCancelled:
+ wasCancelled
+ backupUDID
+ snapshotID
+ startDate
+ setStartDate:
+ initWithPropertyList:
- isFinishing
- setBackupUDID:
- setSnapshotID:
- setFinishing:
- saveAtPath:
- propertyList
- dealloc
- init
- description
- setCancelled:
- wasCancelled
- backupUDID
- snapshotID
- startDate
- setStartDate:
- initWithPropertyList:
@end
