@interface GKShowcaseCellView : UICollectionReusableView
{
	id _cell;
	SEL _touchedShowcaseCellAction;
	id _underlineView;
}

+ underlineView
+ setUnderlineView:
+ touchedShowcaseCellAction
+ setTouchedShowcaseCellAction:
+ initWithFrame:
+ dealloc
+ touchesEnded:withEvent:
+ cell
+ setCell:
+ applyLayoutAttributes:
- underlineView
- setUnderlineView:
- touchedShowcaseCellAction
- setTouchedShowcaseCellAction:
- initWithFrame:
- dealloc
- touchesEnded:withEvent:
- cell
- setCell:
- applyLayoutAttributes:
@end
