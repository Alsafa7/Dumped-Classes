@interface PHRecentsViewController : PhoneViewController
{
	id _table;
	id _toggleButton;
	int _tableFilterMode;
	id _call;
	bit[1] _isRegisteredForActiveNotifications;
	id indexPathsForMissedCalls;
	id indexPathsForNormalCalls;
	id _recentsManager;
}

@end
