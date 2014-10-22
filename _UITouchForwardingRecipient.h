@interface _UITouchForwardingRecipient : NSObject
{
	id fromResponder;
	id responder;
	long long recordedPhase;
	long long autocompletedPhase;
}

+ description
+ setResponder:
+ responder
+ recordedPhase
+ autocompletedPhase
+ setRecordedPhase:
+ setAutocompletedPhase:
+ initWithResponder:fromResponder:
+ fromResponder
+ setFromResponder:
- description
- setResponder:
- responder
- recordedPhase
- autocompletedPhase
- setRecordedPhase:
- setAutocompletedPhase:
- initWithResponder:fromResponder:
- fromResponder
- setFromResponder:
@end
