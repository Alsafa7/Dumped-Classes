@interface UIGroupTableViewCellBackground : UIView
{
	int _sectionLocation;
	int _newSectionLocation;
	long long _animationCount;
	long long _selectionStyle;
	long long _separatorStyle;
	id _topSeparatorView;
	id _bottomSeparatorView;
	id _selectionTintColor;
	double _sectionBorderWidth;
	struct _separatorInset;
	struct _groupBackgroundFlags;
}

@end
