@interface ASAssetQuery : NSObject
{
	BOOL _queriesLocalAssetInformationOnly;
	id _predicate;
	id _results;
	double _networkTimeout;
	id _assetType;
}

+ dealloc
+ initWithAssetType:
+ setQueriesLocalAssetInformationOnly:
+ runQueryAndReturnError:
+ setPredicate:
+ results
+ setResults:
+ stopQuery
+ predicate
+ startQuery:
+ networkTimeout
+ setNetworkTimeout:
+ assetType
+ setAssetType:
+ queriesLocalAssetInformationOnly
- dealloc
- initWithAssetType:
- setQueriesLocalAssetInformationOnly:
- runQueryAndReturnError:
- setPredicate:
- results
- setResults:
- stopQuery
- predicate
- startQuery:
- networkTimeout
- setNetworkTimeout:
- assetType
- setAssetType:
- queriesLocalAssetInformationOnly
@end
