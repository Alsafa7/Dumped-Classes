@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView
{
	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;
}

+ touchesEnded:withEvent:
+ updateForNewData:actions:
+ contentsImage
+ extraLeftPadding
+ maximumOverlap
+ _stringForRSSI
+ _dataNetworkImage
- touchesEnded:withEvent:
- updateForNewData:actions:
- contentsImage
- extraLeftPadding
- maximumOverlap
- _stringForRSSI
- _dataNetworkImage
@end
