@interface SUWebView : UIWebView
{
	BOOL _isPinned;
	id _originalBackgroundColor;
	char _originalShowsBackgroundShadow;
	double _pinnedHeaderInsetAdjustment;
	id _pinnedHeaderView;
	bit[1] _scrollingDisabled;
	BOOL _showsTopBackgroundShadow;
	long long _synchronousLayoutCount;
	id _topBackgroundColor;
}

@end
