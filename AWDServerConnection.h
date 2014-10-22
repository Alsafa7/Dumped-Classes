@interface AWDServerConnection : NSObject
{
	pointer fServerConnection;
}

+ dealloc
+ initWithComponentId:andBlockOnConfiguration:
+ newMetricContainerWithIdentifier:
+ submitMetric:
+ initWithComponentId:
+ registerQueriableMetricCallback:forIdentifier:
+ registerQueriableMetricCallbackForLogging:
+ registerConfigChangeCallback:
+ getAWDTimestamp
+ flushToQueue:block:
- dealloc
- initWithComponentId:andBlockOnConfiguration:
- newMetricContainerWithIdentifier:
- submitMetric:
- initWithComponentId:
- registerQueriableMetricCallback:forIdentifier:
- registerQueriableMetricCallbackForLogging:
- registerConfigChangeCallback:
- getAWDTimestamp
- flushToQueue:block:
@end
