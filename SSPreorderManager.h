@interface SSPreorderManager : NSObject
{
	id _connection;
	id _dispatchQueue;
	id _itemKinds;
	id _observerConnection;
	id _observerQueue;
	pointer _observers;
	id _preorders;
}

+ dealloc
+ init
+ removeObserver:
+ addObserver:
+ preorders
+ _connectAsObserver
+ _handleMessage:fromServerConnection:
+ _sendMessageToObservers:
+ _registerAsObserver
+ cancelPreorders:withCompletionBlock:
+ itemKinds
+ reloadFromServer
+ initWithItemKinds:
- dealloc
- init
- removeObserver:
- addObserver:
- preorders
- _connectAsObserver
- _handleMessage:fromServerConnection:
- _sendMessageToObservers:
- _registerAsObserver
- cancelPreorders:withCompletionBlock:
- itemKinds
- reloadFromServer
- initWithItemKinds:
@end
