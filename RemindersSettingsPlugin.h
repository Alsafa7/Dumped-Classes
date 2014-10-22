@interface RemindersSettingsPlugin : PSListController
{
	id _syncDaysSpecifier;
	id _defaultCalendarSpecifier;
	id _eventStore;
	BOOL _isSyncingReminders;
}

@end
