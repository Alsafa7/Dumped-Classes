@interface SBFakeDuet : NSObject
{
	id _triggers;
	id _appsToLaunch;
	id _recommendationHandler;
}

+ _refreshAppsToLaunch
+ _refreshTriggers
+ _wake:
+ _switcherRevealed:
+ _frontDisplayChanged:
+ setRecommendationHandler:
+ setTriggers:
+ setAppsToLaunch:
+ appsToLaunch
+ recommendationHandler
+ _handleTrigger:
+ okToLaunch:forReasons:withHandler:
+ triggers
+ dealloc
+ init
+ setAppLaunchRecommendationHandler:
- _refreshAppsToLaunch
- _refreshTriggers
- _wake:
- _switcherRevealed:
- _frontDisplayChanged:
- setRecommendationHandler:
- setTriggers:
- setAppsToLaunch:
- appsToLaunch
- recommendationHandler
- _handleTrigger:
- okToLaunch:forReasons:withHandler:
- triggers
- dealloc
- init
- setAppLaunchRecommendationHandler:
@end
