@interface SBBulletinAlertHandlerRegistry : NSObject
{
	id _handlersBySectionID;
	id _settings;
	BOOL _disabled;
}

+ alertHandlersForSection:
+ addAlertHandler:forSection:
+ dealloc
+ init
+ settings:changedValueForKey:
- alertHandlersForSection:
- addAlertHandler:forSection:
- dealloc
- init
- settings:changedValueForKey:
@end
