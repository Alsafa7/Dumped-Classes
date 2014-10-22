@interface IDSServiceContainer : NSObject
{
	id _monitor;
	id _listeners;
}

+ monitor
+ listeners
+ dealloc
+ initWithService:
+ hasListenerID:
+ addListenerID:
+ removeListenerID:
+ setMonitor:
- monitor
- listeners
- dealloc
- initWithService:
- hasListenerID:
- addListenerID:
- removeListenerID:
- setMonitor:
@end
