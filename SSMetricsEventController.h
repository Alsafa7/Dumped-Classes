@interface SSMetricsEventController : SSMetricsController
{
	id _table;
}

+ dealloc
+ init
+ flushUnreportedEventsWithCompletionHandler:
+ _serialQueueInsertEvents:withCompletionHandler:
+ _maximumUnreportedToSelect
+ _collectUnreportedPIDsFromDatabase:matchingReportURLString:since:
+ deleteEventsInsertedBefore:
+ deleteReportedEvents
+ insertEventSummaries:error:
+ markEventsAsReported:
+ unreportedEventsForURL:since:
+ newReportingSessionForURL:since:
+ unreportedEventURLsSince:
- dealloc
- init
- flushUnreportedEventsWithCompletionHandler:
- _serialQueueInsertEvents:withCompletionHandler:
- _maximumUnreportedToSelect
- _collectUnreportedPIDsFromDatabase:matchingReportURLString:since:
- deleteEventsInsertedBefore:
- deleteReportedEvents
- insertEventSummaries:error:
- markEventsAsReported:
- unreportedEventsForURL:since:
- newReportingSessionForURL:since:
- unreportedEventURLsSince:
@end
