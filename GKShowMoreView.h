@interface GKShowMoreView : UICollectionReusableView
{
	BOOL _showShowAll;
	SEL _showMoreAction;
	id _label;
	long long _sectionIndex;
	id _horizontalContraint;
	id _verticalContraint;
	long long _numberToShow;
	id _collectionView;
	double _textAlignmentOffset;
}

+ setShowMoreAction:
+ setHorizontalContraint:
+ setTextAlignmentOffset:
+ updateLabel
+ showMoreAction
+ horizontalContraint
+ verticalContraint
+ setVerticalContraint:
+ showShowAll
+ setShowShowAll:
+ numberToShow
+ setNumberToShow:
+ textAlignmentOffset
+ initWithFrame:
+ dealloc
+ touchesEnded:withEvent:
+ prepareForReuse
+ updateConstraints
+ label
+ setLabel:
+ collectionView
+ applyLayoutAttributes:
+ setCollectionView:
+ sectionIndex
+ setSectionIndex:
- setShowMoreAction:
- setHorizontalContraint:
- setTextAlignmentOffset:
- updateLabel
- showMoreAction
- horizontalContraint
- verticalContraint
- setVerticalContraint:
- showShowAll
- setShowShowAll:
- numberToShow
- setNumberToShow:
- textAlignmentOffset
- initWithFrame:
- dealloc
- touchesEnded:withEvent:
- prepareForReuse
- updateConstraints
- label
- setLabel:
- collectionView
- applyLayoutAttributes:
- setCollectionView:
- sectionIndex
- setSectionIndex:
@end
