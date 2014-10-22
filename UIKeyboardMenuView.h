@interface UIKeyboardMenuView : UIView
{
	id m_table;
	id m_shadowView;
	id m_selExtraView;
	struct m_referenceRect;
	double m_pointerOffset;
	BOOL m_scrollable;
	BOOL m_startAutoscroll;
	BOOL m_scrolling;
	BOOL m_shouldFade;
	struct m_point;
	double m_scrollStartTime;
	int m_scrollDirection;
	id m_scrollTimer;
	int m_visibleRows;
	int m_firstVisibleRow;
	int m_mode;
	id m_dimmingView;
	BOOL _usesStraightLeftEdge;
	BOOL _usesDarkTheme;
	id _referenceKey;
	id _layout;
}

+ initWithFrame:
+ dealloc
+ setNeedsDisplay
+ setFrame:
+ removeFromSuperview
+ tableView:willDisplayCell:forRowAtIndexPath:
+ tableView:heightForRowAtIndexPath:
+ tableView:willSelectRowAtIndexPath:
+ tableView:willDeselectRowAtIndexPath:
+ tableView:didSelectRowAtIndexPath:
+ scrollViewDidScroll:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ applicationWillSuspend:
+ show
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ font
+ layout
+ table
+ setMode:
+ mode
+ setRenderConfig:
+ setLayout:
+ hide
+ isVisible
+ numberOfItems
+ dimmingViewWasTapped:
+ showAsPopupForKey:inLayout:
+ fadeWithDelay:
+ fade
+ updateSelectionWithPoint:
+ selectItemAtPoint:
+ stopAnyAutoscrolling
+ autoscrollTimerFired:
+ showAsHUD
+ dimmingView
+ usesDimmingView
+ usesStraightLeftEdge
+ usesDarkTheme
+ maskForShadowViewBlurredBackground
+ usesTable
+ usesShadowView
+ preferredSize
+ setUsesStraightLeftEdge:
+ setupShadowViewWithSize:
+ defaultSelectedIndex
+ highlightRow:
+ insertSelExtraView
+ performShowAnimation
+ _internationalKeyRoundedCornerInLayout:
+ setReferenceKey:
+ setKeyboardDimmed:
+ referenceKey
+ fadeAnimationDidStop:finished:context:
+ _delayedFade
+ setNeedsDisplayForCell:
+ setNeedsDisplayForTopBottomCells
+ endScrolling:
+ didSelectItemAtIndex:
+ indexForIndexPath:
+ titleForItemAtIndex:
+ subtitleForItemAtIndex:
+ subtitleFont
+ setHighlightForRowAtIndexPath:highlight:
+ setUsesDarkTheme:
+ centerPopUpOverKey
+ minYOfLastTableCellForSelectionExtraView
+ popupRect
- initWithFrame:
- dealloc
- setNeedsDisplay
- setFrame:
- removeFromSuperview
- tableView:willDisplayCell:forRowAtIndexPath:
- tableView:heightForRowAtIndexPath:
- tableView:willSelectRowAtIndexPath:
- tableView:willDeselectRowAtIndexPath:
- tableView:didSelectRowAtIndexPath:
- scrollViewDidScroll:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- applicationWillSuspend:
- show
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- font
- layout
- table
- setMode:
- mode
- setRenderConfig:
- setLayout:
- hide
- isVisible
- numberOfItems
- dimmingViewWasTapped:
- showAsPopupForKey:inLayout:
- fadeWithDelay:
- fade
- updateSelectionWithPoint:
- selectItemAtPoint:
- stopAnyAutoscrolling
- autoscrollTimerFired:
- showAsHUD
- dimmingView
- usesDimmingView
- usesStraightLeftEdge
- usesDarkTheme
- maskForShadowViewBlurredBackground
- usesTable
- usesShadowView
- preferredSize
- setUsesStraightLeftEdge:
- setupShadowViewWithSize:
- defaultSelectedIndex
- highlightRow:
- insertSelExtraView
- performShowAnimation
- _internationalKeyRoundedCornerInLayout:
- setReferenceKey:
- setKeyboardDimmed:
- referenceKey
- fadeAnimationDidStop:finished:context:
- _delayedFade
- setNeedsDisplayForCell:
- setNeedsDisplayForTopBottomCells
- endScrolling:
- didSelectItemAtIndex:
- indexForIndexPath:
- titleForItemAtIndex:
- subtitleForItemAtIndex:
- subtitleFont
- setHighlightForRowAtIndexPath:highlight:
- setUsesDarkTheme:
- centerPopUpOverKey
- minYOfLastTableCellForSelectionExtraView
- popupRect
@end
