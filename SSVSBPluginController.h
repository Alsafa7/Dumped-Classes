@interface SSVSBPluginController : NSObject
{
	id _dispatchQueue;
	id _listenerConnection;
	int _notifyToken;
	id _pendingAlerts;
	id _requestConnection;
}

+ _alertForTag:
+ _showAlertWithMessage:connection:
+ pluginAlertItem:didDeactivateWithReason:
+ _updateAlertWithMessage:connection:
+ _registerConnection
+ _disconnectRequestConnection:
+ _cancelAlertWithMessage:connection:
+ _handleMessage:connection:
+ dealloc
+ init
+ _start
+ .cxx_destruct
- _alertForTag:
- _showAlertWithMessage:connection:
- pluginAlertItem:didDeactivateWithReason:
- _updateAlertWithMessage:connection:
- _registerConnection
- _disconnectRequestConnection:
- _cancelAlertWithMessage:connection:
- _handleMessage:connection:
- dealloc
- init
- _start
- .cxx_destruct
@end
