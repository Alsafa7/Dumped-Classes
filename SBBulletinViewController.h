@interface SBBulletinViewController : UITableViewController
{
	id _delegate;
	id _orderedSections;
	id _sectionIDsToBulletins;
	id _pendingReusableViewIDs;
	BOOL _tableViewNeedsReload;
	id _owedWillAppearBlock;
	struct _bulletinViewControllerDelegateFlags;
}

@end
