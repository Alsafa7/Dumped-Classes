@interface CPDistributedNotificationCenter : NSObject
{
	id _centerName;
	id _lock;
	pointer _receiveNotificationSource;
	BOOL _isServer;
	pointer _sendPorts;
	usigned long long _startCount;
}

+ postNotificationName:userInfo:toBundleIdentifier:
+ runServerOnCurrentThread
+ dealloc
+ runServer
+ name
+ _initWithServerName:
+ _checkOutAndRemoveSource
+ _checkIn
+ startDeliveringNotificationsToRunLoop:
+ _createReceiveSourceForRunLoop:
+ deliverNotification:userInfo:
+ _receivedCheckIn:auditToken:
+ _notificationServerWasRestarted
+ postNotificationName:
+ startDeliveringNotificationsToMainThread
+ stopDeliveringNotifications
+ postNotificationName:userInfo:
- postNotificationName:userInfo:toBundleIdentifier:
- runServerOnCurrentThread
- dealloc
- runServer
- name
- _initWithServerName:
- _checkOutAndRemoveSource
- _checkIn
- startDeliveringNotificationsToRunLoop:
- _createReceiveSourceForRunLoop:
- deliverNotification:userInfo:
- _receivedCheckIn:auditToken:
- _notificationServerWasRestarted
- postNotificationName:
- startDeliveringNotificationsToMainThread
- stopDeliveringNotifications
- postNotificationName:userInfo:
@end
