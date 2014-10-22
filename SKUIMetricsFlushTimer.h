@interface SKUIMetricsFlushTimer : NSObject
{
	id _metricsControllers;
	id _timer;
	usigned long long _timerStartTime;
}

+ _applicationDidEnterBackgroundNotification:
+ _applicationWillEnterForegroundNotification:
+ dealloc
+ init
+ addMetricsController:
+ removeMetricsController:
+ flushAllMetricsControllers
+ reloadFlushInterval
+ _performFlush
+ .cxx_destruct
- _applicationDidEnterBackgroundNotification:
- _applicationWillEnterForegroundNotification:
- dealloc
- init
- addMetricsController:
- removeMetricsController:
- flushAllMetricsControllers
- reloadFlushInterval
- _performFlush
- .cxx_destruct
@end
