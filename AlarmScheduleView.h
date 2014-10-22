@interface AlarmScheduleView : UIView
{
	id _headerView;
	id _alarmsView;
	long long _currentDay;
}

+ handleLocaleChange
+ alarmsView
+ refreshHeader
+ handleSignificantTimeChange
+ currentDay
+ setCurrentDay:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ headerView
- handleLocaleChange
- alarmsView
- refreshHeader
- handleSignificantTimeChange
- currentDay
- setCurrentDay:
- initWithFrame:
- dealloc
- layoutSubviews
- headerView
@end
