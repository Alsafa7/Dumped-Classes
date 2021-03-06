@interface SPSearchAgent : NSObject
{
	id _currentToken;
	id _prefixWithNoResults;
	id _sections;
	id _searchDomains;
	unsigned int _resultCount;
	int _options;
	id _topHitResultSection;
	id _searchThroughSection;
	BOOL _searchThroughAllowed;
	BOOL _queryComplete;
	id _delegate;
}

+ resultCount
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ setDelegate:
+ init
+ delegate
+ invalidate
+ clear
+ setOptions:
+ options
+ searchDomains
+ searchDaemonQuery:addedResults:
+ searchDaemonQuery:encounteredError:
+ searchDaemonQueryCompleted:
+ initWithOptions:
+ sectionCount
+ sectionAtIndex:
+ handleOptionsForNewSections:
+ _indexOfCompatibleSection:
+ addSections:
+ queryString
+ _shouldIgnoreQuery:
+ updateSearchThroughWithString:
+ addDeserializer:
+ hasResults
+ stuffChanged
+ setSearchDomains:
+ removeSectionAtIndex:
+ retrieveImageDataForResult:inSection:preferredSize:completion:
+ setQueryString:
+ queryComplete
- resultCount
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- setDelegate:
- init
- delegate
- invalidate
- clear
- setOptions:
- options
- searchDomains
- searchDaemonQuery:addedResults:
- searchDaemonQuery:encounteredError:
- searchDaemonQueryCompleted:
- initWithOptions:
- sectionCount
- sectionAtIndex:
- handleOptionsForNewSections:
- _indexOfCompatibleSection:
- addSections:
- queryString
- _shouldIgnoreQuery:
- updateSearchThroughWithString:
- addDeserializer:
- hasResults
- stuffChanged
- setSearchDomains:
- removeSectionAtIndex:
- retrieveImageDataForResult:inSection:preferredSize:completion:
- setQueryString:
- queryComplete
@end
