@interface UIStatusBarBluetoothItemView : UIStatusBarItemView
{
	BOOL _connected;
	BOOL _shouldAnimateConnection;
}

+ setVisible:
+ updateForNewData:actions:
+ contentsImage
+ performPendedActions
+ alphaForConnected:
+ _blinkAnimationDidStop:finished:context:
- setVisible:
- updateForNewData:actions:
- contentsImage
- performPendedActions
- alphaForConnected:
- _blinkAnimationDidStop:finished:context:
@end
