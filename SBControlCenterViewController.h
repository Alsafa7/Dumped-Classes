@interface SBControlCenterViewController : UIViewController
{
	id _containerView;
	id _contentView;
	id _panGesture;
	id _tapGesture;
	id _sectionList;
	id _settings;
	BOOL _presented;
	BOOL _transitioning;
	id _delegate;
}

@end
