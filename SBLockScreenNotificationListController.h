@interface SBLockScreenNotificationListController : UIViewController
{
	id _notificationView;
	id _delegate;
	id _observer;
	id _listItems;
	id _realertTimers;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	id _actionContext;
	id _bannerTarget;
	id _listItemsBannerQueue;
	BOOL _bannersEnabled;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	long long _messagePrivacyRevealState;
	BOOL _hasAnyContent;
}

@end
