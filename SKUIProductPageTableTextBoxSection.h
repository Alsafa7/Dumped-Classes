@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection
{
	id _clientContext;
	id _colorScheme;
	BOOL _isExpanded;
	long long _stringIndex;
	id _subtitle;
	id _textLayoutCache;
	id _title;
}

+ setTitle:
+ title
+ setSubtitle:
+ subtitle
+ colorScheme
+ setColorScheme:
+ stringIndex
+ setStringIndex:
+ heightForCellInTableView:indexPath:
+ numberOfRowsInSection
+ tableViewCellForTableView:indexPath:
+ textLayoutCache
+ initWithClientContext:
+ setTextLayoutCache:
+ selectionActionForTableView:indexPath:
+ .cxx_destruct
- setTitle:
- title
- setSubtitle:
- subtitle
- colorScheme
- setColorScheme:
- stringIndex
- setStringIndex:
- heightForCellInTableView:indexPath:
- numberOfRowsInSection
- tableViewCellForTableView:indexPath:
- textLayoutCache
- initWithClientContext:
- setTextLayoutCache:
- selectionActionForTableView:indexPath:
- .cxx_destruct
@end
