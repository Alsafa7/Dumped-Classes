@interface UISectionRowData : NSObject
{
	BOOL _valid;
	double _headerHeight;
	double _maxHeaderTitleWidth;
	double _footerHeight;
	double _maxFooterTitleWidth;
	double _headerOffset;
	double _footerOffset;
	usigned long long _numRows;
	usigned long long _arrayLength;
	pointer _rowHeights;
	pointer _rowOffsets;
	double _sectionHeight;
	long long _headerAlignment;
	long long _footerAlignment;
	id _rowData;
	BOOL _sectionOffsetValid;
	double _sectionOffset;
	long long _sectionRowOffset;
}

+ dealloc
+ invalidate
+ copyWithZone:
+ heightForHeaderInSection:canGuess:
+ heightForFooterInSection:canGuess:
+ invalidateSectionOffset
+ updateSectionHeightWithDelta:updateFooterOffset:
+ _headerOrFooterSizeForTable:title:detailText:isHeader:stripPaddingForAbuttingView:isTopHeader:
+ heightForEmptySection:inTableView:rowData:
+ _defaultSectionHeaderHeightForSection:tableView:tableViewRowData:
+ _defaultSectionFooterHeightForSection:tableView:tableViewRowData:
+ deleteRowAtIndex:
+ addOffset:fromRow:
+ offsetForRow:
+ _rowForPoint:beginningWithRow:numberOfRows:
+ initWithRowData:
+ setHeight:forRow:
+ heightForRow:inSection:canGuess:
+ refreshWithSection:tableView:tableViewRowData:
+ insertRowAtIndex:inSection:rowHeight:tableViewRowData:
+ sectionLocationForRow:
+ sectionLocationForReorderedRow:
+ rowForPoint:
- dealloc
- invalidate
- copyWithZone:
- heightForHeaderInSection:canGuess:
- heightForFooterInSection:canGuess:
- invalidateSectionOffset
- updateSectionHeightWithDelta:updateFooterOffset:
- _headerOrFooterSizeForTable:title:detailText:isHeader:stripPaddingForAbuttingView:isTopHeader:
- heightForEmptySection:inTableView:rowData:
- _defaultSectionHeaderHeightForSection:tableView:tableViewRowData:
- _defaultSectionFooterHeightForSection:tableView:tableViewRowData:
- deleteRowAtIndex:
- addOffset:fromRow:
- offsetForRow:
- _rowForPoint:beginningWithRow:numberOfRows:
- initWithRowData:
- setHeight:forRow:
- heightForRow:inSection:canGuess:
- refreshWithSection:tableView:tableViewRowData:
- insertRowAtIndex:inSection:rowHeight:tableViewRowData:
- sectionLocationForRow:
- sectionLocationForReorderedRow:
- rowForPoint:
@end
