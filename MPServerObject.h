@interface MPServerObject : NSObject
{
	int _clientPID;
	pointer _clientAuditToken;
}

+ _registerNotificationsForSelectors
+ _forwardMessage:userInfo:auditToken:
+ clientAuditToken
+ init
+ clientPID
- _registerNotificationsForSelectors
- _forwardMessage:userInfo:auditToken:
- clientAuditToken
- init
- clientPID
@end
