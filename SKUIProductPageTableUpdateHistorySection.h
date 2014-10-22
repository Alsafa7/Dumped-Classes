@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection
{
	id _clientContext;
	id _expandedIndexSet;
	long long _firstStringIndex;
	id _headerView;
	id _releaseNotes;
	id _textLayoutCache;
	id _colorScheme;
	id _dateFormatter;
}

+ setExpanded:
+ colorScheme
+ setColorScheme:
+ heightForCellInTableView:indexPath:
+ numberOfRowsInSection
+ tableViewCellForTableView:indexPath:
+ headerViewForTableView:
+ textLayoutCache
+ initWithClientContext:
+ releaseNotes
+ setFirstStringIndex:
+ setReleaseNotes:
+ setTextLayoutCache:
+ selectionActionForTableView:indexPath:
+ firstStringIndex
+ .cxx_destruct
+ _reloadHeaderView
- setExpanded:
- colorScheme
- setColorScheme:
- heightForCellInTableView:indexPath:
- numberOfRowsInSection
- tableViewCellForTableView:indexPath:
- headerViewForTableView:
- textLayoutCache
- initWithClientContext:
- releaseNotes
- setFirstStringIndex:
- setReleaseNotes:
- setTextLayoutCache:
- selectionActionForTableView:indexPath:
- firstStringIndex
- .cxx_destruct
- _reloadHeaderView
@end
