@interface AVCMNotificationDispatcherListenerKey : NSObject
{
	id _weakReferenceToListener;
	pointer _callback;
	id _name;
	_object;
}

+ initWithWeakReferenceToListener:callback:name:object:
+ dealloc
+ isEqual:
+ hash
+ copyWithZone:
- initWithWeakReferenceToListener:callback:name:object:
- dealloc
- isEqual:
- hash
- copyWithZone:
@end
