@interface FTCServiceContainer : NSObject
{
	id _monitor;
	id _listeners;
}

+ monitor
+ listeners
+ initWithServiceType:
+ dealloc
+ hasListenerID:
+ addListenerID:
+ removeListenerID:
+ setMonitor:
- monitor
- listeners
- initWithServiceType:
- dealloc
- hasListenerID:
- addListenerID:
- removeListenerID:
- setMonitor:
@end
