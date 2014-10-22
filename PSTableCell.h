@interface PSTableCell : UITableViewCell
{
	id _value;
	id _checkedImageView;
	BOOL _checked;
	BOOL _shouldHideTitle;
	id _hiddenTitle;
	int _alignment;
	SEL _pAction;
	id _pTarget;
	BOOL _cellEnabled;
	id _specifier;
	long long _type;
	BOOL _lazyIcon;
	BOOL _lazyIconDontUnload;
	BOOL _lazyIconForceSynchronous;
	id _lazyIconAppID;
	BOOL _reusedCell;
	BOOL _isCopyable;
	id _longTapRecognizer;
}

@end
