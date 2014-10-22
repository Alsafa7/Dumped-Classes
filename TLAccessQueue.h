@interface TLAccessQueue : NSObject
{
	id _label;
	id _threadLocalStorageKey;
	id _serialQueue;
}

+ dealloc
+ label
+ initWithLabel:appendUUIDToLabel:
+ _setLabel:
+ performSynchronousBlock:
+ _setThreadLocalStorageKey:
+ _setSerialQueue:
+ _threadLocalStorageKey
+ _serialQueue
+ _performSynchronousBlockInSerialQueue:
+ performAsynchronousBlock:
- dealloc
- label
- initWithLabel:appendUUIDToLabel:
- _setLabel:
- performSynchronousBlock:
- _setThreadLocalStorageKey:
- _setSerialQueue:
- _threadLocalStorageKey
- _serialQueue
- _performSynchronousBlockInSerialQueue:
- performAsynchronousBlock:
@end
