@interface SKUIClientContext : NSObject
{
	id _bundle;
	id _clientInterface;
	id _configurationDictionary;
	id _dialogController;
	id _metricsConfigurationIdentifier;
	id _metricsPageContexts;
	id _navigationHistory;
	id _navigationHistoryPersistenceKey;
	id _storeFrontIdentifier;
	id _strings;
	id _urlBag;
	long long _userInterfaceIdiomOverride;
}

+ dealloc
+ description
+ localizedStringForKey:
+ clientInterface
+ setMetricsPageContext:forViewController:
+ setUserInterfaceIdiomOverride:
+ valueForConfigurationKey:
+ getDefaultMetricsControllerWithCompletionBlock:
+ URLBag
+ metricsPageContextForViewController:
+ navigationHistory
+ pushNavigationHistoryPageIdentifier:
+ localizedAlertWithError:
+ metricsConfigurationIdentifier
+ _navigationHistory
+ setMetricsConfigurationIdentifier:
+ navigationHistoryPersistenceKey
+ setNavigationHistoryPersistenceKey:
+ userInterfaceIdiomOverride
+ .cxx_destruct
+ storeFrontIdentifier
+ clientInterface:presentDialog:
+ initWithConfigurationDictionary:
- dealloc
- description
- localizedStringForKey:
- clientInterface
- setMetricsPageContext:forViewController:
- setUserInterfaceIdiomOverride:
- valueForConfigurationKey:
- getDefaultMetricsControllerWithCompletionBlock:
- URLBag
- metricsPageContextForViewController:
- navigationHistory
- pushNavigationHistoryPageIdentifier:
- localizedAlertWithError:
- metricsConfigurationIdentifier
- _navigationHistory
- setMetricsConfigurationIdentifier:
- navigationHistoryPersistenceKey
- setNavigationHistoryPersistenceKey:
- userInterfaceIdiomOverride
- .cxx_destruct
- storeFrontIdentifier
- clientInterface:presentDialog:
- initWithConfigurationDictionary:
@end
