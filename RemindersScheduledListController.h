@interface RemindersScheduledListController : RemindersStandardListController
{
	id _newTodayReminder;
	id _newTomorrowReminder;
	id _headerViews;
	id _tableTapRecognizer;
	id _firstVisibleDateComponentsBeforeReload;
}

@end
