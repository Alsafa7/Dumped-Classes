@interface MSClientSidePauseContext : NSObject
{
	id _UUID;
	id _timerQueue;
	id _server;
	id _gate;
}

+ server
+ resume
+ setServer:
+ initWithServer:
+ gate
+ setGate:
+ timerQueue
+ timerQueueTimerFired
+ timerQueuePing
+ setTimerQueue:
+ .cxx_destruct
- server
- resume
- setServer:
- initWithServer:
- gate
- setGate:
- timerQueue
- timerQueueTimerFired
- timerQueuePing
- setTimerQueue:
- .cxx_destruct
@end
