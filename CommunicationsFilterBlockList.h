@interface CommunicationsFilterBlockList : NSObject
{
	id _connection;
	int _retries;
	id _queue;
	id _recentObjectsTested;
	id _cache;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;
}

+ dealloc
+ init
+ _sendSynchronousXPCRequest:
+ _sendXPCRequest:completionBlock:
+ addItemForAllServices:
+ removeItemForAllServices:
+ isItemInList:
+ copyAllItems
+ _disconnected
+ _connect
+ _disconnect
- dealloc
- init
- _sendSynchronousXPCRequest:
- _sendXPCRequest:completionBlock:
- addItemForAllServices:
- removeItemForAllServices:
- isItemInList:
- copyAllItems
- _disconnected
- _connect
- _disconnect
@end
