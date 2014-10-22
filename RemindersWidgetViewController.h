@interface RemindersWidgetViewController : _SBUIWidgetViewController
{
	id _reminders;
	id _eventStore;
	id _eventStoreQueue;
	id _eventStoreIdleTimerSource;
	id _table;
	struct _preferredViewSize;
}

@end
