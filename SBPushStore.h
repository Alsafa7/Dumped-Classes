@interface SBPushStore : NSObject
{
	id _notificationsQueue;
	id _settingsQueue;
	id _observersByBundleID;
}

@end
