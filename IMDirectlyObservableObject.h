@interface IMDirectlyObservableObject : NSObject
{
	id _observers;
}

+ dealloc
+ removeObserver:
+ setObservers:
+ observers
+ addObserver:
+ informObserversOfNotification:
+ _objectDidPostNotification:
- dealloc
- removeObserver:
- setObservers:
- observers
- addObserver:
- informObserversOfNotification:
- _objectDidPostNotification:
@end
