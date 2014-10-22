@interface AlarmScheduleHeaderView : UIView
{
	id _dateLabels;
	id _formatter;
	long long _firstDayOfWeek;
	long long _currentDayOfWeek;
	double _leftMargin;
	double _columnWidth;
}

+ handleLocaleChange
+ currentDayOfWeek
+ setCurrentDayOfWeek:
+ updateDayLabelValues
+ newDateLabel
+ initWithFrame:
+ dealloc
+ setBackgroundColor:
+ layoutSubviews
+ columnWidth
+ setColumnWidth:
+ setFirstDayOfWeek:
+ firstDayOfWeek
+ leftMargin
+ setLeftMargin:
- handleLocaleChange
- currentDayOfWeek
- setCurrentDayOfWeek:
- updateDayLabelValues
- newDateLabel
- initWithFrame:
- dealloc
- setBackgroundColor:
- layoutSubviews
- columnWidth
- setColumnWidth:
- setFirstDayOfWeek:
- firstDayOfWeek
- leftMargin
- setLeftMargin:
@end
