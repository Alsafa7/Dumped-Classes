@interface AVCMNotificationDispatcherListenerAndCallback : NSObject
{
	id _weakReferenceToListener;
	pointer _callback;
}

+ initWithWeakReferenceToListener:callback:
+ callback
+ dealloc
+ listener
- initWithWeakReferenceToListener:callback:
- callback
- dealloc
- listener
@end
