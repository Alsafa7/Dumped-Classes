@interface _MusicViewControllerNotificationObserver : NSObject
{
	id _notificationName;
	id _object;
	SEL _selector;
	id _target;
}

+ dealloc
+ target
+ object
+ selector
+ notificationName
+ initWithTarget:selector:notificationName:object:
+ _didReceiveNotification:
+ .cxx_destruct
- dealloc
- target
- object
- selector
- notificationName
- initWithTarget:selector:notificationName:object:
- _didReceiveNotification:
- .cxx_destruct
@end
