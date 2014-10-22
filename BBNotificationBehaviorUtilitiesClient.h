@interface BBNotificationBehaviorUtilitiesClient : NSObject
{
	id _connection;
	id _filteringStateChangeHandler;
	id _activeBehaviorOverridesChangeHandler;
}

+ dealloc
+ init
+ invalidate
+ proxy:detailedSignatureForSelector:
+ connection:connectionStateDidChange:
+ activeBehaviorOverrideTypesChanged:
+ notificationPresentationFilteringChangedToEnabled:
+ setFilteringStateChangeHandler:
+ setActiveBehaviorOverridesChangeHandler:
+ shouldPresentNotificationOfType:fromSender:withHandler:
- dealloc
- init
- invalidate
- proxy:detailedSignatureForSelector:
- connection:connectionStateDidChange:
- activeBehaviorOverrideTypesChanged:
- notificationPresentationFilteringChangedToEnabled:
- setFilteringStateChangeHandler:
- setActiveBehaviorOverridesChangeHandler:
- shouldPresentNotificationOfType:fromSender:withHandler:
@end
