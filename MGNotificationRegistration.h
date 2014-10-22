@interface MGNotificationRegistration : NSObject
{
	id _observers;
	id _queue;
	id _block;
	BOOL _deliverNotifications;
	id _requestedRegistrations;
}

+ dealloc
+ cancel
+ start
+ initWithQueue:block:
+ registerForNotification:argument:question:
- dealloc
- cancel
- start
- initWithQueue:block:
- registerForNotification:argument:question:
@end
