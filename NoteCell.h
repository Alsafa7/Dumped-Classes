@interface NoteCell : NotesUITableViewCell
{
	id _titleLabel;
	id _dateLabel;
	id _titleAttributes;
	id _titleSearchAttributes;
	struct _lastFrame;
	double _baselineOriginTargetForCurentUserFontSize;
	double _titleLabelBaselineOffsetFromBottom;
	double _dateLabelBaselineOffsetFromBottom;
	id _summary;
	BOOL _containsCJK;
	BOOL _useAlternateTextColor;
	BOOL _useLetterpress;
	long long _letterpressStyle;
	BOOL _labelSupportsFastLetterpress;
}

@end
