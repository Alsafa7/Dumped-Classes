@interface UIKeyboardAutomatic : UIKeyboard
{
	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	BOOL caretBlinks;
}

+ initWithFrame:
+ dealloc
+ isActive
+ setCaretBlinks:
+ activate
+ showsCandidateBar
+ showsCandidateInline
+ setShowsCandidateBar:
+ prepareForImplBoundsHeightChange:suppressNotification:
+ implBoundsHeightChangeDone:suppressNotification:
+ caretBlinks
+ setShowsCandidateInline:
+ receivedCandidatesInCurrentInputMode
+ setReceivedCandidatesInCurrentInputMode:
+ minimize
+ maximize
+ _isAutomaticKeyboard
+ willResume:
+ didSuspend:
+ geometryForHeightDelta:
- initWithFrame:
- dealloc
- isActive
- setCaretBlinks:
- activate
- showsCandidateBar
- showsCandidateInline
- setShowsCandidateBar:
- prepareForImplBoundsHeightChange:suppressNotification:
- implBoundsHeightChangeDone:suppressNotification:
- caretBlinks
- setShowsCandidateInline:
- receivedCandidatesInCurrentInputMode
- setReceivedCandidatesInCurrentInputMode:
- minimize
- maximize
- _isAutomaticKeyboard
- willResume:
- didSuspend:
- geometryForHeightDelta:
@end
