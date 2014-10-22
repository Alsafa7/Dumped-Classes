@interface BBSystemStateProvider : NSObject
{
	id _connection;
	usigned long long _currentState;
	id _sectionIDs;
}

+ dealloc
+ init
+ invalidate
+ proxy:detailedSignatureForSelector:
+ connection:connectionStateDidChange:
+ noteChangeOfState:newValue:
+ noteOccurrenceOfEvent:
+ noteRestrictedSectionIDsDidChange:
+ _sendState:value:
- dealloc
- init
- invalidate
- proxy:detailedSignatureForSelector:
- connection:connectionStateDidChange:
- noteChangeOfState:newValue:
- noteOccurrenceOfEvent:
- noteRestrictedSectionIDsDidChange:
- _sendState:value:
@end
