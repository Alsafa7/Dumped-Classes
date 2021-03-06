@interface WorldClockMapCityView : UIView
{
	id _city;
	id _timeLabel;
	id _nameLabel;
	id _temperatureLabel;
	id _conditionImageView;
	id _timeFormatter;
	int _weatherIconPlacement;
	BOOL _doneFirstLayout;
}

+ handleLocaleChange
+ weatherDataUpdated
+ setTimeLabelWidth:
+ setTemperatureLabelWidth:
+ initWithCity:
+ setTimeFormatter:
+ setWeatherIconPlacement:
+ weatherIconPlacement
+ hotspotOffsetForPlacement:
+ sizeForIntersectionWithCityView:atOrigin:selfOrigin:
+ hotspotOffset
+ temperatureString
+ setConditionCodeFromCity:
+ labelViews
+ conditionImageFrameForPlacement:
+ city
+ setCity:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ layoutIfNeeded
+ start
+ stop
+ timeFormatter
+ runMode
+ updateTime
- handleLocaleChange
- weatherDataUpdated
- setTimeLabelWidth:
- setTemperatureLabelWidth:
- initWithCity:
- setTimeFormatter:
- setWeatherIconPlacement:
- weatherIconPlacement
- hotspotOffsetForPlacement:
- sizeForIntersectionWithCityView:atOrigin:selfOrigin:
- hotspotOffset
- temperatureString
- setConditionCodeFromCity:
- labelViews
- conditionImageFrameForPlacement:
- city
- setCity:
- dealloc
- layoutSubviews
- sizeThatFits:
- layoutIfNeeded
- start
- stop
- timeFormatter
- runMode
- updateTime
@end
