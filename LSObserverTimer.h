@interface LSObserverTimer : NSObject
{
	id _name;
	id _timer;
	id _lastFiredDate;
	id _applications;
	double _minInterval;
	double _latency;
	SEL _observerSelector;
}

+ addApplication:
+ lastFiredDate
+ minInterval
+ latency
+ setLastFiredDate:
+ observerSelector
+ clearApplications
+ initWithSelector:
+ removeApplication:
+ notifyObservers:withApplication:
+ setApplications:
+ setObserverSelector:
+ dealloc
+ description
+ setName:
+ name
+ setTimer:
+ timer
+ sendMessage:
+ applications
- addApplication:
- lastFiredDate
- minInterval
- latency
- setLastFiredDate:
- observerSelector
- clearApplications
- initWithSelector:
- removeApplication:
- notifyObservers:withApplication:
- setApplications:
- setObserverSelector:
- dealloc
- description
- setName:
- name
- setTimer:
- timer
- sendMessage:
- applications
@end
