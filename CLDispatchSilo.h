@interface CLDispatchSilo : CLSilo
{
	id _queue;
}

+ sync:
+ assertInside
+ assertOutside
+ newTimer
+ async:
+ afterInterval:async:
+ initWithUnderlyingQueue:
+ initMain
+ debugDescription
+ initWithIdentifier:
+ queue
+ .cxx_destruct
- sync:
- assertInside
- assertOutside
- newTimer
- async:
- afterInterval:async:
- initWithUnderlyingQueue:
- initMain
- debugDescription
- initWithIdentifier:
- queue
- .cxx_destruct
@end
