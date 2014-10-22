@interface RemindersCheckboxCell : RemindersListCell
{
	id _titleLabel;
	id _deadlineLabel;
	id _locationLabel;
	id _notesLabel;
	id _calendarLabel;
	id _clearButton;
	id _checkboxView;
	id _linkHighlightView;
	id _actionPressRecognizer;
	struct _titleLabelSize;
	struct _notesLabelSize;
	BOOL _titleLabelSizeValid;
	BOOL _notesLabelSizeValid;
	BOOL _representsHighlightedReminder;
	int _appearance;
	BOOL _completed;
	BOOL _overdue;
	BOOL _checkboxHidden;
	BOOL _checkboxEnabled;
	int _clearButtonPosition;
	int _style;
	id _title;
	id _location;
	id _deadline;
	id _notes;
	id _calendarName;
	id _calendarColor;
	long long _priorityLevel;
	id _delegate;
	id _textViewDelegate;
	id _textView;
	usigned long long _positionOfDeadline;
	double _maxLayoutHeight;
	id _actionURL;
	id _matchingSearchTerm;
	id _titleAttributes;
}

@end
