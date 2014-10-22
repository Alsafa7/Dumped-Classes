@interface UICalloutBar : UIView
{
	id m_delegate;
	struct m_pointBelowControls;
	struct m_pointAboveControls;
	struct m_pointLeftOfControls;
	struct m_pointRightOfControls;
	struct m_targetPoint;
	int m_targetDirection;
	BOOL m_targetHorizontal;
	BOOL m_fadeAfterCommand;
	BOOL m_recalcVisibleItems;
	BOOL m_shouldAppear;
	int m_pageCount;
	int m_currentPage;
	BOOL m_supressesHorizontalMovement;
	struct m_controlFrame;
	struct m_targetRect;
	struct m_supressesHorizontalMovementFrame;
	double m_supressedHorizontalMovementX;
	int m_arrowDirection;
	id m_systemButtons;
	id m_extraButtons;
	id m_nextButton;
	id m_previousButton;
	id m_rectsToEvade;
	id m_overlay;
	double m_fadedTime;
	id m_responderTarget;
	id m_replacements;
	id m_extraItems;
	id m_untruncatedString;
	BOOL m_didPromptForReplace;
	BOOL m_ignoringEvents;
	BOOL m_showAllReplacements;
	BOOL m_ignoreFade;
}

+ initWithFrame:
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ pointInside:withEvent:
+ removeFromSuperview
+ delegate
+ show
+ setSupressesHorizontalMovement:
+ clearSupressesHorizontalMovementFrame
+ setUntruncatedString:
+ textEffectsVisibilityLevel
+ hide
+ hasReplacements
+ visible
+ extraItems
+ setExtraItems:
+ update
+ setResponderTarget:
+ fade
+ targetRect
+ setTargetRect:
+ recentlyFaded
+ clearEvadeRects
+ addRectToEvade:
+ setTargetRect:pointBelowControls:pointAboveControls:
+ setReplacements:
+ appear
+ clearReplacements
+ replacements
+ controlFrame
+ targetDirection
+ targetPoint
+ buttonHighlighted:highlighted:
+ buttonPressed:
+ _showPreviousItems:
+ _showNextItems:
+ flattenForAlertOrResignActive:
+ expandAfterAlertOrBecomeActive:
+ targetForAction:
+ _fadeAfterCommand:
+ _updateVisibleItemsAnimated:
+ textEffectsWindowBoundsWithoutStatusBar
+ rectsToEvade
+ supressesHorizontalMovement
+ supressHorizontalXMovementIfNeededForPoint:proposedX:
+ rectClear:
+ arrowDirection
+ calculateControlFrameForCalloutSize:below:
+ setTargetDirection:
+ calculateControlFrameForCalloutSize:right:
+ calculateControlFrameInsideTargetRect:
+ pointBelowControls
+ setTargetPoint:
+ pointAboveControls
+ setControlFrame:
+ updateAvailableButtons
+ setFrameForSize:
+ configureButtons:
+ updateForCurrentPage
+ setArrowDirection:
+ setTargetHorizontal:
+ setPointBelowControls:
+ setPointAboveControls:
+ setPointLeftOfControls:
+ setPointRightOfControls:
+ appearAnimationDidStop:finished:context:
+ hideAnimationDidStop:finished:context:
+ resetPage
+ setTargetRect:pointLeftOfControls:pointRightOfControls:
+ setTargetRect:arrowDirection:
+ updateAnimated:
+ pointLeftOfControls
+ pointRightOfControls
+ targetHorizontal
+ responderTarget
+ showAllReplacements
+ setShowAllReplacements:
+ untruncatedString
- initWithFrame:
- dealloc
- setDelegate:
- hitTest:withEvent:
- pointInside:withEvent:
- removeFromSuperview
- delegate
- show
- setSupressesHorizontalMovement:
- clearSupressesHorizontalMovementFrame
- setUntruncatedString:
- textEffectsVisibilityLevel
- hide
- hasReplacements
- visible
- extraItems
- setExtraItems:
- update
- setResponderTarget:
- fade
- targetRect
- setTargetRect:
- recentlyFaded
- clearEvadeRects
- addRectToEvade:
- setTargetRect:pointBelowControls:pointAboveControls:
- setReplacements:
- appear
- clearReplacements
- replacements
- controlFrame
- targetDirection
- targetPoint
- buttonHighlighted:highlighted:
- buttonPressed:
- _showPreviousItems:
- _showNextItems:
- flattenForAlertOrResignActive:
- expandAfterAlertOrBecomeActive:
- targetForAction:
- _fadeAfterCommand:
- _updateVisibleItemsAnimated:
- textEffectsWindowBoundsWithoutStatusBar
- rectsToEvade
- supressesHorizontalMovement
- supressHorizontalXMovementIfNeededForPoint:proposedX:
- rectClear:
- arrowDirection
- calculateControlFrameForCalloutSize:below:
- setTargetDirection:
- calculateControlFrameForCalloutSize:right:
- calculateControlFrameInsideTargetRect:
- pointBelowControls
- setTargetPoint:
- pointAboveControls
- setControlFrame:
- updateAvailableButtons
- setFrameForSize:
- configureButtons:
- updateForCurrentPage
- setArrowDirection:
- setTargetHorizontal:
- setPointBelowControls:
- setPointAboveControls:
- setPointLeftOfControls:
- setPointRightOfControls:
- appearAnimationDidStop:finished:context:
- hideAnimationDidStop:finished:context:
- resetPage
- setTargetRect:pointLeftOfControls:pointRightOfControls:
- setTargetRect:arrowDirection:
- updateAnimated:
- pointLeftOfControls
- pointRightOfControls
- targetHorizontal
- responderTarget
- showAllReplacements
- setShowAllReplacements:
- untruncatedString
@end
