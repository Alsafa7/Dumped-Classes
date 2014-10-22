@interface SSMetricsController : NSObject
{
	id _connection;
	id _configuration;
	id _serialQueue;
	id _flushSerialQueue;
	BOOL _flushTimerEnabled;
	id _flushEventsTimer;
}

+ dealloc
+ init
+ _connection
+ configuration
+ isDisabled
+ setPageConfiguration:
+ pingURLs
+ locationWithPosition:type:fieldData:
+ setGlobalConfiguration:
+ flushUnreportedEventsWithCompletionHandler:
+ insertEvent:withCompletionHandler:
+ serialQueue
+ _handleFlushTimer
+ _setupFlushTimer
+ insertEvents:withCompletionHandler:
+ _serialQueueInsertEvents:withCompletionHandler:
+ _enumerateFieldValuesWithMap:fieldData:block:
+ _valueForField:withFieldData:
+ setFlushTimerEnabled:
+ isFlushTimerEnabled
- dealloc
- init
- _connection
- configuration
- isDisabled
- setPageConfiguration:
- pingURLs
- locationWithPosition:type:fieldData:
- setGlobalConfiguration:
- flushUnreportedEventsWithCompletionHandler:
- insertEvent:withCompletionHandler:
- serialQueue
- _handleFlushTimer
- _setupFlushTimer
- insertEvents:withCompletionHandler:
- _serialQueueInsertEvents:withCompletionHandler:
- _enumerateFieldValuesWithMap:fieldData:block:
- _valueForField:withFieldData:
- setFlushTimerEnabled:
- isFlushTimerEnabled
@end
