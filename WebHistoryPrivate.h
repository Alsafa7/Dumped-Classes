@interface WebHistoryPrivate : NSObject
{
	id _entriesByURL;
	pointer _entriesByDate;
	id _orderedLastVisitedDays;
	BOOL itemLimitSet;
	int itemLimit;
	BOOL ageInDaysLimitSet;
	int ageInDaysLimit;
}

@end
