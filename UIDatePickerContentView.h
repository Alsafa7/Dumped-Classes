@interface UIDatePickerContentView : UIView
{
	struct _datePickerContentViewFlags;
	BOOL _isModern;
	id _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
}

+ initWithFrame:
+ dealloc
+ layoutSubviews
+ _canBeReusedInPickerView
+ titleLabel
+ isAmPm
+ setIsAmPm:
+ setTitleLabelMaxX:
+ setTitleAlignment:
+ titleLabelMaxX
+ titleAlignment
+ isModern
+ setIsModern:
- initWithFrame:
- dealloc
- layoutSubviews
- _canBeReusedInPickerView
- titleLabel
- isAmPm
- setIsAmPm:
- setTitleLabelMaxX:
- setTitleAlignment:
- titleLabelMaxX
- titleAlignment
- isModern
- setIsModern:
@end
