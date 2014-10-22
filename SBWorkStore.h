@interface SBWorkStore : NSObject
{
	id _workItemsPerKey;
	id _keysWithWork;
	id _observers;
	id _dispatchQueue;
	usigned long long _maxWorkPerKey;
	id _workExpirationPeriods;
	double _defaultWorkExpirationPeriod;
}

+ _queue_expireWorkForKey:
+ _notifyObserversWorkDidChange
+ dequeueWorkForKey:
+ initWithMaximumNumberOfWorkItemsPerKey:
+ addWorkItem:forKey:
+ purgeWorkForKey:
+ setWorkExpirationPeriod:forKey:
+ workItemsPerKey
+ keysWithWork
+ maxWorkPerKey
+ defaultWorkExpirationPeriod
+ setDefaultWorkExpirationPeriod:
+ dealloc
+ description
+ removeObserver:
+ observers
+ addObserver:
- _queue_expireWorkForKey:
- _notifyObserversWorkDidChange
- dequeueWorkForKey:
- initWithMaximumNumberOfWorkItemsPerKey:
- addWorkItem:forKey:
- purgeWorkForKey:
- setWorkExpirationPeriod:forKey:
- workItemsPerKey
- keysWithWork
- maxWorkPerKey
- defaultWorkExpirationPeriod
- setDefaultWorkExpirationPeriod:
- dealloc
- description
- removeObserver:
- observers
- addObserver:
@end
