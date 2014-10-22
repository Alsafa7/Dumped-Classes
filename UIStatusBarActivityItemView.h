@interface UIStatusBarActivityItemView : UIStatusBarItemView
{
	id _activityIndicator;
	BOOL _slowActivity;
	BOOL _syncActivity;
	BOOL _newsstandActivity;
}

+ dealloc
+ setVisible:
+ updateForNewData:actions:
+ updateContentsAndWidth
+ shadowPadding
+ _stopAnimating
+ _startAnimating
+ _activityIndicatorStyle
- dealloc
- setVisible:
- updateForNewData:actions:
- updateContentsAndWidth
- shadowPadding
- _stopAnimating
- _startAnimating
- _activityIndicatorStyle
@end
