@interface UICellHighlightingSupport : NSObject
{
	pointer _unhighlightedStates;
	id _cell;
}

+ dealloc
+ highlightView:
+ applyState:toView:
+ cacheState:forView:
+ initWithCell:
- dealloc
- highlightView:
- applyState:toView:
- cacheState:forView:
- initWithCell:
@end
