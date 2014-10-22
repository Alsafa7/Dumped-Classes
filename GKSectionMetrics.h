@interface GKSectionMetrics : GKGridLayoutMetrics
{
	BOOL _incrementalRevealConsumesPadding;
	usigned long long _alignment;
	double _lineSpacing;
	double _interitemSpacing;
	double _desiredItemWidth;
	double _desiredItemHeight;
	usigned long long _lastLineItemAlignment;
	usigned long long _maximumVisibleItemCount;
	usigned long long _incrementalRevealItemCount;
	double _incrementalRevealTextOffset;
	struct _padding;
}

+ setDesiredItemHeight:
+ localDescription
+ incrementalRevealItemCount
+ incrementalRevealTextOffset
+ setSectionHeadersShouldPin:
+ setIncrementalRevealTextOffset:
+ initWithIdiom:
+ setDesiredItemWidth:
+ setLastLineItemAlignment:
+ setMaximumVisibleItemCount:
+ setIncrementalRevealItemCount:
+ setIncrementalRevealConsumesPadding:
+ showMoreHeight
+ setShowMoreHeight:
+ sectionHeadersShouldPin
+ itemSizeForCollectionView:
+ desiredItemWidth
+ desiredItemHeight
+ lastLineItemAlignment
+ maximumVisibleItemCount
+ incrementalRevealConsumesPadding
+ init
+ copyWithZone:
+ setAlignment:
+ setSectionHeaderHeight:
+ sectionHeaderHeight
+ setPadding:
+ padding
+ alignment
+ lineSpacing
+ setLineSpacing:
+ setInteritemSpacing:
+ interitemSpacing
- setDesiredItemHeight:
- localDescription
- incrementalRevealItemCount
- incrementalRevealTextOffset
- setSectionHeadersShouldPin:
- setIncrementalRevealTextOffset:
- initWithIdiom:
- setDesiredItemWidth:
- setLastLineItemAlignment:
- setMaximumVisibleItemCount:
- setIncrementalRevealItemCount:
- setIncrementalRevealConsumesPadding:
- showMoreHeight
- setShowMoreHeight:
- sectionHeadersShouldPin
- itemSizeForCollectionView:
- desiredItemWidth
- desiredItemHeight
- lastLineItemAlignment
- maximumVisibleItemCount
- incrementalRevealConsumesPadding
- init
- copyWithZone:
- setAlignment:
- setSectionHeaderHeight:
- sectionHeaderHeight
- setPadding:
- padding
- alignment
- lineSpacing
- setLineSpacing:
- setInteritemSpacing:
- interitemSpacing
@end
