@interface MBManagerServer : NSObject
{
	id _conn;
	id _connections;
	id _connectionsQueue;
}

+ _restoreInfo
+ _broadcastMessageToClients:
+ _handleRequest:forConnection:
+ manager:didUpdateProgress:estimatedTimeRemaining:context:
+ manager:didFinishRestoreWithContext:
+ manager:didFailRestoreWithContext:error:
+ dealloc
+ description
+ managerDidFinishBackup:
+ managerDidFinishScan:
+ manager:didFailBackupWithError:
+ manager:didFailScanWithError:
+ managerDidCancelRestore:
+ manager:didSetBackupEnabled:
+ connection:didReceiveMessage:
+ connectionWasInterrupted:
+ connectionWasInvalid:
+ initWithServiceName:
- _restoreInfo
- _broadcastMessageToClients:
- _handleRequest:forConnection:
- manager:didUpdateProgress:estimatedTimeRemaining:context:
- manager:didFinishRestoreWithContext:
- manager:didFailRestoreWithContext:error:
- dealloc
- description
- managerDidFinishBackup:
- managerDidFinishScan:
- manager:didFailBackupWithError:
- manager:didFailScanWithError:
- managerDidCancelRestore:
- manager:didSetBackupEnabled:
- connection:didReceiveMessage:
- connectionWasInterrupted:
- connectionWasInvalid:
- initWithServiceName:
@end
