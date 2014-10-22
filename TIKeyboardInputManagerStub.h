@interface TIKeyboardInputManagerStub : NSObject
{

}

+ textAccepted:
+ syncToKeyboardState:continuation:
+ handleKeyboardInput:keyboardState:continuation:
+ generateCandidatesWithKeyboardState:candidateRange:continuation:
+ handleAcceptedCandidate:keyboardState:continuation:
+ generateReplacementsForString:keyLayout:continuation:
+ skipHitTestForTouchEvent:keyboardState:
+ performHitTestForTouchEvent:keyboardState:continuation:
+ adjustPhraseBoundaryInForwardDirection:keyboardState:continuation:
+ lastAcceptedCandidateCorrected
+ setOriginalInput:
+ candidateRejected:
+ removeAllDynamicDictionaries
- textAccepted:
- syncToKeyboardState:continuation:
- handleKeyboardInput:keyboardState:continuation:
- generateCandidatesWithKeyboardState:candidateRange:continuation:
- handleAcceptedCandidate:keyboardState:continuation:
- generateReplacementsForString:keyLayout:continuation:
- skipHitTestForTouchEvent:keyboardState:
- performHitTestForTouchEvent:keyboardState:continuation:
- adjustPhraseBoundaryInForwardDirection:keyboardState:continuation:
- lastAcceptedCandidateCorrected
- setOriginalInput:
- candidateRejected:
- removeAllDynamicDictionaries
@end
