@interface GKMasterDetailViewController : UISplitViewController
{
	id _masterDetailDelegate;
	BOOL _covered;
	id _masterNavigationController;
	id _detailNavigationController;
	id _separatorLineColor;
	id _separatorWrapperView;
	id _separatorLineView;
	id _separatorBarView;
	id _separatorBarMaskView;
	id _presentationDelayHandler;
	id _controllersDelayingPresentation;
}

@end
