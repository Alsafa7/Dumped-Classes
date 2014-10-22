@interface SBUIControlCenterSlider : UISlider
{
	double _valueImagePadding;
	BOOL _customTrackImage;
	BOOL _highlightMinimumTrackImage;
	id _minValueMaskImage;
	id _maxValueMaskImage;
	id _trackMaskImage;
	struct _trackCapInsets;
}

@end
