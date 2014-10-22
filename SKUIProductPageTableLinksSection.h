@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection
{
	id _actions;
	id _item;
	id _titles;
	id _colorScheme;
}

+ colorScheme
+ setColorScheme:
+ heightForCellInTableView:indexPath:
+ numberOfRowsInSection
+ tableViewCellForTableView:indexPath:
+ initWithItem:clientContext:
+ selectionActionForTableView:indexPath:
+ .cxx_destruct
- colorScheme
- setColorScheme:
- heightForCellInTableView:indexPath:
- numberOfRowsInSection
- tableViewCellForTableView:indexPath:
- initWithItem:clientContext:
- selectionActionForTableView:indexPath:
- .cxx_destruct
@end
