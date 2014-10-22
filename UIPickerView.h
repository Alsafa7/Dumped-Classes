@interface UIPickerView : UIView
{
	id _tables;
	id _topFrame;
	id _dividers;
	id _selectionBars;
	id _dataSource;
	id _delegate;
	id _backgroundView;
	long long _numberOfComponents;
	id _topGradient;
	id _bottomGradient;
	id _foregroundView;
	id _maskGradientLayer;
	id _topLineView;
	id _bottomLineView;
	struct _pickerViewFlags;
	BOOL _usesModernStyle;
	id _textColor;
	id _textShadowColor;
	BOOL _isInLayoutSubviews;
	BOOL _magnifierEnabled;
}

+ isAccessibilityElementByDefault
+ initWithFrame:
+ dealloc
+ pickerImageNamePrefix
+ _orientationImageSuffix
+ setBackgroundColor:
+ _isLandscapeOrientation
+ _shouldDrawWithModernStyle
+ initWithCoder:
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ setDataSource:
+ setDelegate:
+ hitTest:withEvent:
+ setNeedsLayout
+ numberOfComponents
+ selectedRowInComponent:
+ _selectRow:inComponent:animated:notify:
+ setHidden:
+ _updateSound
+ setAlpha:
+ didMoveToWindow
+ _updateSelectedRows
+ reloadAllComponents
+ _delegateNumberOfComponents
+ reloadData
+ reloadComponent:
+ _selectionBarSuffix
+ _popoverSuffix
+ imageForPickerPiece:
+ defaultSize
+ _intrinsicSizeWithinSize:
+ columnForTableView:
+ _tableRowHeight
+ init
+ setFrame:
+ _perspectiveTransform
+ _setTextColor:
+ _delegateRowHeightForComponent:
+ layoutSubviews
+ tableViewForColumn:
+ numberOfRowsInComponent:
+ _drawsBackground
+ _createViewForPickerPiece:
+ _delegateWidthForComponent:ofCount:withSizeLeft:
+ _wheelShift
+ _usesModernStyle
+ createDividerWithFrame:
+ _createColumnWithTableFrame:rowHeight:
+ _createTableWithFrame:forComponent:
+ setAllowsMultipleSelection:
+ _contentView
+ _selectionBarRectForHeight:
+ _magnifierEnabled
+ _addMagnifierLinesForRowHeight:
+ _resetSelectionOfTables
+ _delegateNumberOfRowsInComponent:
+ _sizeThatFits:
+ _updateWithOldSize:newSize:
+ setBounds:
+ _sendSelectionChangedForComponent:
+ _sendSelectionChangedFromTable:
+ selectRow:inComponent:animated:
+ _textColor
+ _delegateAttributedTitleForRow:forComponent:
+ _delegateTitleForRow:forComponent:
+ _sendCheckedRow:inTableView:checked:
+ _soundsEnabled
+ _usesCheckSelection
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ setSoundsEnabled:
+ reload
+ reloadDataForColumn:
+ _contentHuggingDefault_isUsuallyFixedHeight
+ _contentHuggingDefault_isUsuallyFixedWidth
+ sizeThatFits:
+ scrollAnimationDuration
+ rowSizeForComponent:
+ numberOfRowsInColumn:
+ numberOfColumns
+ viewForRow:forComponent:
+ reloadAllPickerPieces
+ setShowsSelectionIndicator:
+ showsSelectionIndicator
+ allowsMultipleSelection
+ _setUsesCheckedSelection:
+ _usesCheckedSelection
+ _setDrawsBackground:
+ visibleRowsForColumn:
+ selectedRowForColumn:
+ _effectiveTableViewFrameForColumn:
+ selectRow:inColumn:animated:
+ _setMagnifierEnabled:
+ _setUsesModernStyle:
+ _highlightColor
+ _setHighlightColor:
+ _textShadowColor
+ _setTextShadowColor:
+ dataSource
+ delegate
+ _isInLayoutSubviews
+ _setInLayoutSubviews:
- isAccessibilityElementByDefault
- initWithFrame:
- dealloc
- pickerImageNamePrefix
- _orientationImageSuffix
- setBackgroundColor:
- _isLandscapeOrientation
- _shouldDrawWithModernStyle
- initWithCoder:
- _populateArchivedSubviews:
- encodeWithCoder:
- setDataSource:
- setDelegate:
- hitTest:withEvent:
- setNeedsLayout
- numberOfComponents
- selectedRowInComponent:
- _selectRow:inComponent:animated:notify:
- setHidden:
- _updateSound
- setAlpha:
- didMoveToWindow
- _updateSelectedRows
- reloadAllComponents
- _delegateNumberOfComponents
- reloadData
- reloadComponent:
- _selectionBarSuffix
- _popoverSuffix
- imageForPickerPiece:
- defaultSize
- _intrinsicSizeWithinSize:
- columnForTableView:
- _tableRowHeight
- init
- setFrame:
- _perspectiveTransform
- _setTextColor:
- _delegateRowHeightForComponent:
- layoutSubviews
- tableViewForColumn:
- numberOfRowsInComponent:
- _drawsBackground
- _createViewForPickerPiece:
- _delegateWidthForComponent:ofCount:withSizeLeft:
- _wheelShift
- _usesModernStyle
- createDividerWithFrame:
- _createColumnWithTableFrame:rowHeight:
- _createTableWithFrame:forComponent:
- setAllowsMultipleSelection:
- _contentView
- _selectionBarRectForHeight:
- _magnifierEnabled
- _addMagnifierLinesForRowHeight:
- _resetSelectionOfTables
- _delegateNumberOfRowsInComponent:
- _sizeThatFits:
- _updateWithOldSize:newSize:
- setBounds:
- _sendSelectionChangedForComponent:
- _sendSelectionChangedFromTable:
- selectRow:inComponent:animated:
- _textColor
- _delegateAttributedTitleForRow:forComponent:
- _delegateTitleForRow:forComponent:
- _sendCheckedRow:inTableView:checked:
- _soundsEnabled
- _usesCheckSelection
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- setSoundsEnabled:
- reload
- reloadDataForColumn:
- _contentHuggingDefault_isUsuallyFixedHeight
- _contentHuggingDefault_isUsuallyFixedWidth
- sizeThatFits:
- scrollAnimationDuration
- rowSizeForComponent:
- numberOfRowsInColumn:
- numberOfColumns
- viewForRow:forComponent:
- reloadAllPickerPieces
- setShowsSelectionIndicator:
- showsSelectionIndicator
- allowsMultipleSelection
- _setUsesCheckedSelection:
- _usesCheckedSelection
- _setDrawsBackground:
- visibleRowsForColumn:
- selectedRowForColumn:
- _effectiveTableViewFrameForColumn:
- selectRow:inColumn:animated:
- _setMagnifierEnabled:
- _setUsesModernStyle:
- _highlightColor
- _setHighlightColor:
- _textShadowColor
- _setTextShadowColor:
- dataSource
- delegate
- _isInLayoutSubviews
- _setInLayoutSubviews:
@end