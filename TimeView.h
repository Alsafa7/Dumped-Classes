@interface TimeView : UIView
{
	double _timeValue;
	id _timeLabel;
	double _maxTimeLabelWidth;
}

+ handleLocaleChange
+ configureTimeLabel
+ sizeLabelToFit
+ configureBackground
+ showSubseconds
+ setTimeLabelFrame:
+ dealloc
+ init
+ layoutSubviews
+ setTime:
+ time
+ timeLabel
- handleLocaleChange
- configureTimeLabel
- sizeLabelToFit
- configureBackground
- showSubseconds
- setTimeLabelFrame:
- dealloc
- init
- layoutSubviews
- setTime:
- time
- timeLabel
@end
