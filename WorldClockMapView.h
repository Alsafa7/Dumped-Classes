@interface WorldClockMapView : UIView
{
	id _cityViews;
	id _addedCityView;
	id _timeFormatter;
	double _maxTimeStringWidth;
	double _maxTemperatureStringWidth;
	id _mapWithTerminator;
	Array _terminatorImages;
	id _terminatorTimestamp;
	id _terminatorTimer;
	id _yahooButton;
}

+ handleLocaleChange
+ weatherDataUpdatedForCities:
+ startUpdatingTime
+ stopUpdatingTime
+ updateTerminator
+ maxWidthForDateStringWithFont:
+ maxWidthForTemperatureStringWithFont:
+ addCity:animated:
+ yahooButtonPressed
+ handleSignificantTimeChange:
+ scheduleTerminatorUpdate
+ cancelTerminatorUpdate
+ terminatorUpdateInterval
+ terminatorPathForDayOfYear:orientation:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ willRotateToInterfaceOrientation:duration:
+ addCity:
+ removeCity:
- handleLocaleChange
- weatherDataUpdatedForCities:
- startUpdatingTime
- stopUpdatingTime
- updateTerminator
- maxWidthForDateStringWithFont:
- maxWidthForTemperatureStringWithFont:
- addCity:animated:
- yahooButtonPressed
- handleSignificantTimeChange:
- scheduleTerminatorUpdate
- cancelTerminatorUpdate
- terminatorUpdateInterval
- terminatorPathForDayOfYear:orientation:
- initWithFrame:
- dealloc
- layoutSubviews
- willRotateToInterfaceOrientation:duration:
- addCity:
- removeCity:
@end
