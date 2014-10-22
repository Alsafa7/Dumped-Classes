@interface PhoneRootViewController : UIViewController
{
	int _currentViewType;
	id _contentView;
	id _tabBarViewController;
	id _faceTimeRegistrationViewController;
	id _inCallViewController;
	id _videoConferenceViewController;
	id _emergencyDialerViewController;
	BOOL _faceTimeRegistrationViewIsShowing;
	BOOL _disableAutomaticAppearEvents;
	BOOL _inTransitionBetweenViewTypes;
	BOOL _returnToTabViewOnSuspendIfNeeded;
	id _backdropView;
}

@end
