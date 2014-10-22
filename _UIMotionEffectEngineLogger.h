@interface _UIMotionEffectEngineLogger : NSObject
{
	Array _motionLevelSamples;
	long long _sampleCount;
	long long _updateFreqency;
	double _lastUpdateTimeStamp;
}

+ initWithFastUpdateInterval:slowUpdateInterval:
+ lastRecordedTimestamp
+ recordMotionMagnitude:atTimestamp:
+ _dumpToAggregated
- initWithFastUpdateInterval:slowUpdateInterval:
- lastRecordedTimestamp
- recordMotionMagnitude:atTimestamp:
- _dumpToAggregated
@end
