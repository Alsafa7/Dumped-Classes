@interface GKSegmentInfo : NSObject
{
	id _delegateWeak;
	id _dataSource;
	id _title;
	id _loadingMatchine;
}

+ setLoadingState:
+ didEnterLoadingState
+ didExitLoadingState
+ didEnterNoContentState
+ didEnterErrorState
+ loadingState
+ loadingMatchine
+ setLoadingMatchine:
+ dealloc
+ setDataSource:
+ setDelegate:
+ setTitle:
+ description
+ dataSource
+ delegate
+ title
+ initWithDataSource:
- setLoadingState:
- didEnterLoadingState
- didExitLoadingState
- didEnterNoContentState
- didEnterErrorState
- loadingState
- loadingMatchine
- setLoadingMatchine:
- dealloc
- setDataSource:
- setDelegate:
- setTitle:
- description
- dataSource
- delegate
- title
- initWithDataSource:
@end
