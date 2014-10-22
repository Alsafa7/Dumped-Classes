@interface UIActivityGroupListViewController : UIViewController
{
	BOOL _darkStyleOnLegacyApp;
	BOOL _embedded;
	BOOL _modal;
	id _cancelButton;
	id _backdropView;
	id _contentView;
	id _statusBlurView;
	id _statusBlurHeight;
	long long _currentStatusBarStyle;
	id _dimView;
	id _groupView;
}

@end
