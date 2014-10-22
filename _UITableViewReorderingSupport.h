@interface _UITableViewReorderingSupport : NSObject
{
	id _reorderedCell;
	id _initialIndexPath;
	id _targetIndexPath;
	bit[1] _oldShowHorizontalScrollIndicator;
	bit[1] _oldShowVerticalScrollIndicator;
	bit[1] _reloadDataCalled;
	bit[1] _reorderingCancelled;
	bit[28] _reserved;
	id _autoscrollTimer;
	id _topShadowView;
	id _bottomShadowView;
	BOOL _wasScrollingEnabled;
}

@end
