@interface HourlyForecast : NSObject
{
	float _percentPrecipitation;
	usigned long long _eventType;
	id _time;
	long long _hourIndex;
	id _detail;
	long long _conditionCode;
}

+ eventType
+ dealloc
+ description
+ setDetail:
+ setTime:
+ time
+ conditionCode
+ setConditionCode:
+ setEventType:
+ hourIndex
+ setHourIndex:
+ percentPrecipitation
+ setPercentPrecipitation:
+ detail
- eventType
- dealloc
- description
- setDetail:
- setTime:
- time
- conditionCode
- setConditionCode:
- setEventType:
- hourIndex
- setHourIndex:
- percentPrecipitation
- setPercentPrecipitation:
- detail
@end
