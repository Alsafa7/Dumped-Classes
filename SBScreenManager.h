@interface SBScreenManager : NSObject
{
	id _handlers;
	id _screenIDToHandlerMap;
	id _screenIDToObserversMap;
	id _screenIDToSuppressionReasonsMap;
	id _screenIDToMainWindowMap;
	id _screenIDToScreenMap;
	id _connectedScreenIDs;
}

+ addConnectionHandler:
+ setMainWindow:forScreen:
+ removeScreenObserver:forScreen:
+ mainWindowForScreen:
+ isScreenSuppressed:
+ addScreenObserver:forScreen:
+ isScreenConnected:
+ screenWithID:
+ _updateHandlerForConnectionToScreen:
+ addSuppressionReason:forScreen:
+ removeSuppressionReason:forScreen:
+ _screenDidConnect:
+ _screenDidDisconnect:
+ dealloc
+ init
- addConnectionHandler:
- setMainWindow:forScreen:
- removeScreenObserver:forScreen:
- mainWindowForScreen:
- isScreenSuppressed:
- addScreenObserver:forScreen:
- isScreenConnected:
- screenWithID:
- _updateHandlerForConnectionToScreen:
- addSuppressionReason:forScreen:
- removeSuppressionReason:forScreen:
- _screenDidConnect:
- _screenDidDisconnect:
- dealloc
- init
@end
