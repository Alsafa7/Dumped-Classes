@interface SBLockScreenTimerView : UIView
{
	id _endDate;
	id _timerDial;
	id _layoutLabel;
	id _timerLabel;
}

+ setTimerHidden:
+ updateTimerLabel
+ setLegibilitySettings:textStrength:dialStrength:
+ _newTimerDialForSettings:strength:
+ _newLegibilityLabelForSettings:strength:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ setEndDate:
+ baselineOffsetFromBottom
- setTimerHidden:
- updateTimerLabel
- setLegibilitySettings:textStrength:dialStrength:
- _newTimerDialForSettings:strength:
- _newLegibilityLabelForSettings:strength:
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- setEndDate:
- baselineOffsetFromBottom
@end
