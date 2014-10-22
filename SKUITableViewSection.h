@interface SKUITableViewSection : NSObject
{
	BOOL _hidesHeaderView;
	long long _sectionIndex;
}

+ sectionIndex
+ setSectionIndex:
+ heightForCellInTableView:indexPath:
+ numberOfRowsInSection
+ tableViewCellForTableView:indexPath:
+ tableView:willDisplayCell:forIndexPath:
+ headerViewForTableView:
+ hidesHeaderView
+ setHidesHeaderView:
- sectionIndex
- setSectionIndex:
- heightForCellInTableView:indexPath:
- numberOfRowsInSection
- tableViewCellForTableView:indexPath:
- tableView:willDisplayCell:forIndexPath:
- headerViewForTableView:
- hidesHeaderView
- setHidesHeaderView:
@end
