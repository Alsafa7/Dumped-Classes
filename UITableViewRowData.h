@interface UITableViewRowData : NSObject
{
	id _tableView;
	long long _numSections;
	long long _sectionRowDataCapacity;
	pointer _sectionRowData;
	double _minimumRowHeight;
	double _tableViewWidth;
	BOOL _tableHeaderHeightValid;
	double _tableHeaderHeight;
	BOOL _tableFooterHeightValid;
	double _tableFooterHeight;
	double _heightForTableHeaderViewHiding;
	double _tableTopPadding;
	double _tableBottomPadding;
	BOOL _tableSidePaddingValid;
	double _tableSidePadding;
	id _reorderedIndexPath;
	id _gapIndexPath;
	double _reorderedRowHeight;
}

+ _updateSectionRowDataArrayForNumSections:
+ _ensureSectionOffsetIsValidForSection:
+ _updateNumSections
+ _sectionRowForGlobalRow:inSection:
+ dealloc
+ numberOfRowsInSection:
+ copyWithZone:
+ numberOfSections
+ numberOfRows
+ initWithTableView:
+ indexPathForRowAtGlobalRow:
+ invalidateAllSections
+ rectForTableHeaderView
+ rectForTableFooterView
+ setHeightForTableHeaderViewHiding:
+ heightForAutohidingTableHeaderView
+ heightForTableHeaderViewHiding
+ tableHeaderHeightDidChangeToHeight:
+ heightForTable
+ ensureAllSectionsAreValid
+ sectionsInRect:
+ rectForHeaderInSection:heightCanBeGuessed:
+ rectForFooterInSection:heightCanBeGuessed:
+ floatingRectForHeaderInSection:visibleRect:
+ maxHeaderTitleWidthForSection:
+ floatingRectForFooterInSection:visibleRect:
+ maxFooterTitleWidthForSection:
+ rectForGlobalRow:heightCanBeGuessed:
+ globalRowsInRect:canGuess:
+ globalRowForRowAtIndexPath:
+ headerAlignmentForSection:
+ footerAlignmentForSection:
+ minimumRowHeight
+ rectForTable
+ setReorderedIndexPath:
+ rectForSection:
+ rectForRow:inSection:heightCanBeGuessed:
+ indexPathsForRowsInRect:
+ heightForHeaderInSection:canGuess:
+ heightForFooterInSection:canGuess:
+ heightForTableHeaderView
+ tableSidePadding
+ invalidateAllSectionOffsetsAndUpdatePadding
+ tableFooterHeightDidChangeToHeight:
+ tableViewWidthDidChangeToWidth:
+ sectionLocationForRow:inSection:
+ addReorderGapFromIndexPath:
+ removeReorderGapFromIndexPath:
+ moveRowAtIndexPathFrom:toIndexPath:
+ targetIndexPathForPoint:
+ hasHeaderForSection:
+ sectionLocationForReorderedRow:inSection:
+ setTableTopPadding:
+ shouldStripHeaderTopPaddingForSection:
+ setTableBottomPadding:
+ setMinimumRowHeight:
+ reorderedIndexPath
+ reorderGapIndexPath
+ reorderedRowHeight
+ sectionForSectionRowData:
+ offsetForSection:
+ heightForRow:inSection:canGuess:
+ adjustSectionOffsetsBeginningAtIndex:count:delta:rowDelta:
+ _updateTopAndBottomPadding
+ heightForRow:inSection:canGuess:adjustForReorderedRow:
+ heightForTableFooterView
+ hasFooterForSection:
+ sectionForPoint:
+ _sectionForPoint:beginningWithSection:numberOfSections:
+ invalidateSection:
+ numberOfRowsBeforeSection:
+ heightForSection:
+ setTableSidePadding:
+ tableTopPadding
+ tableBottomPadding
- _updateSectionRowDataArrayForNumSections:
- _ensureSectionOffsetIsValidForSection:
- _updateNumSections
- _sectionRowForGlobalRow:inSection:
- dealloc
- numberOfRowsInSection:
- copyWithZone:
- numberOfSections
- numberOfRows
- initWithTableView:
- indexPathForRowAtGlobalRow:
- invalidateAllSections
- rectForTableHeaderView
- rectForTableFooterView
- setHeightForTableHeaderViewHiding:
- heightForAutohidingTableHeaderView
- heightForTableHeaderViewHiding
- tableHeaderHeightDidChangeToHeight:
- heightForTable
- ensureAllSectionsAreValid
- sectionsInRect:
- rectForHeaderInSection:heightCanBeGuessed:
- rectForFooterInSection:heightCanBeGuessed:
- floatingRectForHeaderInSection:visibleRect:
- maxHeaderTitleWidthForSection:
- floatingRectForFooterInSection:visibleRect:
- maxFooterTitleWidthForSection:
- rectForGlobalRow:heightCanBeGuessed:
- globalRowsInRect:canGuess:
- globalRowForRowAtIndexPath:
- headerAlignmentForSection:
- footerAlignmentForSection:
- minimumRowHeight
- rectForTable
- setReorderedIndexPath:
- rectForSection:
- rectForRow:inSection:heightCanBeGuessed:
- indexPathsForRowsInRect:
- heightForHeaderInSection:canGuess:
- heightForFooterInSection:canGuess:
- heightForTableHeaderView
- tableSidePadding
- invalidateAllSectionOffsetsAndUpdatePadding
- tableFooterHeightDidChangeToHeight:
- tableViewWidthDidChangeToWidth:
- sectionLocationForRow:inSection:
- addReorderGapFromIndexPath:
- removeReorderGapFromIndexPath:
- moveRowAtIndexPathFrom:toIndexPath:
- targetIndexPathForPoint:
- hasHeaderForSection:
- sectionLocationForReorderedRow:inSection:
- setTableTopPadding:
- shouldStripHeaderTopPaddingForSection:
- setTableBottomPadding:
- setMinimumRowHeight:
- reorderedIndexPath
- reorderGapIndexPath
- reorderedRowHeight
- sectionForSectionRowData:
- offsetForSection:
- heightForRow:inSection:canGuess:
- adjustSectionOffsetsBeginningAtIndex:count:delta:rowDelta:
- _updateTopAndBottomPadding
- heightForRow:inSection:canGuess:adjustForReorderedRow:
- heightForTableFooterView
- hasFooterForSection:
- sectionForPoint:
- _sectionForPoint:beginningWithSection:numberOfSections:
- invalidateSection:
- numberOfRowsBeforeSection:
- heightForSection:
- setTableSidePadding:
- tableTopPadding
- tableBottomPadding
@end
