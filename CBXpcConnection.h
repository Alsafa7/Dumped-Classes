@interface CBXpcConnection : NSObject
{
	id _delegate;
	id _queue;
	id _options;
	int _type;
	id _delegateLock;
	id _xpcSendBarrier;
	id _xpcConnection;
}

+ sendMsg:args:
+ sendSyncMsg:args:
+ initWithDelegate:queue:options:sessionType:
+ isMainQueue
+ handleMsg:args:
+ handleConnectionEvent:
+ checkOut
+ sendAsyncMsg:args:
+ allocXpcDictionaryWithNSDictionary:
+ allocXpcMsg:args:
+ nsDictionaryFromXpcDictionary:
+ handleReset
+ handleInvalid
+ allocXpcArrayWithNSArray:
+ allocXpcObjectWithNSObject:
+ nsArrayWithXpcArray:
+ nsObjectWithXpcObject:
+ dealloc
+ setDelegate:
+ delegate
+ disconnect
+ checkIn
- sendMsg:args:
- sendSyncMsg:args:
- initWithDelegate:queue:options:sessionType:
- isMainQueue
- handleMsg:args:
- handleConnectionEvent:
- checkOut
- sendAsyncMsg:args:
- allocXpcDictionaryWithNSDictionary:
- allocXpcMsg:args:
- nsDictionaryFromXpcDictionary:
- handleReset
- handleInvalid
- allocXpcArrayWithNSArray:
- allocXpcObjectWithNSObject:
- nsArrayWithXpcArray:
- nsObjectWithXpcObject:
- dealloc
- setDelegate:
- delegate
- disconnect
- checkIn
@end
