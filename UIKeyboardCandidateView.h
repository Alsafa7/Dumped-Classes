@interface UIKeyboardCandidateView : UIInputView
{
	id _bar;
	id _sortControl;
	id _extendedView;
	id _inlineView;
	id _leftBackground;
	id _rightBackground;
	id _leftButton;
	id _rightButton;
	struct _candidateBarFlags;
}

+ initWithFrame:
+ dealloc
+ hitTest:withEvent:
+ pointInside:withEvent:
+ setFrame:
+ layoutSubviews
+ willMoveToSuperview:
+ candidatesDidChange
+ inlineView
+ activeCandidateList
+ setCandidateViewExtended:
+ isExtended
+ _toggleExtendedCandidateView:
+ updatePageControlStatus
+ setCandidateBarCanExtend:
+ _numberOfColumns:
+ barHeight
+ setCandidatesToExtendedViewFromCollapsedView:
+ setInlineView:
- initWithFrame:
- dealloc
- hitTest:withEvent:
- pointInside:withEvent:
- setFrame:
- layoutSubviews
- willMoveToSuperview:
- candidatesDidChange
- inlineView
- activeCandidateList
- setCandidateViewExtended:
- isExtended
- _toggleExtendedCandidateView:
- updatePageControlStatus
- setCandidateBarCanExtend:
- _numberOfColumns:
- barHeight
- setCandidatesToExtendedViewFromCollapsedView:
- setInlineView:
@end
