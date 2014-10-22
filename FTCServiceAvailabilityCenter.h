@interface FTCServiceAvailabilityCenter : NSObject
{
	id _availabilityHandlers;
}

+ dealloc
+ init
+ hasListenerID:forService:
+ _postNotificationForService:availability:
+ _handleServiceMonitorNotification:
+ _isValidServiceType:
+ _startListeningToMonitor:
+ containerForService:create:
+ _stopListeningToMonitor:
+ addListenerID:forService:
+ removeListenerID:forService:
+ availabilityForListenerID:forService:
- dealloc
- init
- hasListenerID:forService:
- _postNotificationForService:availability:
- _handleServiceMonitorNotification:
- _isValidServiceType:
- _startListeningToMonitor:
- containerForService:create:
- _stopListeningToMonitor:
- addListenerID:forService:
- removeListenerID:forService:
- availabilityForListenerID:forService:
@end
