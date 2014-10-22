@interface SSPurchaseManager : NSObject
{
	id _completionBlockQueue;
	id _delegate;
	id _dispatchQueue;
	id _managerIdentifier;
	id _requestConnection;
	id _responseConnection;
}

+ initWithManagerIdentifier:
+ getPurchasesUsingBlock:
+ addPurchases:withCompletionBlock:
+ cancelPurchases:withCompletionBlock:
+ movePurchases:afterPurchase:withCompletionBlock:
+ dealloc
+ setDelegate:
+ init
+ delegate
+ _connectToDaemon
+ _requestConnection
+ _responseConnection
+ _sendMessage:withPurchases:afterPurchase:completionBlock:
+ _sendMessage:withPurchaseIdentifiers:afterPurchase:completionBlock:
+ _sendCompletionBlock:forGetPurchasesReply:
+ _handleMessage:fromConnection:
+ _resultForReply:error:
+ _newEncodedArrayWithPurchaseIdentifiers:
+ _sendCompletionBlock:forStandardReply:
+ _newEncodedArrayWithPurchases:
+ insertPurchases:afterPurchase:withCompletionBlock:
+ managerIdentifier
+ _reconnectForDaemonLaunch
- initWithManagerIdentifier:
- getPurchasesUsingBlock:
- addPurchases:withCompletionBlock:
- cancelPurchases:withCompletionBlock:
- movePurchases:afterPurchase:withCompletionBlock:
- dealloc
- setDelegate:
- init
- delegate
- _connectToDaemon
- _requestConnection
- _responseConnection
- _sendMessage:withPurchases:afterPurchase:completionBlock:
- _sendMessage:withPurchaseIdentifiers:afterPurchase:completionBlock:
- _sendCompletionBlock:forGetPurchasesReply:
- _handleMessage:fromConnection:
- _resultForReply:error:
- _newEncodedArrayWithPurchaseIdentifiers:
- _sendCompletionBlock:forStandardReply:
- _newEncodedArrayWithPurchases:
- insertPurchases:afterPurchase:withCompletionBlock:
- managerIdentifier
- _reconnectForDaemonLaunch
@end
