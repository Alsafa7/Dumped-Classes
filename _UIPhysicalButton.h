@interface _UIPhysicalButton : NSObject
{
	id _gestureRecognizers;
	id _forwardingRecord;
	BOOL _abandonForwardingRecord;
	double _timestamp;
	long long _phase;
	long long _type;
	id _window;
	id _responder;
}

+ dealloc
+ window
+ timestamp
+ setWindow:
+ phase
+ setPhase:
+ gestureRecognizers
+ setType:
+ setResponder:
+ setGestureRecognizers:
+ setTimestamp:
+ type
+ _setForwardablePhase:
+ _responder
+ _setResponder:
+ responder
+ _forwardingRecord
+ _responderSelectorForPhase:
+ _wantsForwardingFromResponder:toNextResponder:withEvent:
+ _removeGestureRecognizer:
+ _forwardablePhase
+ _isAbandoningForwardingRecord
+ _mutableForwardingRecord
+ _abandonForwardingRecord
- dealloc
- window
- timestamp
- setWindow:
- phase
- setPhase:
- gestureRecognizers
- setType:
- setResponder:
- setGestureRecognizers:
- setTimestamp:
- type
- _setForwardablePhase:
- _responder
- _setResponder:
- responder
- _forwardingRecord
- _responderSelectorForPhase:
- _wantsForwardingFromResponder:toNextResponder:withEvent:
- _removeGestureRecognizer:
- _forwardablePhase
- _isAbandoningForwardingRecord
- _mutableForwardingRecord
- _abandonForwardingRecord
@end
