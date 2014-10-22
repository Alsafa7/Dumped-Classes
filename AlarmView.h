@interface AlarmView : UIView
{
	long long _style;
	id _timeLabel;
	id _name;
	id _repeatText;
	id _detailLabel;
	id _enabledSwitch;
}

+ detailLabel
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ setStyle:
+ style
+ setName:
+ name
+ setRepeatText:
+ setName:andRepeatText:textColor:
+ repeatText
+ setDetailLabel:
+ enabledSwitch
+ timeLabel
- detailLabel
- initWithFrame:
- dealloc
- layoutSubviews
- setStyle:
- style
- setName:
- name
- setRepeatText:
- setName:andRepeatText:textColor:
- repeatText
- setDetailLabel:
- enabledSwitch
- timeLabel
@end
