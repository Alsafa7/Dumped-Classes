@interface AlarmScheduleGridView : UIView
{
	id _patternImage;
	double _leftMargin;
	double _columnWidth;
	long long _highlightedColumnIndex;
	id _hourLabels;
	id _calendar;
	id _baseDate;
	id _formatter;
	id _backgroundImageView;
	double _preRotationColumnWidth;
	double _preRotationLeftMargin;
}

+ handleLocaleChange
+ newHourLabel
+ setupWithCurrentLocale
+ updateHourLabelValues
+ rebuildGrid
+ isShowingHourLabels
+ setShowingHourLabels:
+ highlightedColumnIndex
+ setHighlightedColumnIndex:
+ initWithFrame:
+ dealloc
+ setFrame:
+ layoutSubviews
+ setBounds:
+ willRotateToInterfaceOrientation:duration:
+ willAnimateRotationToInterfaceOrientation:duration:
+ setVisibleBounds:
+ columnWidth
+ setColumnWidth:
+ leftMargin
+ setLeftMargin:
- handleLocaleChange
- newHourLabel
- setupWithCurrentLocale
- updateHourLabelValues
- rebuildGrid
- isShowingHourLabels
- setShowingHourLabels:
- highlightedColumnIndex
- setHighlightedColumnIndex:
- initWithFrame:
- dealloc
- setFrame:
- layoutSubviews
- setBounds:
- willRotateToInterfaceOrientation:duration:
- willAnimateRotationToInterfaceOrientation:duration:
- setVisibleBounds:
- columnWidth
- setColumnWidth:
- leftMargin
- setLeftMargin:
@end
