@interface SBAppSliderIconController : UIViewController
{
	id _appList;
	id _iconViews;
	id _iconViewCenters;
	id _scrollView;
	id _iconContainer;
	double _distanceBetweenCenters;
	double _nominalDistanceBetweenCenters3;
	double _nominalDistanceBetweenCenters5;
	usigned long long _iconTransitionIndex;
	BOOL _dragMaster;
	BOOL _preventScroll;
	id _stopScrollingGesture;
	long long _layoutOrientation;
	long long _simplicityOptions;
	struct _iconViewDefaultFrame;
	id _delegate;
	id _displayIdentifiers;
}

@end
