@interface SSDownloadManagerOptions : NSObject
{
	id _downloadKinds;
	BOOL _filterExternalOriginatedDownloads;
	id _persistenceIdentifier;
	id _prefetchedDownloadExternalProperties;
	id _prefetchedDownloadProperties;
}

+ setDownloadKinds:
+ setPersistenceIdentifier:
+ setPrefetchedDownloadProperties:
+ setPrefetchedDownloadExternalProperties:
+ dealloc
+ isEqual:
+ hash
+ copyWithZone:
+ shouldFilterExternalOriginatedDownloads
+ prefetchedDownloadExternalProperties
+ prefetchedDownloadProperties
+ persistenceIdentifier
+ setShouldFilterExternalOriginatedDownloads:
+ downloadKinds
- setDownloadKinds:
- setPersistenceIdentifier:
- setPrefetchedDownloadProperties:
- setPrefetchedDownloadExternalProperties:
- dealloc
- isEqual:
- hash
- copyWithZone:
- shouldFilterExternalOriginatedDownloads
- prefetchedDownloadExternalProperties
- prefetchedDownloadProperties
- persistenceIdentifier
- setShouldFilterExternalOriginatedDownloads:
- downloadKinds
@end
