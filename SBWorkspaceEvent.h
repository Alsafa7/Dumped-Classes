@interface SBWorkspaceEvent : NSObject
{
	id _label;
	id _handler;
	id _callStackSymbols;
}

+ setCallStackSymbols:
+ execute
+ dealloc
+ init
+ description
+ debugDescription
+ label
+ setLabel:
+ callStackSymbols
+ setHandler:
+ handler
+ isEqualToEvent:
- setCallStackSymbols:
- execute
- dealloc
- init
- description
- debugDescription
- label
- setLabel:
- callStackSymbols
- setHandler:
- handler
- isEqualToEvent:
@end
