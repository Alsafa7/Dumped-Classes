@interface SKUIProductPageTableSection : SKUITableViewSection
{
	BOOL _expanded;
}

+ isExpanded
+ setExpanded:
+ selectionActionForTableView:indexPath:
+ heightForTextLayout:isExpanded:
+ textBoxTableViewCellForTableView:indexPath:
- isExpanded
- setExpanded:
- selectionActionForTableView:indexPath:
- heightForTextLayout:isExpanded:
- textBoxTableViewCellForTableView:indexPath:
@end
