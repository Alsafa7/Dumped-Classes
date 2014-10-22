@interface PCScheduleSystemWakeOperation : NSOperation
{
	BOOL _scheduleOrCancel;
	id _wakeDate;
	id _serviceIdentifier;
	pointer _unqiueIdentifier;
}

+ dealloc
+ main
+ initForScheduledWake:wakeDate:serviceIdentifier:uniqueIdentifier:
- dealloc
- main
- initForScheduledWake:wakeDate:serviceIdentifier:uniqueIdentifier:
@end
