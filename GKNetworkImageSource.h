@interface GKNetworkImageSource : GKImageSource
{
	id _loadingGroups;
}

+ loadImageForURLString:reference:queue:handler:
+ imageNeedsRefresh:
+ loadingGroups
+ setLoadingGroups:
+ dealloc
- loadImageForURLString:reference:queue:handler:
- imageNeedsRefresh:
- loadingGroups
- setLoadingGroups:
- dealloc
@end
