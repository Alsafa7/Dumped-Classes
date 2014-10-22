@interface _UIStatusBarStateStackInfo : NSObject
{
	int _hostPID;
	long long _statusBarOrientationWithoutHost;
	double _statusBarHeightWithoutHost;
}

+ statusBarOrientationWithoutHost
+ setStatusBarOrientationWithoutHost:
+ statusBarHeightWithoutHost
+ setStatusBarHeightWithoutHost:
+ hostPID
+ setHostPID:
- statusBarOrientationWithoutHost
- setStatusBarOrientationWithoutHost:
- statusBarHeightWithoutHost
- setStatusBarHeightWithoutHost:
- hostPID
- setHostPID:
@end
