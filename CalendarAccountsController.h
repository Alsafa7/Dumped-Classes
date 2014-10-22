@interface CalendarAccountsController : NSObject
{
	id _lastStoreListingRefreshDates;
	id _refreshQueue;
	id _accountStore;
}

+ accountStore
+ accountTypeTitleForSourceWithExternalId:
+ sortOrderForSourceType:
+ titleForSource:forBeginningOfSentence:
+ accountTypeTitleForSource:
+ sourceIsManaged:
+ sortOrderForSource:
+ sortOrderForStoreType:
+ sourceListingNeedsRefresh:
+ refreshListingForSource:isUserRequested:
+ init
+ .cxx_destruct
- accountStore
- accountTypeTitleForSourceWithExternalId:
- sortOrderForSourceType:
- titleForSource:forBeginningOfSentence:
- accountTypeTitleForSource:
- sourceIsManaged:
- sortOrderForSource:
- sortOrderForStoreType:
- sourceListingNeedsRefresh:
- refreshListingForSource:isUserRequested:
- init
- .cxx_destruct
@end
