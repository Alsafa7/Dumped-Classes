@interface SULoadSectionsOperation : ISOperation
{
	id _activeSectionVersionString;
	id _clientInterface;
	id _sectionsResponse;
	BOOL _shouldUseCache;
}

+ dealloc
+ init
+ run
+ initWithClientInterface:
+ _loadSectionsFromNetworkWithDictionary:
+ _cachePathForVersion:create:
+ _setSectionsResponse:
+ shouldUseCache
+ _loadSectionsFromCacheForVersion:
+ sectionsResponse
+ _writeSectionsResponseToCache:forVersion:
+ activeSectionVersionString
+ setActiveSectionVersionString:
+ setShouldUseCache:
- dealloc
- init
- run
- initWithClientInterface:
- _loadSectionsFromNetworkWithDictionary:
- _cachePathForVersion:create:
- _setSectionsResponse:
- shouldUseCache
- _loadSectionsFromCacheForVersion:
- sectionsResponse
- _writeSectionsResponseToCache:forVersion:
- activeSectionVersionString
- setActiveSectionVersionString:
- setShouldUseCache:
@end
