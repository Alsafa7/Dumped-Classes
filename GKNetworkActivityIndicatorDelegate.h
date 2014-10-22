@interface GKNetworkActivityIndicatorDelegate : NSObject
{
	int _networkIndicatorCount;
}

+ networkIndicatorCount
+ setNetworkIndicatorCount:
+ beginNetworkActivity
+ endNetworkActivity
+ resetNetworkActivity
- networkIndicatorCount
- setNetworkIndicatorCount:
- beginNetworkActivity
- endNetworkActivity
- resetNetworkActivity
@end
