@interface EKReminderPredicate : EKPredicate
{
	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	BOOL _useCompletionDateAsAlternate;
	BOOL _useDueDateAsCompletionDate;
	int _sortOrder;
	id _title;
	id _listTitle;
	id _dueAfter;
	id _dueBefore;
	id _searchTerm;
	usigned long long _maxResults;
}

@end
