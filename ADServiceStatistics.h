@interface ADServiceStatistics : NSObject
{
	id _serviceIdentifier;
	id _statsDict;
	id _commandTimes;
}

+ initWithServiceIdentifier:
+ markIncomingCommand:
+ markResponseForCommand:
+ _saveStats
+ _statsDirectory
+ _serviceStatsPath
+ _statsDict
+ _commandTimes
+ _statsForCommand:
+ serviceIdentifier
+ dealloc
+ .cxx_destruct
- initWithServiceIdentifier:
- markIncomingCommand:
- markResponseForCommand:
- _saveStats
- _statsDirectory
- _serviceStatsPath
- _statsDict
- _commandTimes
- _statsForCommand:
- serviceIdentifier
- dealloc
- .cxx_destruct
@end
