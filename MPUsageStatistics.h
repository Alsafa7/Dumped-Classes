@interface MPUsageStatistics : NSObject
{
	id _queue;
	id _domain;
	id _lastAggregateStatisticsDisplayCountKey;
	double _lastAggregateStatisticsDisplayCountTime;
}

+ incrementViewDisplayCountForViewController:
+ incrementViewDisplayCountForKey:
+ setAggregateStatisticsDomain:
+ init
+ domain
+ .cxx_destruct
- incrementViewDisplayCountForViewController:
- incrementViewDisplayCountForKey:
- setAggregateStatisticsDomain:
- init
- domain
- .cxx_destruct
@end
